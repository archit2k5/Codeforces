#include<iostream>
#include<vector>

using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        vector<int> longestSubA(2*n+1, 0);
        vector<int> longestSubB(2*n+1, 0);

        int count=1;
        for(int i=1; i<n; i++){
            if(a[i]==a[i-1]){
                count++;
            }
            else{
                longestSubA[a[i-1]]=max(count, longestSubA[a[i-1]]);
                count=1;
            }
        }

        longestSubA[a[n-1]]=max(count, longestSubA[a[n-1]]);

        count=1;
        for(int i=1; i<n; i++){
            if(b[i]==b[i-1]){
                count++;
            }
            else{
                longestSubB[b[i-1]]=max(count, longestSubB[b[i-1]]);
                count=1;
            }
        }

        longestSubB[b[n-1]]=max(count, longestSubB[b[n-1]]);

        int maxi=0;
        for(int i=1; i<=2*n; i++){
            maxi=max(longestSubA[i]+longestSubB[i], maxi);
        }
        cout<<maxi<<endl;
    }
}

