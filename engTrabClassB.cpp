#include <iostream>

using namespace std;
//Codigo da classe b
class B{
	private:
		int B1;
		float B2;
	public:
		void MB1();
		void MB2();
		void MB3();
};
void B::MB1(){
	cout<<"MB1"<<endl;
}
void B::MB2(){
	cout<<"MB2"<<endl;
}
void B::MB3(){
	cout<<"MB3"<<endl;
}
int main(){
	B b1;
	b1.MB1();
	b1.MB2();
	b1.MB3();
	return 0;
}
