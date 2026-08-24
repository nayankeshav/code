#include<iostream>
#include<string>
int main()
{
    std::string a,b;
    std::cin >>a;
    std::cin >>b;
    
    for(int i =0;i<a.length();i++){
        if(a[i]==b[i]){
            std::cout << "0";
        }
        else{
            std::cout << "1";
        }
    }
    
    
}
 
