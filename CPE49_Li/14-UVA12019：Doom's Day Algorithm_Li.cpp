#include <string>
#include <cstdio>
using namespace std;

int main(){
    string week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    scanf("%d", &n);
    int m, d;
    for(int i=0; i<n; i++){
        scanf("%d %d", &m, &d);
        for(int j=0; j<m-1; j++){
            d += month[j];
        }
        printf("%s\n", week[(d-2)%7].c_str());
    }
    return 0;
}