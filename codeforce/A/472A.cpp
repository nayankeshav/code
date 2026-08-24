#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int count_one;
    if(number%2==0){
        count_one = number - 4;
        cout << "4 " << count_one;
    }
    else{
        count_one = number - 9;
        cout << "9 " << count_one;
    }
}
