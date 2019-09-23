#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<time.h>
using namespace std;

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



class Solution2
{
    public:
        int val(char x);
        int romanToInt(string s);
};
int Solution2::val(char x)
{
    if(x=='I') return 1;
    if(x=='V') return 5;
    if(x=='X') return 10;
    if(x=='L') return 50;
    if(x=='C') return 100;
    if(x=='D') return 500;
    if(x=='M') return 1000;
    else return 0;
}
int Solution2::romanToInt(string s)
{
    int ans=0;
    for(int i=0; i<s.length(); i++){
        if(i<s.length()-1 && val(s[i]) < val(s[i+1])){
            ans+=val(s[i+1]) - val(s[i]);
            i++;
        }
        else{
            ans += val(s[i]);
        }
    }
    return ans;
}


int main(void)
{
    Solution x;
    Solution2 y;
    cout<<"plz input a string: ";
    string s;
    cin>>s;

    clock_t t=clock(); 
    int result = x.romanToInt(s);
    t = clock() - t;
    cout<< "the result is: "<<result<<endl;
    cout<< "the Running time of Solution 1: "<<t<<endl;
    t=clock();
    result = y.romanToInt(s);
    t = clock() - t;
    cout<< "the result is: "<<result<<endl;
    cout<< "the Running time of Solution 2: "<<t<<endl;
    while(1)
    {}
    system("pause");
    return 0;
}