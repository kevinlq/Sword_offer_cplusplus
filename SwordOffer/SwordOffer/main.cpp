#include <iostream>
#include "Solution1.h"

using namespace std;

int main(int argc,char *argv[])
{
	Solution1 s1;
	s1.test();

	int a[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = i * 4 + j;
		}
	}

	for (int i = 0; i < 12; i++)
	{
		printf("a[%d] = %d\n",i,*(*a + i));
	}

	system("pause");
	return 0;
}