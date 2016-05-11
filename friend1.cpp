#include <iostream>

using namespace std;

class Address;

class Student{
	private:
		char *name;
		int age;
		float score;
	public:
		Student(char *, int , float );
		void display(Address &);
};

class Address{
	private:
		char *province;
		char *city;
		char *district;
	public:
		Address(char *, char *, char *);
	//将Student类中的成员函数设为友元函数
		friend void Student::display(Address &);
};

Address::Address(char *province, char *city, char *district){
	this -> province = province;
	this -> city = city;
	this -> district = district;
}
Student::Student(char *name, int age, float score){
	this -> name = name;
	this -> age = age;
	this -> score = score;
}
void Student::display(Address &add){
	cout << name << " age: " << age << " score: " << score << endl;
	cout << "Address: " << add.province << " privnce " << add.city << " city " << add.district << " district" << endl;
}
int main()
{
	Student stu ("小明", 10, 95.5f);
	Address add("陕西", "西安", "雁塔");
	stu.display(add);
	return 0;
}
