#include<iostream>
#include<string>
#include<vector>

int main(){
    int n;
    std::cin>>n;
    while(n--){
        std::string str;
        std::string t;
        std::cin>>str;
        std::cin>>t;

        int n1=str.size();
        int n2=t.size();

        std::vector<int> frequency_of_t(26,0);
        for(int i=0; i<n2; i++){
            frequency_of_t[t[i]-'A']++;
        }

        for(int i=n1-1; i>=0; i--){
            if(frequency_of_t[str[i]-'A']!=0){
                frequency_of_t[str[i]-'A']--;
            }
            else{
                str[i]='.';
            }
        }

        std::string compare="";
        for(int i=0; i<n1; i++){
            if(str[i]!='.'){
                compare+=str[i];
            }
        }

        if(compare==t){
            std::cout<<"Yes"<<std::endl;
        }
        else{
            std::cout<<"No"<<std::endl;
        }

    }

    return 0;
}