#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<time.h>
using namespace std;

/*
the result is that Time Limit Exceeded.
*/

class Solution
{
    public:
        int romanToInt(string s);
    /*private:
        int ReturnDigit(string s, int index);*/
};
int Solution::romanToInt(string s)
{
    int target = 0;
    int index = 0;
    
    while(1)
    {
       
        if( index >= s.length() )break;

        if( s[index] == 'M' )
        {
            int counter = index;
            while(1)
            {
                if( s[counter] == s[counter+1] )counter++;
                else break;
            }
            int digit = counter - index + 1;
            target = target + digit*1000;
            index = index + digit;
        }
        else if( s[index] == 'D' )
        {
            target = target + 500;
            index++;
        }
        else if( s[index] == 'C' )
        {
            if( s[index] != s[index+1] )
            {
                if( s[index+1] == 'M' )
                {
                    target = target + 900;
                    index = index + 2;
                }
                if( s[index+1] == 'D' )
                {
                    target = target + 400;
                    index = index + 2;
                }
            }
            else
            {
                int counter = index;
                while(1)
                {
                    if( s[counter] == s[counter+1] )counter++;
                    else break;
                }
                int digit = counter - index + 1;
                target = target + digit*100;
                index = index + digit;
            }
        }
        else if( s[index] == 'L' )
        {
            
            target = target + 50;
            index++;
        }
        else if( s[index] == 'X' )
        {
            if( s[index] != s[index+1] )
            {
                if( s[index+1] == 'C' )
                {
                    target = target + 90;
                    index = index + 2;
                }
                if( s[index+1] == 'L' )
                {
                    target = target + 40;
                    index = index + 2;
                }
            }
            else
            {
                int counter = index;
                while(1)
                {
                    if( s[counter] == s[counter+1] )counter++;
                    else break;
                }
                int digit = counter - index + 1;
                target = target + digit*10;
                index = index + digit;
            }
        }
        else if( s[index] == 'V' )
        {
            target = target + 5;
            index = index +1 ;
        }
        else if( s[index] == 'I' )
        {
            if( s[index] != s[index+1] )
            {
                if( s[index+1] == 'X' )
                {
                    target = target + 9;
                    index = index + 2;
                }
                if( s[index+1] == 'V' )
                {
                    target = target + 4;
                    index = index + 2;
                }
            }
            else
            {
                int counter = index;
                while(1)
                {
                    if( s[counter] == s[counter+1] )counter++;
                    else break;
                }
                int digit = counter - index + 1;
                target = target + digit;
                index = index + digit;
            }
        }
        else break;

    }
    return target;
}

/*int Solution::ReturnDigit(string s, int index)
{
    int counter = index;
    while(1)
    {
        if( s[counter] == s[counter+1] ) counter++;
        else break;
    }
    return (counter - index + 1);
}*/


int main(void)
{
    Solution x;
    cout<<"plz input a string: ";
    string s;
    cin>>s;
    cout<<x.romanToInt(s);
    system("pause");
    return 0;
}