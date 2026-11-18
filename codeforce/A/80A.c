#include <stdio.h>
int prime(int x){
    int count = 0;
    for(int j = 1;j <= x;j++){
        if(x % j == 0){
            count++;
        }
        if(count > 2){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    while(1){
        a++;
        if(prime(a)){
            if(a == b){
                printf("YES");
            }
            else{
                printf("NO");
            }
            return 0;
        }
    }
}
