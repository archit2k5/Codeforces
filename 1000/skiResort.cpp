#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, q;
        cin>>n>>k>>q;

        int weather[n];
        for(int i=0; i<n; i++){
            cin>>weather[i];
        }

        long long count=0;
        int streak=0;
        for(int i=0; i<n; i++){
            if(weather[i] <= q){
                streak++;
            }
            else{
                if(streak >= k){
                    long long diff = streak - k + 1;
				    count += (diff * (diff + 1)) / 2;
                }
                streak=0;
            }
            
        }

        if(streak >= k){
            long long diff = streak - k + 1;
			count += (diff * (diff + 1)) / 2;
        }
        cout<<count<<endl;
    }
    return 0;
}