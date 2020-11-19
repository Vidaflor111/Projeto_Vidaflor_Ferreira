#include <iostream>

using namespace std;
//Codigo da classe D
class D{
	private:
		int D1;
		float D2;
	public:
		void MD1();
		void MD2();
		void MD4();
		void MD3();
};
void D::MD1(){
	cout<<":)"<<endl;
}
void D::MD2(){
	cout<<":)"<<endl;
}
void D::MD4(){
	cout<<"MD4"<<endl;
}
void D::MD3(){
	cout<<"MD3"<<endl;
}
int main(){
	D d1;
	d1.MD1();
	d1.MD2();
	d1.MD4();
	d1.MD3();
	return 0;
}
