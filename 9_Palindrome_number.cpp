#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class Solution 
{
public:
	bool isPalindrome(int x);
};
bool Solution::isPalindrome(int x)
{
	if (x < 0)return false;

	int power_of_x =0;
	int org_x = x;
	while (org_x > 9)
	{
		org_x = org_x / 10;
		power_of_x++;
	}
	int org_x1 = x;
	int reverse_one = 0;
	while (power_of_x >= 0)
	{
		reverse_one = reverse_one + ((org_x1 % 10) * pow(10,power_of_x));
		org_x1 = org_x1 / 10;
		power_of_x--;
	}
	if (reverse_one == x)return true;
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
	Solution sov;
	cout << "num: ";
	int x;
	cin >> x;
	if (sov.isPalindrome(x))cout << "yes" << endl;
	else cout << "no" << endl;
	return;
}