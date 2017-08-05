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
#include <vector>

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
	vector<vector<int> > array1 = { 
		{ 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, {6, 8, 11, 15}
	};

	int row = array1.size();
	int col = array1[0].size();

	vector<int> target{1, 2, 3, 4, 5, 6, 7, 8};

	std::cout << "===============start test solution1===================" << std::endl;

	for (int i = 0; i < target.size(); i++)
	{
		cout << "target:" << target.at(i)<< boolalpha << "  fiind: " << find(array1,target.at(i)) << endl;
	}

	std::cout << "===============end test solution1===================" << std::endl;
}