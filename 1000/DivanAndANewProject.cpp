#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<long long> ans(n+1);
        vector<pair<long long,long long>> map;

        for(int i=0; i<n; i++){
            map.push_back({arr[i], i});
        }

        sort(map.begin(), map.end(), [](pair<long long,long long> &a, pair<long long, long long> &b){
            return a.first>b.first;
        });

        long long sum=0;
        long long i=1;
        long long j=0;

        ans[0]=0;

        while(j<n){
            sum+=i*map[j].first;
            ans[map[j].second+1]=i;
            j++;
            if(j<n){
                sum+=i*map[j].first;
                ans[map[j].second+1]=-i;
                j++;
            }
            i++;
        }

        cout<<sum*2<<endl;
        for(int i=0; i<=n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}