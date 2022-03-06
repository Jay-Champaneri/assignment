#include<iostream>
using namespace std;

class Employee{
	public:
	int salary,hours_per_day;
	void getinfo(){
		cout<<"enter salary (amount that you want as salary):"<<endl;
		cin>>salary;
		cout<<"hours that you worked (honest answer please !):"<<endl;
		cin>>hours_per_day;
		cout<<"salary is :"<<salary<<endl;
		cout<<"hours per day is :"<<hours_per_day<<endl;
	}
	
	void addsal(){
		if(salary<500){
			salary += 10;
			cout<<"salary is = "<<salary<<endl;
		}
		else{
			cout<<"salary is = "<<salary<<endl;
		}
	}
	void addwork(){
		if(hours_per_day>6){
			salary += 5;
			cout<<"salary is = "<<salary<<endl;
		}
		else{
			cout<<"salary is = "<<salary<<endl;
		}
       }
};

int main(){
	Employee e;
	e.getinfo();
	e.addsal();
	e.addwork();
	cout<<"in hand salary is (happiness at its peak) :"<<e.salary<<endl;
        return 0;
}
