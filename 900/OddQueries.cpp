#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, q;
        cin>>n>>q;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<long long> prefix_sum;
        prefix_sum.push_back(0);
        long long sum=0;

        for(int i=0; i<n; i++){
            sum+=arr[i];
            prefix_sum.push_back(sum);
        }

        while(q--){
            long long i, j, k;
            cin>>i>>j>>k;

            long long subarray_sum=prefix_sum[j]-prefix_sum[i-1];

            long long sum_replace= k*(j-i+1);

            if((sum-subarray_sum+sum_replace)%2==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}