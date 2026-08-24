#include <iostream>
using namespace std;

int main() {
    //k = prise,n = have money, w = wanted banana
	int k,n,w;
	cin >> k >> n >> w;
	int sum = 0;
	for(int i = 1; i<=w; i++){
	    //cout << i*k << endl ;
	    sum = sum + (i*k);
	}
	int borrow = sum - n;
	if(borrow!=0&&borrow>0){
	    cout << borrow << endl;
	}
	else{
	    cout << 0 << endl;
	}
	return 0;
}
