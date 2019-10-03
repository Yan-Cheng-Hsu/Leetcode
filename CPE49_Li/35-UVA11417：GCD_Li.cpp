#include <cstdio>
using namespace std;

int main(){
    int n, i, j;
    int ans, temp1, temp2, temp3;
    while(scanf("%d", &n)!=EOF){
        if(n==0) break;
        
        ans = 0;
        for(i=1; i<n; i++){
            for(j=i+1; j<=n; j++){
                temp1 = i;
                temp2 = j;
                while(temp2%temp1!=0){
                    temp3 = temp1;
                    temp1 = temp2%temp1;
                    temp2 = temp3;
                }
                ans += temp1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}