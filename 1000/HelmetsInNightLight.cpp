#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, p;
        cin>>n>>p;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>min_heap;

        for(int i=0; i<n; i++){
            min_heap.push({b[i],a[i]});
        }
        int remaining=n;
        long long total_cost=0;
        total_cost+=p;
        remaining--;

        auto [cost, capacity]=min_heap.top();//i-cost, j-people
        while(remaining>0 && cost<p){
            min_heap.pop();
                
            total_cost+=(long long)min(capacity,remaining)*cost;
            remaining-=min(capacity,remaining);
            if(min_heap.empty()) break;
            cost=min_heap.top().first;
            capacity=min_heap.top().second;
        }

        total_cost+=(long long)remaining*p;
        cout<<total_cost<<endl;
    }
    return 0;
}