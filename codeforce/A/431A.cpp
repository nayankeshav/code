#include<iostream>
#include<string>
int main()
{
    int a,b,c,d;
    std::cin >> a >> b >> c >> d;
    std::string number;
    std::cin >> number;
    
    int sum = 0;
    
    for(int i =0;i<number.length();i++){
        if(number[i] == '1'){
            sum = sum + a;
        }
        else if(number[i] == '2'){
            sum = sum +b;
        }
        else if(number[i] == '3'){
            sum = sum + c;
        }
        else{
            sum = sum + d;
        }
    }
    std::cout << sum << std::endl;
}
