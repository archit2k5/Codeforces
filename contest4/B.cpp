#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, c;
        cin>>n>>c;
        vector<long long>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long score=0;
        sort(arr.begin(), arr.end());

        int i=0, j=n-1;
        while(i<=j){
            if(arr[i]<=c){
                score+=max(arr[i], arr[j])-c;
                i++;
                j--;
            }
            else{
                score+=arr[i]-c;
                i++;
            }
        }
        cout<<score<<endl;
    }
    return 0;
}