#include<iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>
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

class Solution2
{
    public: 
        //Newton Approximation
        double mySqrt(int x);
};
double Solution2::mySqrt(int x)
{
    double a = 1.0;
    while(1)
    {
        if( abs( a*a-x ) < 0.1 ) return a;
        a = ( a*a + x ) / (2*a);   
    }
}



int main(void)
{
    /*cout<<"plz input a integer: ";
    int x = 1;
    cin>>x;
    Solution s;
    Solution2 S;
    cout<<"the solution is"<<s.mySqrt(x)<<endl;
    cout<<"the sulotion is: "<< S.mySqrt(x)<<endl;*/
    for(int i=0;i<10;i++)
    {
        Solution s;
        clock_t t = clock();
        for(int j=0;j<10000;j++)
        {
            s.mySqrt(j);
        }
        cout<< t<<"@"<<endl;
        Solution2 S;
        t = clock();
        for(int j=0;j<10000;j++)
        {
            S.mySqrt(j);
        }
        t = float(clock() - t);
        cout<< t<<"@@"<<endl;
    }
    


    system("pause");
    return 0;
}


