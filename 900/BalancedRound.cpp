#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        vector<int> interval;
        interval.push_back(-1);
        for(int i=0; i<n-1; i++){
            if(abs(arr[i]-arr[i+1])>k){
                interval.push_back(i);
            }
        }
        interval.push_back(n-1);

        int largest_interval=0;
        for(int i=0; i<interval.size()-1; i++){
            largest_interval=max(interval[i+1]-interval[i], largest_interval);
        }

        cout<<n-largest_interval<<endl;
    }
    return 0;
}