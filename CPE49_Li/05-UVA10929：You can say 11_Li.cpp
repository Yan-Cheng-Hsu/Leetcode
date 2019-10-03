#include <stdio.h>
using namespace std;

int main(){
    char data[1001] = "";
    int n = 0;
    int i;
    while(scanf("%s", data)!=EOF){
        if(data[0]=='0') break;
        
        n = 0;
        for(i=0; i<1000 && data[i]!=0; i+=2){
            n += data[i]-'0';
            if(data[i+1]!=0) n -= data[i+1]-'0';
            else             break;
        }
        
        n = (n<0)?(-n):(n);
        while(n>9){
            n = n/10 - n%10;
        }
        if(n==0) printf("%s is a multiple of 11.\n", data);
        else     printf("%s is not a multiple of 11.\n", data);
    }

    return 0;
}