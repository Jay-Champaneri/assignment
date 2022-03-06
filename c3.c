#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// SEARCH AND SEQUENCE

int a[10] = {1,5,4,8,9,2,0,6,11,7};

int main(){
	int n,c=0;
	printf("enter element\n");
	scanf("%d",&n);
	
	// SEARCHING ELEMENTS
	for(int i=0;i<10;i++){
		if(a[i] == n){
			printf("YES");
			c+=1;
		}
	}
	if(c==0){
		printf("N0\n");
	}
	
	//PRINTING ELEMENTS
	for(int i=0;i<10;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}

