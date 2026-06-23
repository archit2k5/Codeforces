#include<iostream>
#include<set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int kx, ky;
        cin>>kx>>ky;
        int kingx, kingy;
        cin>>kingx>>kingy;
        int queenx, queeny;
        cin>>queenx>>queeny;

        int dx[4]={-1,-1,1,1}, dy[4]={-1,1,-1,1};

        set<pair<int, int>> king_pos, queen_pos;

        for(int i=0; i<4; i++){
            king_pos.insert({kingx+kx*dx[i], kingy+ky*dy[i]});
            king_pos.insert({kingx+ky*dx[i], kingy+kx*dy[i]});

            queen_pos.insert({queenx+kx*dx[i], queeny+ky*dy[i]});
            queen_pos.insert({queenx+ky*dx[i], queeny+kx*dy[i]});
        }

        int count=0;
        for(auto x: king_pos){
            if(queen_pos.find(x)!=queen_pos.end()){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}