/*
��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20��
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy
*/
#include "Solution2.h"
#include <iostream>

using namespace std;

Solution2::Solution2()
{
}


Solution2::~Solution2()
{
}

void Solution2::replaceSpace(char str[], int length)
{
	if (str != nullptr && length > 0 )
	{
		//����ո���Ŀ
		int count = 0;
		for (int i = 0; i < length; i++)
		{
			if (str[i] == ' ')
				count++;
		}

		//�����µ��ַ�������
		int newLength = length + 2 * count;
		int j = newLength - 1;
		for (int i = length - 1; i > 0; i--)
		{
			if (count == 0)
				break;

			if (str[i] == ' '){
				str[j--] = '0';
				str[j--] = '2';
				str[j--] = '%';
				count--;
			}
			else{
				str[j--] = str[i];
			}
		}
	}
}

void Solution2::test()
{
	std::cout << "===============start test solution2===================" << std::endl;

	char str[30] = "we are happy!";

	replaceSpace(str,strlen(str));

	cout << "replace after:" << str<<endl;

	std::cout << "===============end test solution2===================" << std::endl;
}