//#include <iostream> //�ǽ�9-2
//using namespace std;
//
//class Weapon {
//public:
//	virtual void load() = 0;
//};
//
//class Bom : public Weapon {
//public:
//	virtual void load() { cout << "���� �����մϴ�." << endl; }
//};
//
//class Gun : public Weapon {
//public:
//	virtual void load() { cout << "��ź�� �����մϴ�." << endl; }
//};
//
//void main() {
//	Bom b;
//	Gun g;
//
//	Weapon* p[3] = { &Gu,&Bo,&Bo };
//	for (int i = 0; i < 3; i++) {
//		p[i]->load();
//	}
//}