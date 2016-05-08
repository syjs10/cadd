#include <iostream>
using namespace std;

class Student{
	private:
		char *name;
		int age;
		float score;
		//静态变量
		static int num;
		static float total;	
	public:
		Student(char *, int , float);
		void say();
		//静态函数
		static float getAverage ();
};

int Student::num = 0;
float Student::total = 0;

Student::Student(char *name, int age, float score){
	this->name = name;
	this->age = age;
	this->score = score;
	num++;
	total += score;
}

void Student::say(){
	cout << name << "\'s age is " << age << ", score: " << score << "NUMBER:" << num << endl;
}
float Student::getAverage(){
		return total / num;
}
int main()
{
	//使用匿名对象
	(new Student("小明", 15, 90))->say();
	(new Student("李磊", 16, 80))->say();
	(new Student("张华", 16, 99))->say();
	(new Student("王康", 14, 60))->say();
	cout << "average: "	<< Student::getAverage() << endl;
	return 0;
}
