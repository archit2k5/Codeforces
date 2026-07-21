#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        if(n==1){
            cout<<-1<<endl;
            continue;
        }

        vector<char> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(2*k>n){
            cout<<-1<<endl;
            continue;
        }

        int count=0;
        int i=0;
        while(i<k){
            if(arr[i]=='L'){
                count++;
            }
            if(arr[n-1-i]=='R'){
                count++;
            }
            i++;
        }
        cout<<count<<endl;
    }
}