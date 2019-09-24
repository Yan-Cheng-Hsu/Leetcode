#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Solution 
{
    public:
        int mySqrt(int x);
};

int Solution::mySqrt(int x)
{
    x = sqrt(x);
    return x;
}



int main(void)
{
    cout<<"plz input a integer: ";
    int x;
    cin>>x;
    Solution s;
    cout<<"the solution is"<<s.mySqrt(x)<<endl;
    system("pause");
    return 0;
}