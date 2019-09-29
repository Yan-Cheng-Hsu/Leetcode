#include <cstdio>
using namespace std;

int main(){
    float x[4], y[4];
    int k;
    while(scanf("%f %f %f %f %f %f %f %f", &x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3])!=EOF){
        for(int i=0; i<2; i++){
            for(int j=2; j<4; j++){
                if(x[i]==x[j] && y[i]==y[j]){
                    k = i;
                }
            }
        }
        printf("%.3f %.3f\n", x[0]+x[1]+x[2]+x[3]-x[k]*3, y[0]+y[1]+y[2]+y[3]-y[k]*3);
    }
    return 0;
}