#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d",&a);
	
	for(int i = 0; i <a; i++){
	    scanf("%d",&b);
	    scanf("%d %d %d",&c,&d,&e);
	    
	    if(c < d){
	        if(c < e){
	            printf("%d \n",b-c);
	        }
	        else{
	            printf("%d \n", b-e);
	        }
	    }
	    else{
	        if(d < e){
	            printf("%d \n",b-d);
	        }
	        else{
	            printf("%d \n",b-e);
	        }
	    }
	}

}

