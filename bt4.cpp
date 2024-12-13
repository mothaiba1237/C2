#include <stdio.h>

int main(){
	int n,i;
	printf("nhap vao mot so nguyen duong: ");
	scanf("%d", &n);
	printf("uoc cua %d la:\n",n); 
	for(i=1; i<=n ; i++){
		if(n % i == 0){
			printf("%d\n", i); 
		} 
	}

	
	
	return 0; 
} 
