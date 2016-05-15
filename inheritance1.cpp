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

// 不能引用私有
//派生类
class Student: private People{
	private:
		float score;
	public:
		void setScore(float );
		float getScore();
		void setName(char *);
		void setAge(int);
		char* getName();
		int getAge();
};
void Student::setScore(float score){
	this -> score = score;
}

void Student::setName(char *name){
	this -> name = name;
}
void Student::setAge(int age){
	this -> age = age;
}
char* Student::getName(){
	return this -> name;
}
int Student::getAge(){
	return this -> age;
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
