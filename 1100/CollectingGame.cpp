#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

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

        vector<pair<ll, ll>> sorted;

        for(int i=0; i<n; i++){
            sorted.push_back({arr[i], i});
        }

        sort(sorted.begin(), sorted.end());

        vector<ll>prefixSum(n);
        prefixSum[0]=sorted[0].first;

        for(int i=1; i<n; i++){
            prefixSum[i]= prefixSum[i-1]+sorted[i].first;
        }


        vector<int> ans(n);
        for(int i=0; i<n; i++){
            int j=i;
            int found=i;
            while(j<n){
                pair<ll, ll>temp ={prefixSum[j]+1, INT_MIN};
                ll idx= lower_bound(sorted.begin(), sorted.end(), temp)- sorted.begin();
                idx--;
                if(idx==j){
                    break;
                }
                found+=idx-j;
                j=idx;
            }

            ans[sorted[i].second]= found;

        }
        for(const auto &x: ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}