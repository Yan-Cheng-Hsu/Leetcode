#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector.h>
using namespace std;

typedef unsigned long int ul_int;

class Solution
{
    public:
        int countPrimes204( int n );
        int Sqrt( int n );
        void test();

};

int Solution::countPrimes204( int n )
{
    //Implementation of sieve of Eratosthenes

    if( n < 3 )
        return 0;
    
    ul_int PrimeNum = 0;
    bool Prime[n];
    for(ul_int i=0;i<n;i++)
        Prime[i] = true;

    for(ul_int i=2;i<n;i++)
    {
        if( !Prime[i] )
            continue;
        
        PrimeNum++;

        for(ul_int j=i*i;j<n;j=j+i)
            Prime[j] = false;

    }

    return PrimeNum;

}



int main(void)
{


    system("pause");
    return 0;
}