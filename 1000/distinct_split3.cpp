#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int arr[26]={0};
        int arr1[n];
        int arr2[n];

        int count=0;

        for(int i=0; i<n; i++){
            int index=str[i]-'a';
            if(arr[index]==0){
                arr[index]=1;
                count++;
            }
            arr1[i]=count;
        }

        for(int i=0; i<26; i++){
            arr[i]=0;
        }

        count=0;
        for(int i=n-1; i>=0; i--){
            int index=str[i]-'a';
            if(arr[index]==0){
                arr[index]=1;
                count++;
            }
            arr2[i]=count;
        }

        int total=0;
        for(int i=0; i<n-1; i++){
            total=max(total, arr1[i]+arr2[i+1]);
        }
        cout<<total<<'\n';
    }

}