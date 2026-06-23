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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);
        
        int b[n];
        int c[n];
        b[0]=arr[0];
        int sizeb=1, sizec=0;

        for(int i=1; i<n; i++){
            if(b[sizeb-1]%arr[i]!=0){
                c[sizec++]=arr[i];
            }
            else{
                b[sizeb++]=arr[i];
            }
        }

        if(sizec==0) cout<<-1<<endl;
        else{
            cout<<sizeb<<" "<<sizec<<endl;
            for(int i=0; i<sizeb; i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<sizec; i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}