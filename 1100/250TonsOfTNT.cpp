#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> weights(n);
        for(int i=0; i<n; i++){
            cin>>weights[i];
        }

        ll ans=0;
        for(int i=1; i<=n; i++){ //number of trucks
            if(n%i!=0){
                continue;
            }
            ll mini=INT64_MAX;
            ll maxi=INT64_MIN;
            
            ll end = i;
            ll start = 0;

            while(end<=n){
                ll temp = 0;
                for(ll k=start; k<end; k++){
                    temp+=weights[k];
                }
                mini= min(mini, temp);
                maxi= max(maxi, temp);
                start=end;
                end+=i;
                
            }

            ans = max(maxi-mini, ans);
        }

        cout<<ans<<endl;
    }

    return 0;
}