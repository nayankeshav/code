#include<iostream>
int main(){
    int a;
    std::cin >> a;
    int case_no = 0;
    int police_no = 0;
    
    for(int i = 0; i<a ;i++){
        int b;
        std::cin  >> b;
        if(b == -1){
            case_no ++;
            if(police_no != 0){
                police_no--;
                case_no--;
            }
        }
        else{
            police_no+=b;
        }
        
    }
    std::cout << case_no;
}
