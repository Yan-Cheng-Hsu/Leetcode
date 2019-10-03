#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int A1, A2;
    int temp;
    vector<int> data;
    while(scanf("%d", &n)!=EOF){
        data.resize(0);
        for(int i=0; i<n; i++){
            scanf("%d", &temp);
            data.push_back(temp);
        }
        sort(data.begin(), data.end());
        if(data.size()%2==1){
            A1 = data[data.size()/2];
            A2 = A1;
        }
        else{
            A1 = data[data.size()/2-1];
            A2 = data[data.size()/2];
        }
        temp = 0;
        for(int i=0; i<data.size(); i++){
            if(data[i]>=A1 && data[i]<=A2) temp++;
        }
        printf("%d %d %d\n", A1, temp, A2-A1+1);
        
    }
    return 0;
}