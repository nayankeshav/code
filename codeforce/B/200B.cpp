#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    double percent;
    double quantity_sum = 0.0;
    for(int i=0;i<a;i++){
        std::cin >> percent;
        quantity_sum = quantity_sum + (percent/100);
    }
    std::cout << (quantity_sum / a) * 100 <<std::endl;
}
