#include <iostream>

using namespace std;

class Student{
	private:
		char *name;
		float score;
	public:
		Student(char *, float );
		char* getName() const;
		float getScore() const;
		void setName(char *name);
		void setScore(float score);
}
Student::Student(char *name, float score){
	this -> name = name;
	this -> score = score;
}
Student::getName() const{
	return name;
}
Student::getScore() const{
	return score;
}
void Student::setName(char *name){
	this -> name = name;
}
void Student::setScore(float score){
	this -> score = score;
}

int main()
{
//	const Student stu("小明", 90.5); //内部所有元素都禁止修改
	Student stu("小明", 90.5);
	stu.getScore(); // 被定义成常量函数
	stu.setScore(100);
	return 0;
}
