//#include <iostream> //¿¹Á¦9-5
//using namespace std;
//
//class Base {
//public:
//	virtual ~Base() { cout << "~Base()" << endl; }
//};
//
//class Derived : public Base {
//public:
//	virtual ~Derived() { cout << "~Derived()" << endl; }
//};
//
//int main() {
//	Derived* dp = new Derived();
//	Base* bp = new Derived();
//
//	delete dp;
//	delete bp;
//}