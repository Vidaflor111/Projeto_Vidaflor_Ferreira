#include <iostream>

using namespace std;
//Codigo da classe A
class A{
	private:
		int A1;
		float A2;
	public:
		void MA1();
		void MA2();
};
void A::MA1(){
	cout<<"MA1"<<endl;
}
void A::MA2(){
	cout<<"MA2"<<endl;
}
int main(){
	A a1;
	a1.MA1();
	a1.MA2();
	return 0;
}
