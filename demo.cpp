#include <iostream>
#include <cstdlib>
using namespace std;

class Demo{
	public:
		Demo();
		~Demo();
};
Demo::Demo(){
	cout << "Constructor" << endl;
}
Demo::~Demo(){
	cout << "Destructor" << endl;
}
int main(){
	cout << "-------new--------" << endl;
	Demo *p1 = new Demo; //创建一个对象
	Demo *p2 = new Demo[5]; //创建一组对象
	cout << "------malloc------" << endl << endl;
	Demo *p3 = (Demo*)malloc(sizeof(Demo));
	cout << "------delete------" << endl;
	delete p1;
	delete[] p2;
	cout << "-------free-------" << endl;
	free(p3);
	return 0;
}
