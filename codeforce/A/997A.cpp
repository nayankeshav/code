#include <iostream>

int main()
{
    int main_number, no_of_times;
    std::cin >> main_number >> no_of_times;
    
    for(int i =0; i<no_of_times; i++){
        if(main_number%10 != 0){
            main_number = main_number - 1;
        }
        else{
            main_number = main_number / 10;
        }
    }
    
    std::cout << main_number;
}
