#include <iostream>

using namespace std;

template<typename T> void input(int _count, T (&p)[8]){
	cout << "请输入8个数字或字母" << endl;
	for(int i = 0; i < 8; i++) {
		cin >> p[i];
	}
}
int main(){
	int a[8];
	char b[8];
	input(8, a);
	for(int i = 0; i < 8; i++) {
		cout << a[i] << ' ';
	}
	input(8, b);
	for(int i = 0; i < 8; i++) {
		cout << b[i] << ' ';
	}
	return 0;
}
