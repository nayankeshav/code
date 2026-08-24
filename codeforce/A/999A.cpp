#include <iostream>

int main()
{
    int size, max;
    std::cin >> size >> max;
    
    int arr[size];
    
    for(int i = 0;i<size;i++){
        std::cin >> arr[i];
    }
    
    int count = 0;
    
    int l_index = 0, r_index = size-1;
    
    
    while(l_index <= r_index){
        if(l_index <= size-1 and arr[l_index]<=max){
            count++;
            l_index++;
        }
        else if(r_index >= 0 and arr[r_index]<=max){
            count++;
            r_index--;
        }
        else{
            break;
        }
    }
    
    std::cout << count;
    
}
