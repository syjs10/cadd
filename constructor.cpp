#include <iostream>

using namespace std;

class Student {
	private: 
		char *name;
		int age;
		float score;
	public:
		//声明构造函数
		Student(char *, int , float);
		void say();
};
Student::Student(char *name1, int age1, float score1){
	name = name1;
	age = age1;
	score = score1;
}
//定义普通成员函数
void Student::say(){
	cout << "name: " << name << "\nage: " << age << "\nscore: " << score << endl;
}


int main()
{
	//根据构造函数创建对象
	Student stu("小明", 15, 90.5f); // 传参形式类似于函数调用
	stu.say();
	return 0;
}
