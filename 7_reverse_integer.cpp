#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Solution 
{
public:
	int reverse(int x);
};

int Solution::reverse(int x)
{
	int overflow_flag = x;
	for (int i = 0; i < 30; i++)
	{
		overflow_flag = overflow_flag / 2;
	}
	if (overflow_flag > 1)return 0;
	if (overflow_flag < -2)return 0;
	int reverse_one = 0;
	if (x >= 0)
	{
		int power_of_x = 0;
		int org_x = x;
		while (org_x > 9)
		{
			org_x = org_x / 10;
			power_of_x++;
		}
		int org_x1 = x;
		while (power_of_x >= 0)
		{
			reverse_one = reverse_one + ((org_x1 % 10) * pow(10, power_of_x));
			org_x1 = org_x1 / 10;
			power_of_x--;
		}
	}
	else
	{
		int power_of_x = 0;
		int org_x = -x;
		while (org_x > 9)
		{
			org_x = org_x / 10;
			power_of_x++;
		}
		int org_x1 = -x;
		while (power_of_x >= 0)
		{
			reverse_one = reverse_one - ((org_x1 % 10) * pow(10, power_of_x));
			org_x1 = org_x1 / 10;
			power_of_x--;
		}
	}
	return reverse_one;
}

int main(void)
{
	/*Solution solve;
	cout << "plz enter a num: " ;
	int num;
	cin >> num;
	num = solve.reverse(num);
	cout << "the answer is: " << num << endl;*/
	cout << pow(2, 31) << endl;
	system("pause");
	return 0;
}