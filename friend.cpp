#include <iostream>

using namespace std;

class Student{
	private:
		char *name;
		int age;
		float score;
	public:
		Student(char *, int , float );
		friend void display(Student &);
};
Student::Student(char *name, int age, float score){
	this -> name = name;
	this -> age = age;
	this -> score = score;
}
// 普通成员函数
void display (Student &stu){
	cout << stu.name << " age: " << stu.age << "score: " << stu.score << endl;
}


int main()
{
	Student stu("小明", 16, 95.5f);
	display(stu);
	return 0;
}
