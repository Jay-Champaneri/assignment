#include<stdio.h>
#include<string.h>
#define MAX 50

char queue[MAX][MAX],temp[MAX],temp_brother[MAX];

int f=-1,r=-1;
void enqueue(char *ptr){
	if(r==MAX-1){
		printf("queue is full better luck next tiem !");
	}
	else if(f==-1 && r==-1){
		f=r=0;
	}
	else{
		r=r+1;
		strcpy(queue[r],ptr);
	}
}

char * dequeue(){
	if(f==-1){
		printf("queue is empty ,first go to queue and add something then come back here .");
	}
	else if(f==r){
		f=r=-1;
		printf("And by deleting this element queue became empty !");
	}
	else{
		strcpy(temp,queue[f]);
		f=f+1;
		return temp;
	}	
}

void binary_number(){
	char temp_brother[50];
	strcpy(temp,dequeue());
	printf("%s\n",temp);
	strcpy(temp_brother,temp);
	strcat(temp,"0");
	enqueue(temp);
	strcat(temp_brother,"1");
	enqueue(temp_brother);
}

int main(){
	int i,n;
	printf("enter the number that you want to convert to binary :\n");
	scanf("%d\n",&n);
	char temp[2] = "1";
	enqueue(temp);
	printf("binary numbers from 1 to %d is :\n",n);
	for(i=1;i<=n;i++){
		binary_number();
	}
	return 0;
}
