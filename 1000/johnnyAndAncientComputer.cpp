#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;

        long long big = max(a, b);
        long long small = min(a, b);

        int count=0;
        bool flag = false;
        while((big>>1) >= small){
            if((big&1) == 1){
                flag=true;
                break;
            }
            big>>=1;
            count++;
        }

        if(flag || big>small){
            cout<<-1<<endl;
        }
        else{
            int remainder=0;
            int op=0;

            if(count>=3){
                remainder=count%3;
                op+=count/3;
                count=remainder;
            }

            if(count>=2){
                remainder=count%2;
                op+=count/2;
                count=remainder;
            }
            op+=count;
            cout<<op<<endl;
        }
    }
}