#include <iostream>

int main()
{
    int x;
    std::cin>>x;
    for(int i=0;i<x;i++){
        
        int a;
        std::cin >> a;
        
        int array_numbers[a];
        int max_product = 0;
        int product = 1;
        
        
        for(int j=0;j<a;j++){
            std::cin >> array_numbers[j];
        }
        
        for(int j=0;j<a;j++){
            
            array_numbers[j] = array_numbers[j] + 1;
            
            for(int k =0;k<a;k++){
                product = product * array_numbers[k];
            }
            
            if(product > max_product){
                max_product = product;
            }
            
            
            array_numbers[j] = array_numbers[j] - 1;
            
            product = 1;
        }
        
        std::cout << max_product << std::endl;
        
    }
}
