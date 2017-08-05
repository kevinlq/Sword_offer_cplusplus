#pragma once

#include <string>
#include <vector>

using namespace std;

class Solution1
{
public:
	Solution1(void);
	~Solution1(void);

	void test();

private:

	bool find1(vector<vector<int> > ay, int target);

	bool find2(int * matrix, int rows, int columns, int number);

};
