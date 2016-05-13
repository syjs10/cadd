#include <iostream>

using namespace std;

//基类
class People{
	private:
		char *name;
		int age;
	public:
		void setName(char *);
		void setAge(int);
		char* getName();
		int getAge();
};

void People::setName(char *name){
	this -> name = name;
}
void People::setAge(int age){
	this -> age = age;
}
char* People::getName(){
	return this -> name;
}
int People::getAge(){
	return this -> age;
}

//派生类
class Student: public People{
	private:
		float score;
	public:
		void setScore(float );
		float getScore();
};
void Student::setScore(float score){
	this -> score = score;
}

float Student::getScore(){
	return this -> score;
}
int main()
{
	Student stu;
	stu.setName("小明");
	stu.setAge(16);
	stu.setScore(94.5f);
	cout << stu.getName() << " age: " << stu.getAge() << " score: " << stu.getScore() <<endl;
	return 0;
}
