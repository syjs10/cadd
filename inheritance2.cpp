#include <iostream>
using namespace std;
class People {
	protected:
		char *name;
		int age;
	public:
		void say();	
};

void People::say(){
	cout << "hello,world" << endl;
}

class Student: public People{
	private:
		using People::say;
	public:
		using People::name;
		using People::age;
		float score;
		void learning();   
};
void Student::learning() {
	cout << "I'm " << name << " age: " << age << " score: " << score << endl;
}
int main(){
	Student stu;
	stu.name = "小明";
	stu.age = 16;
	stu.score = 99.5f;
	//stu.say();// compile error
	stu.learning();
	return 0;
}

