#include <iostream>
using namespace std;

#define MAX 100000

//��ȡ�����
void printLongestWord()
{

	//���������
	char buf[MAX] = { 0 };
	//��ǰ���
	int index = 0;
	//���������
	int longest = 0;
	//����ʳ�ʼ�±�
	int longest_index = 0;
	//��ǰ���ʵĳ���
	int current_length = 0;

	while (buf[index] = cin.get())
	{
		//�س�����
		if (buf[index] == '\n')
		{
			//�����ǰ���ʳ��ȴ����
			if (current_length > longest)
			{
				//��ǰ���ʳ�Ϊ�
				longest = current_length;

				//����ʵĳ�ʼ�±�仯
				longest_index = index - longest;
			}
			break;
		}


		//�ո��ж�
		else if (buf[index] == ' ')
		{
			//�����ǰ���ʳ��ȴ����
			if (current_length > longest)
			{
				//��ǰ���ʳ�Ϊ�
				longest = current_length;
				
				//����ʵĳ�ʼ�±�仯
				longest_index = index - longest;
			}

			//ˢ�¼�¼��ǰ���ȵı���
			current_length = 0;
		}

		//Сд��ĸ���¼���ۼƳ���
		else if (buf[index] >= 'a' && buf[index] <= 'z')
		{
			current_length++;
		}

		//�����쳣�ַ�����ϵ���
		else
		{
			current_length = 0;
		}

		//ÿ���±������ƶ�
		index++;
	}


	cout << "�����: ";
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