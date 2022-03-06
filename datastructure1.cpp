#include<iostream>
using namespace std;

//in place merge two sorted arrays.

int main(){
	int x[] = {1,4,7,8,10};
	int y[] = {2,3,9};
	int j,i,temp;
	
	//taking length of arrays
	int l1 = sizeof(x) / sizeof(x[0]);
	int l2 = sizeof(y) / sizeof(y[0]);
	//swap and merge
	for(i=0;i<l1;i++){
		if(x[i] > y[0]){
			temp = x[i];
			x[i] = y[0];
			y[0] = temp;
			int first = y[0];
			for(j=1;j<l2 && y[j]<first;j++){
				y[j-1] = y[j];
			}
			y[j-1] = first;
		}
	}
	//printing two arrays after swap and merge
	cout<<"x is:";
	for(i=0;i<l1;i++){
		cout<<x[i]<<" ";
	}
	cout<<"\n";
	cout<<"y is:";
	for(i=0;i<l2;i++){
		cout<<y[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

