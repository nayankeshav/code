#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int num_arr[a];
    
    for(int i = 1; i <=a; i++){
        int num;
        scanf("%d",&num);
        num_arr[num-1] = i;
    }
    for(int i= 0; i <a; i++){
        printf("%d ",num_arr[i]);
    }
}
