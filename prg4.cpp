#include<iostream>

using namespace std;

class school{
	
	private:
		int id,no,std,age,contact;
		char name[20],address[20];
		static char eduname[20];
		
	public:
		
		void setter(){
			cout<<"enter a student id:";
			cin>>id;
			
			cout<<"enter a student roll no:";
			cin>>no;
			
			cout<<"enter a student standard:";
			cin>>std;
			
			cout<<"enter a student age:";
			cin>>age;
			
			cout<<"enter a student contact number:";
			cin>>contact;
			
			cout<<"enter a student adress:";
			cin>>address;
		}
		void getter(){
			cout<<"id is a:"<<id<<endl;
			cout<<"roll no is a:"<<no<<endl;
			cout<<"student age is a:"<<age<<endl;
			cout<<"student standard:"<<std<<endl;
			cout<<"student contact number:"<<contact<<endl;
			cout<<"address is a:"<<address<<endl;
			cout<<"student education name:"<<eduname<<endl;
			
			
		}	
};

char school :: eduname[]="red and white";

int main(){
	
	school obj;
	
	obj.setter();
	obj.getter();
	
	return 0;
}
