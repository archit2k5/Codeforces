#include<iostream>
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

        vector<pair<int, int>> aux;
        for(int i=0; i<n; i++){
            int remainder=arr[i]%k;
            if(remainder==0){
                remainder=k;
            }
            aux.push_back({remainder, i});
        }

        sort(aux.begin(), aux.end(), [](pair<int, int>a, pair<int, int>b){
            if(a.first != b.first){
                return a.first>b.first;
            }
            return a.second<b.second;
        });

        for(const auto& x: aux){
            cout<<x.second+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}