#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long n, m ,a;
    cin>>n>>m>>a;
    
    long long row=ceil((double)n/a);
    long long column=ceil((double)m/a);

    long long tiles=row*column;
    cout<<tiles;
    return 0;
}