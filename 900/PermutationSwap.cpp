#include<iostream>

using namespace std;

int findHCF(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findHCF(b, a % b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int perm[n];
        for(int i=0; i<n; i++){
            cin>>perm[i];
        }

        int k=0;
        for(int i=0; i<n; i++){
            int dist=abs(perm[i]-(i+1));
            k=findHCF(dist, k);
        }

        cout<<k<<endl;


    }
    return 0;
}