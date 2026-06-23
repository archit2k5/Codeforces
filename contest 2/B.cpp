#include<iostream>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int check[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>check[i];
        }

        map<int, int> minHeap;

        for(int i=0; i<n; i++){
            minHeap[arr[i]]=i;
        }

        bool checker=false;
        vector<int> modified;
        for(auto& x: minHeap){
            
        }
        if(checker){
            cout<<-1<<endl;
            break;
        }

        

        //bubble sort
        int swaps=0;
        bool swapped=false;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1-i; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapped=true;
                    swaps++;
                }
            }
            if(!swapped) break;
        }

        bool possible=true;
        for(int i=0; i<n; i++){
            if(arr[i]>check[i]){
                possible=false;
                break;
            }
        }
        if(possible){
            cout<<swaps<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    
    return 0;
}