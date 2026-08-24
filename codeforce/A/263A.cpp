#include <iostream>

int main()
{
    short int matrix[5][5];
    int x,y,times = 0;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    while(true){
        if(x>2){
            x--;
            times++;
        }
        if(x<2){
            x++;
            times++;
        }
        if(y>2){
            y--;
            times++;
        }
        if(y<2){
            y++;
            times++;
        }
        if(x==2 && y ==2){
            break;
        }
        
    }
    std::cout << times << std::endl;
    
}
