#include <iostream>

int main()
{
    int a,count=0;
    std::cin >> a;
    int quantity,capacity;
    for(int i=0;i<a;i++){
        std::cin >> quantity >> capacity;
        if((capacity-quantity) >= 2 ){
            count++;
        }
        
    }
    std::cout << count <<std::endl;
}
