#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//LIBRARY PROGRAM 

struct library{
	int accession_number,price;
	char title_of_book[50],author_name[50],flag[5]; 
}l[50];

int i=0;

//ADDING BOOKS TO THE LIBRARY
void add(){
	int n;
	printf("Add book to library\n");
	printf("How many books you want to add");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n%d\n",&l[i].accession_number,&l[i].price);
        	gets(l[i].title_of_book);
        	gets(l[i].author_name);
        }
}

//DISPLAYING BOOKS INFORMATION
void display(){
	printf("Book Details are :");
	printf("book accession number\n book price\n title of book\n book author\n");
	for(int j=0;j<i;j++){
		printf("%d\n%d\n%s\n%s\n",l[j].accession_number,l[j].price,
l[j].title_of_book,l[j].author_name);
	}
}

//LIST ALL THE BOOKS OF GIVEN AUTHOR
void author_books(){
	char current[40];
	printf("enter author name\n :");
	scanf("%s",current);
	for(int j=0;j<i;j++){
		if(strcmp(l[j].author_name,current) == 0){
			printf("%s",l[j].title_of_book);
		}
		else{
			printf("there are no book avilable for this author %s",l[j].author_name);
		}
	}
}

//LIST THE TITLE OF SPECIFIED BOOKS
void specified_book(){
	char current[40];
	printf("enter book title\n");
	scanf("%s",current);
	for(int j=0;j<i;j++){
		if(strcmp(l[j].title_of_book,current)==0){
			printf("%s %d %d %s",l[j].title_of_book,l[j].price,
l[j].accession_number,l[j].author_name);
		}
		else{
			printf("%s dose not exists",current);
		}
	}
}

//LIST THE COUNT OF BOOKS IN LIBRARY
void count(){
	int j,k=0;
	for(j=0;j<i;j++){
		k++;
	}
	if(k>=1){
		printf("total %d books available",k);
	}
	else{
		printf("there are no books here.sorry !!");
	}
}

//LIST THE BOOKS IN THE ORDER OF ACCESSION NUMBER
void inorder(){
	int j,k,current;
	for(j=0;j<i;j++){
		for(k=0;k<i-1;k++){
			if(l[k].accession_number>l[k+1].accession_number){
				current = l[k].accession_number;
				l[k].accession_number=
				l[k+1].accession_number;
				l[k+1].accession_number = current;	
			}
		}
		
	}
	for(j=0;j<i;j++){
		printf("%d is accession number",l[j].accession_number);
		printf("%d is price and %s author of the book and %s is title of the book",l[j].price,l[j].author_name,l[j].title_of_book);
}
}

int main(){
	int n;
	
	//USERS CHOICE
	while(i>=0){
		printf("1.Add book information\n2.Display book 	information\n3.List all books of given author\n4.list title of specified book\n5.count of books in lib\n6.books in order of accession number\n7.exit \n");
		scanf("%d",&n);
		switch(n){
			case 1:
				add();
			        break;
			case 2:
				display();
				break;
			case 3:
				author_books();
				break;
			case 4:
				specified_book();
				break;
			case 5:
				count();
				break;
			case 6:
				inorder();
				break;
			case 7:
				exit (1);
				break;
			default:
				printf("enter valid 					number");
				break;				
		}
	}
	return 0;
}
