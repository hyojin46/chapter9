//#include <iostream> //예제9-3
//using namespace std;
//
//class Base {
//public:
//	virtual void f() { cout << "Base::f() called" << endl; }
//};
//
//class Derived :public Base {
//public:
//	void f() { cout << "Derived::f() called" << endl; } //오버라이딩(재정의)
//};
//
//class GrandDerived : public Derived {
//public:
//	void f() { cout << "GrandDerived::f() called" << endl; }
//};
//
//void main() {
//	GrandDerived g;
//	Base* bp;
//	Derived * dp;
//	GrandDerived* gp;
//
//	bp = dp = gp = &g;
//
//	bp->f();
//	dp->f();
//	gp->f(); //동적바인딩에 의해 모두 GrandDerived의 함수 f()호출
//}