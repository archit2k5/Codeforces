#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        long long sum=0;
        long long arrSum=0;
        int maxi=0;
        for(int i=0; i<min(n,k); i++){
            arrSum+=a[i];
            maxi= max(maxi, b[i]);
            sum= max(sum, arrSum+(k-(i+1))*maxi);
        }

        cout<<sum<<endl;

    }
    return 0;
}