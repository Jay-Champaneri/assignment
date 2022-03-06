#include<iostream>
using namespace std;

class matrix{
	public:
	int i,j,k,m,x,y;
	int a[3][3],b[3][3],c[5][5],d[3][3];
	matrix(){
		cout<<"enter number of rows for matrix a :"<<endl;
		cin>>i;
		cout<<"enter number of columns for matrix a :"<<endl;
		cin>>j;
		cout<<"enter number of rows for matrix b :"<<endl;
		cin>>x;
		cout<<"enter number of columns for matrix b :"<<endl;
		cin>>y;
	}
	void get_rows(){
		cout<<"number of rows for matrix a is :"<<i<<endl;
		cout<<"number of rows for matrix b is :"<<x<<endl;
	}
	void get_columns(){
		cout<<"number of columns for matrix a is :"<<j<<endl;
		cout<<"number of columns for matrix b is :"<<y<<endl;
	}
	void set_elements(){
		cout<<"for matrix a:";
		for(k=0;k<i;k++){
			for(m=0;m<j;m++){
				cout<<"enter element:"<<endl;
				cin>>a[k][m];
			}
		}
		cout<<"for matrix b:";
		for(k=0;k<x;k++){
			for(m=0;m<y;m++){
				cout<<"enter element:"<<endl;
				cin>>b[k][m];
			}
		}
	}
	void add_matrix(){
		if (i!=x || j!=y){
			cout<<"\nyou cant add matrix bruh.sorry!\n";
		}
		else{
			for(k=0;k<x;k++){
				for(m=0;m<j;m++){
					c[k][m] = a[k][m]+b[k][m];
				}
			}
			cout<<"addition is :"<<endl;
			cout<<"c[]=";
			for(k=0;k<x;k++){
				for(m=0;m<j;m++){
					cout<<" "<<c[k][m]<<" ";
				}
				cout<<endl;
				cout<<"    ";
			}
			cout<<endl;
		}
	}
	void multi_matrix(){
		if(j!=x){
			cout<<"\n you cant multiply matrix bruh . sorry !\n";
		}
		else{
			for(k=0;k<i;k++){
				for(m=0;m<y;m++){
				       int sum=0;
				       for(int z=0;z<x;z++){
				       	  sum += (a[k][z]*b[z][m]);	
				       }
				       d[k][m] = sum;		
				}
			}
			cout<<"multiplication is :"<<endl;
			cout<<"d[]=";
			for(k=0;k<i;k++){
				for(m=0;m<y;m++){
					cout<<" "<<d[k][m]<<" ";
				}
				cout<<endl;
				cout<<"    ";
			}
			cout<<endl;
		}
	}
};

int main(){
	matrix m;
	m.get_rows();
	m.get_columns();
	m.set_elements();
	while(1){
		int op;
		cout<<"\n1.for addition of two matrix\n2.for the multiplication of two matrix\n3.to exit (seriously !!)\n";
		cin>>op;
		switch(op){
			case 1:
				m.add_matrix();
				break;
			case 2:
				m.multi_matrix();
				break;
			case 3:
				cout<<"have a good day\n.";
				exit(1);
			default:
				cout<<"what are you doing man !! enter either 1 or 2 .";
				break;
				
		}
	}
	
	
	return 0;
}
