#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int n, m, r;
    bool flag;
    while(scanf("%d", &n)!=EOF){
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                printf("%d is not prime.\n", n);
                flag = true;
                break;
            }
        }
        if(flag){
            flag = false;
            continue;
        }
        m = 0;
        r = n;
        while(r){
            m = m*10 + r%10;
            r = r/10;
        }
        if(m==n){
            printf("%d is prime.\n", n);
            continue;
        }
        for(int i=2; i<=sqrt(m); i++){
            if(m%i==0){
                printf("%d is prime.\n", n);
                flag = true;
                break;
            }
        }
        if(flag){
            flag = false;
        }
        else{
            printf("%d is emirp.\n", n);
        }
    }
    return 0;
}