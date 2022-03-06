#include<iostream>
using namespace std;
class addamount{
	public:
	int amount=50;
	addamount(){
		cout<<"\nyou have total of "<<amount<<" money in your piggi bank"<<endl;
	}
	addamount(int add_money){
		amount += add_money;
		cout<<"\n(yay!!)you have total of "<<amount<<" money in your piggie bank"<<endl;
	}
};

int main(){
	while(1){
		int op;
		cout<<"\n1.if you just do not want to add money in your piggi bank\n2.you want to add money into your piggi bank\n3.to exit (seriously !!)\n";
		cin>>op;
		switch(op){
			case 1:{
				addamount m = addamount();}
				break;
			case 2:
				{int money;
				cout<<"\nenter the additional amount that you want to add\n";
				cin>>money;
				addamount m1 = addamount(money);}
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
