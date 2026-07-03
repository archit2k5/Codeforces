#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, k, b, s;
        cin>>n>>k>>b>>s;

        if(b*k>s){
            cout<<-1<<endl;
            continue;
        }
        else if( (b*k) + (n*(k-1)) < s ){
            cout<<-1<<endl;
            continue;
        }
        else{
            vector<long long> ans;
            long long x =s;

            if(x >= b*k){
                x-= (b*k);
                // cout<<x<<" ";
                if(x >= (k-1)){
                    x-=(k-1);
                    ans.push_back((b*k)+(k-1));
                }
                else{
                    ans.push_back((b*k)+(x%(k-1)));
                    x-=(x%(k-1));
                    // cout<<x<<" "<<k-1<<" "<<x%(k-1)<<" ";
                }
            }

            for(int i=1; i<n; i++){
                if(x>=(k-1)){
                    x-=(k-1);
                    ans.push_back(k-1);
                }
                else{
                    ans.push_back(x%(k-1));
                    x-=x%(k-1);
                }
            }

            for(const auto& elem: ans){
                cout<<elem<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}