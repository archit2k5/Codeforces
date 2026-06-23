#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int box[n];
        for(int i=0; i<n; i++){
            cin>>box[i];
        }
        if(k>=2){
            cout<<"Yes"<<'\n';
        }
        else{
            bool asc=true;
            for(int i=0; i<n-1; i++){
                if(box[i]>box[i+1]){
                    asc=false;
                    break;
                }
            }
            if(asc) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
        }
    }

}