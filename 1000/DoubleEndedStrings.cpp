#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a;
        cin>>b;

        int maxi=0;
        for(int i=0; i<a.size(); i++){
            int count=0;
            for(int j=0; j<b.size(); j++){
                if(a[i+count]==b[j]){
                    count++;
                }
                else if(count!=0){
                    maxi=max(count, maxi);
                    j=j-count;
                    count=0;
                }
            }
            maxi= max(count, maxi);
        }

        cout<<a.size()+b.size()-2*maxi<<endl;
    }
    return 0;
}