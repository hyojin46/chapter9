//#include <iostream> //����9-2
//using namespace std;
//
//class Base {
//public:
//	virtual void f() { cout << "Base::f() called" << endl; }
//};
//
//class Derived :public Base {
//public:
//	virtual void f() { cout << "Derived::f() called" << endl; } //�������̵�(������)
//};
//
//void main() {
//	Derived d, * pDer;
//	pDer = &d;
//	pDer->f();
//
//	Base* pBase;
//	pBase = pDer; //��ĳ����
//	pBase->f();
//}