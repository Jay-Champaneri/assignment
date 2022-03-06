#include <stdio.h>
#define lchild(n) (2*n + 1)
#define rchild(n) (2*n + 2)

void printOrder(int *a, int start, int end){
	  int m = end;
	  if(start == 0) printf("%d ", a[0]);
	  else for(int i=start; i< (end + start)/2+1; i++, m--) printf("%d %d ", a[i], a[m]);
}

void topDown(int *a, int n, int i, int j){
	  if(j > n-1) return;
	  else{
	    printOrder(a, i, j);
	    topDown(a, n, lchild(i), rchild(j));
	  }
}

void bottomUp(int *a, int n, int i, int j){
	  if(j > n - 1) return;
	  else{
	    bottomUp(a, n, lchild(i), rchild(j));
	    printOrder(a, i, j);
	  }
}

int main(){
	  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	  topDown(a, 15, 0, 0);
	  printf("\n");
	  bottomUp(a, 15, 0, 0);
}
