#include <iostream>
using namespace std;

class Student{
	public:
		char *name;
		int age;
		float score;
	public:
		//构造函数
		Student(char* , int , float);

//		Student(char *name1, int age1, float score1):name(name1), age(age1), score(score1){}
		//析构函数
		~Student(){
			cout << "再见" << name << endl;
		}
		void say();
};
Student::Student(char *name1, int age1, float score1):name(name1), age(age1), score(score1){}
void Student::say(){
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << age << endl;
}
int main()
{
	Student stu1("小明", 21, 75.0);
	Student stu2("小红", 12, 23.43);
	Student stu3("李华", 54, 24.54);
	stu1.say();
	stu2.say();
	stu3.say();
	cout << "结束" << endl;
	return 0;
}
