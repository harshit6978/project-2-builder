#include<iostream>
using namespace std;
class train{
	
	public:
		
		int number,time;
		char name[20],source[20],destination[20];
		
		void setter(){
			cout<<"enter a train number:";
			cin>>number;
			
			cout<<"enter a train name:";
			cin>>name;
			
			cout<<"enter a train source:";
			cin>>source;
			
			cout<<"enter a train destination:";
			cin>>destination;
			
			cout<<"enter a train time:";
			cin>>time;	
		}
		void getter(){
			
			cout<<"train number:"<<number<<endl;
			
		}
};

int main(){
	
	train obj,obj2,obj3;
	
	obj.setter();
	obj2.setter();
	obj3.setter();
	obj.getter();
	obj2.getter();
	obj3.getter();
	
	return 0;
}
