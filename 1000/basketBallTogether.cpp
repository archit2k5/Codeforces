#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long n, d;
    cin>>n>>d;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);

    int i=0, j=n-1;
    int count=0;
    while(i<=j){
        int power=arr[j];
        while(power<=d && i<j){
            power+=arr[j];
            i++;
        }
        if(power>d){
            count++;
        }
        j--;
    }
    cout<<count<<endl;

    return 0;
}