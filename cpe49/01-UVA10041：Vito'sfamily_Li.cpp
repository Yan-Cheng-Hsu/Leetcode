#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, i, j, x;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &m);
        vector<int> data(m);
        for(j=0; j<m; j++){
            scanf("%d", &x);
            data[j] = x;
        }
        sort(data.begin(), data.end());
        x = 0;
        for(j=0; j<m/2; j++){
            x += data[data.size()-1-j] - data[j];
        }
        printf("%d\n", x);
    }
    return 0;
}