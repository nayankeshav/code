#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    int citizen[a];
    int largest;
    for(int i = 0 ;i < a; i++){
        scanf("%d",&citizen[i]);
        if(i == 0){
            largest = citizen[i];
        }
        if(citizen[i] > largest){
            largest = citizen[i];
        }
    }
    int sum = 0;
    for(int i =0; i<a; i++){
        sum = sum + (largest - citizen[i]);
    }
    printf("%d\n",sum);
    
}
