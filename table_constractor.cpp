#include <iostream>

using namespace std;

class Student{
	private:
		char *name;
		int age;
		float score;
	public:
		
		//Student(char *name1, int age1, float score1):name(name1), age(age1), score(score1){}
		Student(char* , int, float);
		void say();
};
//在构造函数中采用参数初始化表
Student::Student(char *name1, int age1, float score1):name(name1), age(age1), score(score1){}
void Student::say(){
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << score << endl;
}
int main (){
	Student stu("小明", 23, 59.0f);
	stu.say();
	return 0;
}
