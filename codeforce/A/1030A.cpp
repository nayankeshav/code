#include <iostream>

int main()
{
    int a, b, check = 0;
    std::cin >> a;
    for(int i=0;i<a;i++){
        std::cin >> b;
        if(check==0 and b==1){
            check = 1;
        }
    }
    if(check == 1){
        std::cout << "HARD";
    }
    else{
        std::cout << "EASY";
    }
    
}
