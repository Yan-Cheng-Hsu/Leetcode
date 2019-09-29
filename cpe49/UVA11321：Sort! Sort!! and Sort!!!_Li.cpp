#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

class rule{
private:
    int m = 1;
public:
    rule(int m) : m(m){}
    bool operator()(int a, int b){
        int am, bm;
        am = a % m;
        bm = b % m;
        
        if     (am<bm) return true;
        else if(am>bm) return false;
        else if(a%2!=0)
            if(b%2==0) return true;
            else       return a>b;
        else
            if(b%2!=0) return false;
            else       return a<b;
    }
};

int main(){
    int n, m;
    int i;
    while(scanf("%d %d", &n, &m)!=EOF){
        if(n==0 || m==0) break;
        
        vector<int> data(n);
        for(i=0; i<n; i++){
            scanf("%d", &(data[i]));
        }
        sort(data.begin(), data.end(), rule(m));
        printf("%d %d\n", n, m);
        for(i=0; i<n; i++){
            printf("%d\n", data[i]);
        }
    }
    
    printf("%d %d\n", 0, 0);
    return 0;
}