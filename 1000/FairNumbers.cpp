#include<iostream>
#include<vector>

int findHcf(int a, int b){
    if(b == 0){
        return a;
    }
    return findHcf(b, a%b);

}

int findLcm(int a, int b){
    if(a ==0 || b==0 ){
        return 0;
    }
    return ( a/(findHcf(a, b))*b );
}

int digitLcm(long long num){
    int currLcm=1;
    while(num>0){
        int digit = num % 10;
        if(digit!=0){
            currLcm=findLcm(currLcm, digit);
        }
        num/=10;
    }
    return currLcm;
}

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        while(true){
            int currLcm= digitLcm(n);
            if(n % currLcm == 0){
                break;
            }
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}