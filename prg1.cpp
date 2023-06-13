#include<iostream>
#include<string.h>

using namespace std;

class employe{
	
	public:
		int id,age,salary,exp;
		char name[20],role[20],city[20],compny[20];
};

int main(){
	
	employe obj,obj2,obj3,obj4,obj5;
	
	cout<<"first employee\n\n";
	obj.id=1;
	obj.age=18;
	obj.salary=10000;
	obj.exp=3;
	strcpy(obj.name,"harshit");
	strcpy(obj.role,"head");
	strcpy(obj.city,"surat");
	strcpy(obj.compny,"tata");
	
	cout<<obj.id<<"\n";
	cout<<obj.age<<"\n";
	cout<<obj.salary<<"\n";
	cout<<obj.exp<<"\n";
	cout<<obj.name<<"\n";
	cout<<obj.role<<"\n";
	cout<<obj.city<<"\n";
	cout<<obj.compny<<"\n\n\n";
	
	
	
	cout<<"second employee\n\n";
	obj2.id=2;
	obj2.age=25;
	obj2.salary=10000;
	obj2.exp=3;
	strcpy(obj2.name,"srajit");
	strcpy(obj2.role,"head");
	strcpy(obj2.city,"vapi");
	strcpy(obj2.compny,"oppo");
	
	cout<<obj2.id<<"\n";
	cout<<obj2.age<<"\n";
	cout<<obj2.salary<<"\n";
	cout<<obj2.exp<<"\n";
	cout<<obj2.name<<"\n";
	cout<<obj2.role<<"\n";
	cout<<obj2.city<<"\n";
	cout<<obj2.compny<<"\n\n\n";
	
	
	cout<<"third employee\n\n";
	obj3.id=3;
	obj3.age=18;
	obj3.salary=8000;
	obj3.exp=3;
	strcpy(obj3.name,"jayat");
	strcpy(obj3.role,"head");
	strcpy(obj3.city,"goa");
	strcpy(obj3.compny,"dreamwolrd");
	
	cout<<obj3.id<<"\n";
	cout<<obj3.age<<"\n";
	cout<<obj3.salary<<"\n";
	cout<<obj3.exp<<"\n";
	cout<<obj3.name<<"\n";
	cout<<obj3.role<<"\n";
	cout<<obj3.city<<"\n";
	cout<<obj3.compny<<"\n\n\n";
	
	
	cout<<"four employee\n\n";
	obj4.id=4;
	obj4.age=20;
	obj4.salary=20000;
	obj4.exp=5;
	strcpy(obj4.name,"jitesh");
	strcpy(obj4.role,"worker");
	strcpy(obj4.city,"bihar");
	strcpy(obj4.compny,"luxcozy");
	
	cout<<obj4.id<<"\n";
	cout<<obj4.age<<"\n";
	cout<<obj4.salary<<"\n";
	cout<<obj4.exp<<"\n";
	cout<<obj4.name<<"\n";
	cout<<obj4.role<<"\n";
	cout<<obj4.city<<"\n";
	cout<<obj4.compny<<"\n\n\n";
	
	cout<<"five employee\n\n";
	obj5.id=5;
	obj5.age=28;
	obj5.salary=80000;
	obj5.exp=2;
	strcpy(obj5.name,"ramez");
	strcpy(obj5.role,"worker");
	strcpy(obj5.city,"up");
	strcpy(obj5.compny,"it");
	
	cout<<obj5.id<<"\n";
	cout<<obj5.age<<"\n";
	cout<<obj5.salary<<"\n";
	cout<<obj5.exp<<"\n";
	cout<<obj5.name<<"\n";
	cout<<obj5.role<<"\n";
	cout<<obj5.city<<"\n";
	cout<<obj5.compny<<"\n";
}
