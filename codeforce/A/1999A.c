#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    for(int i = 0; i< a; i++){
        int input;
        scanf("%d",&input);
        printf("%d \n",((input/10)+(input%10)));
    }
}
