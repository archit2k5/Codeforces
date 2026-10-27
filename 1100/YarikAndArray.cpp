#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int currSum = arr[0];
        int maxSum = arr[0];

        for(int i=1; i<n; i++){

            //start new subarray
            if(currSum+arr[i]<arr[i]){
                currSum = arr[i];
            }

            else if(!((arr[i]^arr[i-1]) & 1)){
                currSum = arr[i];
            }

            else{
                currSum += arr[i];
            }

            maxSum = max(maxSum , currSum);

        }

        cout<<maxSum<<endl;
    }

    return 0;
}