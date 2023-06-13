#include<iostream>
using namespace std;


class student{
	
	public:
		student(int a, int b){
			
			cout<<"sum of int a and b:-"<<a+b;
			
		}
};

int main(){
	
	student obj(45,45);
	return 0;
}
