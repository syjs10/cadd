#include <iostream>

using namespace std;

struct Student{
	char *name;
	float score;

	Student(char *, float);
	void say();
};
Student::Student(char *name, float score){
	this -> name = name;
	this -> score = score;
}

void Student::say(){
	cout << name << " score: " << score << endl;
}

int main()
{
	Student stu("小明", 95.5f);
	stu.say();	
	
	return 0;
}
