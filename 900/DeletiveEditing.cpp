#include<iostream>

using namespace std;

void deleteChar(string& str, char ch, int& n){
    int idx=str.find(ch);
    if(idx==string::npos){
        return;
    }
    else{
        for(int i=idx; i<n-1; i++){
            str[i]=str[i+1];
        }
        str[n-1]='#';
        n--;
        return;
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        string t;
        cin>>str;
        cin>>t;

        int n1=str.size();
        int n2=t.size();

        int i=0;
        for(const char& x: t){
            while(i<n1 && x!=str[i]){
                deleteChar(str, str[i], n1);
            }
            i++;
        }
        
        int steps=n1;
        if(n1>n2){
            for(int j=i; j<steps; j++){
                deleteChar(str, str[i], n1);
            }
        }

        if(str.substr(0, n1)==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}