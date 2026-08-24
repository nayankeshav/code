#include<iostream>
#include<string>
int main()
{
    int a;
    std::cin >> a;
    std::string output = "";
    std::string word_1[] = {"hate","love"};
    
    
    for(int i=0;i<a;i++){
        if(i!=0){
            output = output + " that ";
        }
        if(i%2==0){
            output = output + "I " + word_1[0];
        }
        else if(i%2!=0){
            output = output + "I " + word_1[1];
        }
        if(i==a-1){
            output=output+" it";
            break;
        }
        
    }
    std::cout << output << std::endl;
}
