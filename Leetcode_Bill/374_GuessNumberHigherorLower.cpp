#include<iostream>
#include<stdio.h>
using namespace std;



int guess(int num);

class Solution {
public:
    int guessNumber(int n);
};

int Solution::guessNumber(int n)
{
    int UpperBound = n;
    int LowerBound = 1;
    int CurrentPick = (UpperBound - LowerBound) / 2;
    while(1)
    {
        if(guess(UpperBound) == 0) return UpperBound;
        if(guess(LowerBound) == 0) return LowerBound;
        if( guess(CurrentPick) == 0 ) return CurrentPick;
        else if( guess(CurrentPick) == 1 )
        { 
            LowerBound = CurrentPick;
            CurrentPick = CurrentPick + (UpperBound - CurrentPick) / 2;
        }
        else if( guess(CurrentPick) == -1 )
        {
            UpperBound =CurrentPick;
            CurrentPick = CurrentPick - (CurrentPick - LowerBound) / 2;
        }
        else return 0;
        
    }
}



int main(void)
{
    int n;
    cout<<"input a number: ";
    cin>>n;
    cout<<guessNumber1(n)<<endl;
    
    system("pause");
    return 0;
}
