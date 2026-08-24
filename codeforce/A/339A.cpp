#include <iostream>
#include <string>

int main()
{
    std::string a,number_string = "";
    std::cin >>a;
    for(int i =0;i<a.length();i++){
        if(a[i]!=(int)'+')
        number_string = number_string + a[i];
    }
    
    for(int i =0;i<number_string.length();i++){
        for(int j = 0;j<(number_string.length()-1)-i;j++){
            if((int)number_string[j] > (int)number_string[j+1]){
                char buffer;
                buffer = number_string[j+1];
                number_string[j+1] = number_string[j];
                number_string[j] = buffer;
            }
        }
    }
    
    for(int i = 0;i<=number_string.length()-1;i++){
        std::cout << number_string[i];
        if(i!=number_string.length()-1){
        std::cout <<  "+";
        }
    }

    return 0;
}
