#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int w, h;
        cin>>w>>h;

        long long a,b,c,d;

        cin>>a;
        long long bottom[a];
        for(int i=0; i<a; i++){
            cin>>bottom[i];
        }

        cin>>b;
        long long top[b];
        for(int i=0; i<b; i++){
            cin>>top[i];
        }

        cin>>c;
        long long left[c];
        for(int i=0; i<c; i++){
            cin>>left[i];
        }

        cin>>d;
        long long right[d];
        for(int i=0; i<d; i++){
            cin>>right[i];
        }
        
        long long maxw=max(left[c-1]-left[0], right[d-1]-right[0]);
        long long maxh=max(bottom[a-1]- bottom[0], top[b-1]-top[0]);

        long long area1=maxw*w;
        long long area2=maxh*h;

        long long maxarea=max(area1, area2);

        cout<<maxarea<<'\n';
    }
    return 0;

}