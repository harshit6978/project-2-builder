#include<iostream>

using namespace std;


class ex{
	
	public:
		
		ex(){
			cout<<"default"<<endl;
		}
		~ex(){
			cout<<"destructor"<<endl;
		}
};

int main(){
	
	
	ex obj;
	
	cout<<"it is a destructor"<<endl;
	
	return 0;
	
	}
