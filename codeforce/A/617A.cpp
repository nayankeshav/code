#include <iostream>

int main()
{
    int coordinate, count = 0, i=0;
    int path[] = {5,4,3,2,1};
    
    std::cin >> coordinate;
    int step = 0;
    while(coordinate!=count){
        if(count + path[i] <= coordinate){
            count = count + path[i];
            step++;
        }
        else{
            i++;
        }
    }
    std::cout << step <<std::endl;
}
