#include <iostream>
#include <cstdlib>

using namespace std;

class Demo{
	private:
		double n;
		double m;
		int i;
			
};
void func(){
	Demo *p = new Demo;
}
int main(){
	int i;
	for (i = 1; i <= 1000000; i++){
		func();
		system ("pause");
		return 0;
	}
}
