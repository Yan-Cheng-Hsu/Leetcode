//so the overflow problem??????????
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int val = 0, ListNode* next = NULL)
	{
		this->val = val;
		this->next = next;
	}
	void print_val();
};
void ListNode::print_val()
{
	ListNode* temp = this;
	while (temp != NULL)
	{
		printf("%d\t", temp->val);
		temp = temp->next;
	}
	cout << endl;
	return;
}
class Solution 
{
public:
	bool isPalindrome(ListNode* head);
};
bool Solution::isPalindrome(ListNode* head)
{
	int rev = 0;
	ListNode* temp = head;
	while (temp != NULL)
	{
		rev = rev * 10 + temp->val;
		temp = temp->next;
	}
	int normal = 0;
	int rev1 = rev;
	while (rev1 != 0)
	{
		normal = normal * 10 + rev1 % 10;
		rev1 = rev1 / 10;
	}
	if (rev == normal)return true;
	else return false;
}

void test();
int main(void)
{
	test();
	system("pause");
	return 0;
}
void test()
{
	struct ListNode l1_7(1);
	struct ListNode l1_6(0, &l1_7);
	struct ListNode l1_5(1, &l1_6);
	struct ListNode l1_4(0, &l1_5);
	struct ListNode l1_3(1, &l1_4);
	struct ListNode l1_2(0, &l1_3);
	struct ListNode l1_1(1, &l1_2);
	l1_1.print_val();
	Solution result;
	if (result.isPalindrome(&l1_1))cout << "yes." << endl;
	else cout << "no." << endl;
	
	return;
}