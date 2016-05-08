#include <iostream>

using namespace std;
class Student{
	private:
		char *name;
		int age;
		float score;
	public:
		void setname(char *name);
		void setage(int age);
		void setscore(float score);
		void say();
		void printThis();
};
void Student::setname(char *name){
	this->name = name;
}
void Student::setage(int age){
	this->age = age;
}
void Student::setscore(float score){
	this->score = score;
}
void Student::say(){
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << score << endl;
}
void Student::printThis(){
	cout << this << endl;
}

int main()
{	
	Student stu1, *pStu1 = &stu1;
	stu1.setname("小明");
	stu1.setage(19);
	stu1.setscore(90.5f);
	stu1.say();
	stu1.printThis();
	cout << pStu1 << endl;

	Student stu2, *pStu2 = &stu2;
	stu2.setname("李华");
	stu2.setage(16);
	stu2.setscore(80);
	stu2.say();	
	stu2.printThis();
	cout << pStu2 << endl;
		
	return 0;
}
