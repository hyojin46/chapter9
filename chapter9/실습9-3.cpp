//#include <iostream> //실습9-3
//using namespace std;
//
//class HomeApplication {
//public:
//	virtual void getPrice() = 0;
//};
//
//class Tv :public HomeApplication {
//	int price;
//public:
//	Tv(int price) { this->price = price * 0.9; }
//	void getPrice() { cout << "텔레비젼 가격: " << this->price << endl; }
//};
//
//class Refrigerator :public HomeApplication {
//	int price;
//public:
//	Refrigerator(int price) { this->price = price * 0.95; }
//	void getPrice() { cout << "냉장고 가격: " << this->price << endl; }
//};
//
//int main() {
//	Tv a(100000), b(300000);
//	Refrigerator c(200000);
//
//	HomeApplication* p[3] = { &a,&c,&b };
//	for (int i = 0; i < 3; i++) {
//		p[i]->getPrice();
//	}
//}