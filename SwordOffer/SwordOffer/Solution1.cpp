/**
在一个二维数组中，每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。请完成一个函数，
输入这样的一个二维数组和一个整数，判断数组中是否含有该整数

比如
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
思路1：
题目要求的矩阵是有序的，从左下角看，向上数字递减，向右数字递增
so:从左下角开始遍历，遇大右移，遇小上移，直到查找完毕，返回false，否则返回true
*/
bool Solution1::find1(vector<vector<int> > ay, int target)
{
	//获取行数
	int row = ay.size();
	if (row == 0)
		return false;
	//获取列数
	int col = ay[0].size();
	//行列变化标记
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
思路2：
方法2和方法1类似，这个方法是剑指offer里面推荐使用的，从右上角开始查询遍历
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