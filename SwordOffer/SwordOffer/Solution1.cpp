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

/**
˼·1��
��ĿҪ��ľ���������ģ������½ǿ����������ֵݼ����������ֵ���
so:�����½ǿ�ʼ�������������ƣ���С���ƣ�ֱ��������ϣ�����false�����򷵻�true
*/
bool Solution1::find1(vector<vector<int> > ay, int target)
{
	//��ȡ����
	int row = ay.size();
	if (row == 0)
		return false;
	//��ȡ����
	int col = ay[0].size();
	//���б仯���
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

/*
˼·2��
����2�ͷ���1���ƣ���������ǽ�ָoffer�����Ƽ�ʹ�õģ������Ͻǿ�ʼ��ѯ����
*/
bool Solution1::find2(int * matrix, int rows, int columns, int number)
{
	bool found = false;
	if (matrix != NULL && rows > 0 && columns > 0)
	{
		int row = 0;
		int column = columns - 1;

		while (row < rows && column > 0)
		{
			if (matrix[row * columns + column] == number){
				found = true;
				break;
			}
			else if (matrix[row * columns + column] > number)
				--column;
			else
				++row;
		}
	}
	return found;
}

void Solution1::test()
{
	vector<vector<int> > array1 = { 
		{ 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, {6, 8, 11, 15}
	};

	int array2[4][4] = {
		{ 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 }
	};

	vector<int> target{1, 2, 3, 4, 5, 6, 7, 8};

	std::cout << "===============start test solution1===================" << std::endl;

	std::cout << "test find1" << std::endl;

	for (int i = 0; i < target.size(); i++)
	{
		cout << "target:" << target.at(i)<< boolalpha << "  fiind: " << find1(array1,target.at(i)) << endl;
	}

	std::cout << "\r\ntest find2" << std::endl;
	int value = 11;
	if ( find2((int *)array2, 4, 4, value))
		std::cout << "find value " << value << endl;
	else
		std::cout << "not find value " << value << endl;

	std::cout << "===============end test solution1===================" << std::endl;
}