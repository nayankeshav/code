#include <stdio.h>
int main(){
	int n,k,i,check=0;
	int num = 0;
	scanf("%d %d",&n,&k);
	int score[n];
	for(i = 0; i<n; i++){
		scanf("%d",&score[i]);
	}
	check = score[k-1];
	for(i = 0; i<n; i++){
		if(score[i] >=check && score[i]>0){num++;}
	}
	printf("%d\n",num);
	return 0;
}
