#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	class Student {
		public://类包含变量, 称为属性
			string name;
			int age;
			float score;
		
		public://类包含的函数,称为方法
			void say(){
				std::cout << "name:" << name << std::endl;
				std::cout << "age:" << age << std::endl;
				std::cout << "score:" << score << std::endl;
			}
	};
	class Student stu1;
	stu1.name = "小明";
	stu1.age = 20;
	stu1.score = 92.5f;
	stu1.say();
	return 0;
}
