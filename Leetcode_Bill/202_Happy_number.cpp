/*
#definition of Happy number is on the wiki
*/

#include<iostream>
#include<stdio.h>
using namespace std;
class Solution 
{
public:
	bool isHappy(int n);
};
bool Solution::isHappy(int n)
{
	if (n <= 0)return false;
	while (1)
	{
		int temp = 0;
		while (n > 0)
		{
			temp = temp + pow((n % 10), 2);
			n = n / 10;
		}
		if (temp == 1)return true;
		if (temp == 4)return false;
		if (temp == 16)return false;
		if (temp == 37)return false;
		if (temp == 58)return false;
		if (temp == 89)return false;
		if (temp == 145)return false;
		if (temp == 42)return false;
		if (temp == 20)return false;
		n = temp;
	}
	
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
	cout << "plz input a num: ";
	int num;
	cin >> num;
	Solution sol;
	if (sol.isHappy(num))cout << "yes" << endl;
	else cout << "no" << endl;


	return;
}
