#include <iostream>
#include <string>
int main()
{
    int number_of_times;
    std::cin >> number_of_times;
    for(int i =0; i<number_of_times; i++){
        std::string a;
        std::cin >> a;
        if(a[0]!='a' && a[1]!='b' && a[2]!='c'){
            std::cout<< "no\n";
        }
        else{
            std::cout<< "yes\n";
        }
        
    }
    
}
