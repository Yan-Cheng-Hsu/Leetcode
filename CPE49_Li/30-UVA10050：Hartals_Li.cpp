#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n, d, m, temp, ans;
    vector<int> data;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &d);
        scanf("%d", &m);
        ans = 0;
        data.resize(0);
        for(int j=0; j<m; j++){
            scanf("%d", &temp);
            data.push_back(temp);
        }
        for(int j=1; j<=d; j++){
            if(j%7!=0 && j%7!=6){
                for(int k=0; k<data.size(); k++){
                    if(j%data[k]==0){
                        ans++;
                        break;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}