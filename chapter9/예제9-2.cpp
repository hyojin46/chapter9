//#include <iostream> //예제9-2
//using namespace std;
//
//class Base {
//public:
//	virtual void f() { cout << "Base::f() called" << endl; }
//};
//
//class Derived :public Base {
//public:
//	virtual void f() { cout << "Derived::f() called" << endl; } //오버라이딩(재정의)
//};
//
//void main() {
//	Derived d, * pDer;
//	pDer = &d;
//	pDer->f();
//
//	Base* pBase;
//	pBase = pDer; //업캐스팅
//	pBase->f();
//}