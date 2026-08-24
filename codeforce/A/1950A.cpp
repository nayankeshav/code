#include <iostream>
void check(int a, int b, int c){
    if(a<b &&b<c){
        std::cout << "STAIR" << std::endl;
    }
    else if(a<b&&b>c){
        std::cout<< "PEAK" << std::endl;
    }
    else{
        std::cout << "NONE" << std::endl;
    }
}
int main()
{
    int x, a,b,c, sum = 0;
    std::cin >> x;
    while(x!=0){
        std::cin >> a>>b>>c;
        check(a,b,c);
        x--;
    }
}
