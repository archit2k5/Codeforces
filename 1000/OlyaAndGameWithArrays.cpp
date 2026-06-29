#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> minPair;
        while(n--){
            int m;
            cin>>m;
            vector<int> arr;
            for(int i=0; i<m; i++){
                int elem;
                cin>>elem;
                arr.push_back(elem);
            }
            sort(arr.begin(), arr.end());
            minPair.push_back({arr[0],arr[1]});
        }
        sort(minPair.begin(), minPair.end());

        int mini=INT_MAX;
        int mini_index=0;
        long long sum=0;
        for(int i=0; i<minPair.size(); i++){
            if(minPair[i].second<mini){
                mini=minPair[i].second;
                mini_index=i;
            }
        }
        
        for(int i=0; i<minPair.size(); i++){
            if(i==mini_index){
                sum+=minPair[0].first;
            }
            else{
                sum+=minPair[i].second;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}