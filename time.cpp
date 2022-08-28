#include<iostream>

using namespace std;

class time{
	
	public:
		int hours;
		int minutes;
		int seconds;
		friend class user;
		
		void A(void);
		void Z(void);
		void add(time t1,time t2);
};

void time::A(void){
	
	cout<<"Enter time "<<endl;
	cout<<"hours : "; 
	cin>>hours;
	cout<<"minutes : ";
	cin>>minutes;
	cout<<"seconds : ";
	cin>>seconds;
}
void time::Z(void){
	
	cout<<endl;
	cout<<"total time : ";
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
void time::add(time t1,time t2){
	
	this->seconds=t1.seconds+t2.seconds;
	this->minutes=t1.minutes+t2.minutes+this->seconds/60;
	this->hours=t1.hours+t2.hours+(this->minutes/60);
	this->minutes %=60;
	this->seconds %=60;
}
main(){
	
	time t1,t2,t3;
	t1.A();
	t2.A();
	t3.add(t1,t2);
	t3.Z();
}
