#include <iostream>
int main()
{
    int a[4];
    std::cin >> a[0] >> a[1] >> a[2] >> a[3];
    int repeatcount = 0;
    for(int i = 0; i<4;i++){
        for(int j = i; j <4;j++){
            if(a[i] == a[j]){
                if(i!=j){
                    repeatcount++;
                    break;
                }
            }
        }
    }
    
    std::cout << repeatcount;
}
