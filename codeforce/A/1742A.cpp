#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int a,b,c, count=0;
    for(int i=0;i<x;i++){
        count=0;
        std::cin >> a >> b >> c;
        if(a == (b+c)){
            count = 1;
        }
        else if(b == (a+c)){
            count = 1;
        }
        else if(c == (a+b)){
            count = 1;
        }
        
        if(count ==1){
            std::cout << "YES" <<std::endl;
        }
        else{
            std::cout << "NO" <<std::endl;
        }
        
    }
}
