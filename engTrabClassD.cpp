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
};
void D::MD1(){
	cout<<":)"<<endl;
}
void D::MD2(){
	cout<<":)"<<endl;
}
int main(){
	D d1;
	d1.MD1();
	d1.MD2();
	return 0;
}
