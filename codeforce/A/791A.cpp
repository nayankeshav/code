#include <iostream>

int main()
{
    int a,b, year=0;
    std::cin >> a >> b;
    while(true){
        a = a*3;
        b = b*2;
        year++;
        
        if(a>b){
            break;
        }
    }
    std::cout << year << std::endl; 

    return 0;
}
