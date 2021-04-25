#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cmath>
using namespace std;


class Solution 
{
    public:
        string addBinary(string a, string b) ;
};

string Solution::addBinary(string a, string b)
{
    int input_a = 0;
    int input_b = 0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i] == '1')input_a = input_a + pow( 2.0 , a.length()-1-i);
    }
    for(int i=0;i<b.length();i++)
    {
        if(b[i] == '1')input_b = input_b + pow( 2.0 , b.length()-1-i);
    }
    cout<<input_a<<" "<<input_b<<" "<<endl;
    string output = "";
	
    int output_int = input_a + input_b;
	cout << output_int;
    while(output_int != 0)
    {
		int remainder = ouput % 2;
		output = output + remainder;
        
        output_int = output_int / 2;
    }

    return output;
}

int main(void)
{
    string a = "100";
    string b = "100";
    Solution s;

    cout<< s.addBinary(a,b) <<endl;
    system("pause");
    return 0;
}