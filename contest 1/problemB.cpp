#include<iostream>
#include<cmath>

using namespace std;

int maximum_score(int red[], int blue[], int i, int score, int n){
    if(i==n){
        return score;
    }
        
    if(i<n){
        score=max(maximum_score(red, blue, i+1, score-red[i], n),
        maximum_score(red, blue, i+1, blue[i]-score, n));
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int red[n];
        int blue[n];

        for(int i=0; i<n; i++){
            cin>>red[i];
        }
        for(int i=0; i<n; i++){
            cin>>blue[i];
        }

        int score=0;

        int maxi=maximum_score(red, blue, 0, score, n);


        cout<<maxi<<'\n';
    }
    return 0;
}