#include<iostream>
using namespace std;
class Solution
{
public:
	bool isPalindrome(int x);
};
bool Solution::isPalindrome(int x)
{
	int rev_x = 0;
	int org_x = x;
	while (org_x > 0)
	{
		rev_x = rev_x * 10 + (org_x % 10);
		org_x = org_x / 10;
	}
	if (rev_x == x) return true;
	else            return false;
}

void test();

int main(void)
{
	test();
	return 0;
}

void test()
{
	Solution sov;
	cout << "num: ";
	int x;
	cin >> x;
	if (sov.isPalindrome(x))cout << "yes" << endl;
	else cout << "no" << endl;
	return;
}
