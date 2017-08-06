#pragma once

#include <vector>

using namespace std;

class Solution3
{
	struct ListNode
	{
		int value;
		struct ListNode *next;
		ListNode(int x) :
			value(x), next(NULL){}
	};
public:
	Solution3();
	~Solution3();

	void display(const vector<int> &res);

	void test();

private:
	vector<int> printListFromTailToHead(ListNode* head);
};

