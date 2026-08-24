#include <iostream>
 
int main()
{
    int a;
    std::cin >> a;
    
    char input, buffer = '\0';
    int remove_ = 0;
    
    for(int i=0;i<a;i++){
        std::cin >> input;
        if(input==buffer){
            remove_++;
        }
        buffer=input;
    }
    
    std::cout << remove_;
    
}
