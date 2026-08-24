#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int max_capacity = 0, exit_ = 0, enter_ = 0, current_capacity = 0;
    while(a!=0){
        std::cin >> exit_ >> enter_;
        if(a==1){
            current_capacity = current_capacity - exit_;
        }
        else{
            current_capacity = current_capacity + (enter_ - exit_);
        }
        if(current_capacity > max_capacity){
            max_capacity = current_capacity;
        }
        a--;
    }
    std::cout << max_capacity << std::endl;
}
