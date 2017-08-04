/**
��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳�����������һ��������
����������һ����ά�����һ���������ж��������Ƿ��и�����

����
1  2  8  9
2  4  9  12
4  7  10 13
6  8  11 15

*/
#include "Solution1.h"

#include <iostream>

using namespace std;


Solution1::Solution1(void)
{
}


Solution1::~Solution1(void)
{
}

bool Solution1::find(vector<vector<int> > ay, int target)
{
	int row = ay.size();
	if (row == 0)
		return false;
	int col = ay[0].size();
	int i = 0,j = col - 1;
	while ( (i < row) && (j >= 0) )
	{
		if (ay[i][j] == target )
			return true;
		else if (ay[i][j] > target ){
			j--;
		}else{
			i++;
		}
	}
	return false;
}

void Solution1::test()
{
		vector <vector<int> > array1{{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 16, 17, 18, 19, 20 }};

		vector<int> target{ 1, 2, 3, 10, 0, -1, 32, 34, 20, 16, 15, 6 };
		for (int i = 0; i != target.size(); i++){
			cout << "target " << target[i] << boolalpha << "    std:" << (1 <= target[i] && target[i] <= 20) << "  res:"
				<< find(array1, target[i]) << endl;
		}
}