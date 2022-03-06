#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//TOTAL MARKS AND PERCENTAGE

int student(){
	int math,science,chem,total=0;
	float percentage;
	
	//TAKING MARKS FROM STUDENTS
	printf("enter maths,science and chem marks here :");
	scanf("\n%d\n%d\n%d",&math,&science,&chem);
	total = total+math+science+chem;
	percentage = (total*100)/300; 
	
	//PRINTING TOTAL
	printf("total is %d\n",total);
	//PRINTING PERCENTAGE
	printf("percentage is %f\n",percentage);
}

int main(){
	student();
	return 0;
}
