#include <iostream>
using namespace std;

#define MAX 100000

//获取最长单词
void printLongestWord()
{

	//缓存最长单词
	char buf[MAX] = { 0 };
	//当前光标
	int index = 0;
	//保存最长长度
	int longest = 0;
	//最长单词初始下标
	int longest_index = 0;
	//当前单词的长度
	int current_length = 0;

	while (buf[index] = cin.get())
	{
		//回车结束
		if (buf[index] == '\n')
		{
			//如果当前单词长度大于最长
			if (current_length > longest)
			{
				//当前单词成为最长
				longest = current_length;

				//最长单词的初始下标变化
				longest_index = index - longest;
			}
			break;
		}


		//空格判断
		else if (buf[index] == ' ')
		{
			//如果当前单词长度大于最长
			if (current_length > longest)
			{
				//当前单词成为最长
				longest = current_length;
				
				//最长单词的初始下标变化
				longest_index = index - longest;
			}

			//刷新记录当前长度的变量
			current_length = 0;
		}

		//小写字母则记录，累计长度
		else if (buf[index] >= 'a' && buf[index] <= 'z')
		{
			current_length++;
		}

		//遇到异常字符，打断单词
		else
		{
			current_length = 0;
		}

		//每次下标往后移动
		index++;
	}


	cout << "最长单词: ";
	for (int i = 0; i < longest; i++)
	{
		cout << buf[i + longest_index];
	}
	cout << endl;
}


void test()
{
	printLongestWord();
}

int main(void)
{
	test();
	


	system("pause");
	return 0;
}