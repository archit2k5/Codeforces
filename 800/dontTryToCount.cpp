#include<iostream>
#include<string>

using namespace std;

bool substringCheck(string x, string s){
    int n=x.size();
    int m=s.size();
    for(int i=0; i<=n-m; i++){
        int subFound=x.compare(i, m, s);
        if(subFound==0){
            return true;
        }
        else continue;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x;
        cin>>s;

        int operation=0;
        int i=0;
        bool satisfied=false;
        while(i<=5){
            if(x.size()>=m && substringCheck(x,s)){
                satisfied=true;
                break;
            }
            operation++;
            i++;
            x=x+x;
        }
        if(satisfied){
            cout<<operation<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}