#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int i, j, k;
    string unit[5] = {"", " shata", " hajar", " lakh", " kuti"};
    int unit_len[4] = {100, 10, 100, 100};
    int int_temp;
    
    stringstream sstr;
    string data, answer, sub, str_temp;
    i = 1;
    while(cin>>data){
        if(data[0]=='0'){
            cout<<setw(4)<<i<<". 0\n";
            i++;
            continue;
        }
        answer = "";
        while(data.length()>0){
            if(data.length()>7){
                sstr.str(data.substr(data.length()-7));
                data = data.substr(0, data.length()-7);
            }
            else{
                sstr.str(data);
                data = "";
            }
            sstr>>int_temp;
            sstr.clear();
            
            sub = "";
            for(k=0; k<4; k++){
                if(int_temp%unit_len[k]!=0){
                    sstr.str("");
                    sstr<<int_temp%unit_len[k];
                    sstr>>str_temp;
                    sstr.clear();
                    sub = " " + str_temp + unit[k] + sub;
                }
                int_temp /= unit_len[k];
            }
            
            answer = sub + answer;
            if(data!="") answer = unit[4] + answer;
        }
        cout<<setw(4)<<i<<"."<<answer<<"\n";
        i++;
    }
    return 0;
}