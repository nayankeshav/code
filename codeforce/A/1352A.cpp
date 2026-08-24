#include <iostream>

int length_of_number(int x){
    int length = 0;
    while(x!=0){
        length++;
        x = x /10;
    }
    return length;
}

int powered(int y){
    int power = 1;
    if(y == 0){
        return 1;
    }
    else{
        for(int n = 0; n <y; n++){
            power = power * 10;
        }
        return power;
    }
}

int main()
{
    int a;
    std::cin >> a;
    
    
    for(int i=0; i<a; i++){
        int number, count = 0;
        std::cin >> number;
        
        int length = length_of_number(number);
        int arr[length] = {0};
        
        for(int j = 0; j<length; j++){
            int last_digit = number % 10;
            if(last_digit!=0){
                count++;
                arr[j] = last_digit * powered(j);
            }
            number = number / 10;
        }
        
        std::cout << count << std::endl;
        
        for(int j = 0; j < length; j++){
            if(arr[j] !=0){
                std::cout << arr[j] << " ";
            }
            std::cout << std::endl;
        }
    }
}
