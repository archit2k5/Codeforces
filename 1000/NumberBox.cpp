#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> grid(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        int sum =0; 
        int min_elem = INT_MAX;
        int total_count =0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                int elem=grid[i][j];
                min_elem=min(abs(elem) ,min_elem);

                if(elem<0){
                    total_count++;
                }
                sum+=abs(elem);
            }
        }

        if(total_count%2 == 0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum- 2*min_elem<<endl;
        }
    }
    return 0;
}