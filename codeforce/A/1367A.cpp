 1367A
#include <iostream>
#include <string>
int main()
{
    int a;
    std::cin >> a;
    
    for(int i = 0; i< a; i++){
        std::string in;
        std::cin >> in;
        
        std::cout << in[0];
        
        for(int j = 1; j<in.length();j = j+2){
            std::cout << in[j];
        }
        
        std::cout << "\n";
    }
}
