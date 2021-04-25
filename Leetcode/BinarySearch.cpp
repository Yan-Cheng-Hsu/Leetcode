#include<stdio.h>
#include<iostream>
#include<vector.h>
#include<cmath>
using namespace std;


class Solution
{
    public:
        int ClassicalBinarySearch( int num , vector<int> nums );
        int Sqrt69_1( int x );
        int Sqrt69_2( int x );
        void test();
};






int Solution::ClassicalBinarySearch( int num , vector<int> nums )
{
    int out;



    return out;
}


int Solution::Sqrt69_1( int x )
{
    double y = (double) x;
    return int( sqrt(y) );
}

int Solution::Sqrt69_2( int x )
{
    int l = 1;
    int r = x/2 + 1;            
    while( l <= r )
    {
        int mid = (l+r) / 2;
        if( x/mid == mid )
            return mid;
        else if( x/mid > mid )
            l = mid + 1;
        else 
            r = mid - 1;

    }
    return r;

}






void Solution::test()
{
    int x;
    cout<<x<<endl;
    cout<<Sqrt69_2(x);
    return;
}


int main(void)
{
    Solution S;
    S.test();
    system("pause");
    return 0;
}