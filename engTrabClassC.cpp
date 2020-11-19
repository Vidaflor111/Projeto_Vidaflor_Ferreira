#include <iostream>

using namespace std;
//Codigo da classe C
class C{
	private:
		string C1;
		int C2;
	public:
		void MC1();
		void MC2();
};
void C::MC1(){
	cout<<"MC1"<<endl;
}
void C::MC2(){
	cout<<"MC2"<<endl;
}

int main(){
	C c1;
	c1.MC1();
	c1.MC2();
	return 0;
}
