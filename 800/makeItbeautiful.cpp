#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int asc[n];
        int desc[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            asc[i]=arr[i];
            desc[i]=asc[i];
        }

        sort(asc, asc+n);
        sort(desc, desc+n, greater<int>());

        int i=0, j=0, k=0;
        bool flag=true;
        while(k<n){
            if(asc[0]==desc[0]){
                flag=false;
                break;
            }
            else{
                if(k%2==0){
                    arr[k]=asc[i];
                    i++;
                    k++;
                    
                }
                else{
                    arr[k]=desc[j];
                    j++;
                    k++;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            for(i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}