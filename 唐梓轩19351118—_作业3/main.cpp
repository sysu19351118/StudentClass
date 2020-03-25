#include "ClassStudent.h"
#include "student.h"
using namespace std;

int main() {
	Student Bob(1, "Bob");
	Student John(2, "John");
	Student Alice(3, "Alice");
	Student s[] = { Bob,John,Alice };        //定义了三个Student类的对象；
	
	Bob.AddCourse("Robotics", 100);
	Bob.AddCourse("C++", 98);
	Bob.AddCourse("Math", 93);
	John.AddCourse("Robotics", 99);
	John.AddCourse("C++", 97);
	John.AddCourse("Math", 92);
	Alice.AddCourse("Robotics", 99);
	Alice.AddCourse("C++", 100);
	Alice.AddCourse("Math", 99);             //使用AddCourse添加个人的课程和成绩
	
	
	Student ss[20];
	Student i;
	for(int j=0;j<20;j++)
	{
		ss[j] = i;
	}
	ClassStudent c1(ss);                     //使用构造函数创建对象c1
	
	
	c1.AddStudent(&Bob);
	c1.AddStudent(&Alice);
	c1.AddStudent(&John);                    //使用AddStudent函数将之前创建好的三个对象添加到c1中

	c1.ShowStudent(1);                       //展示学号为1的学生的信息
	
	cout << endl;
	cout << "学生数目:";
	c1.showStudentCount();                   // 显示c1班级中有多少个在读学生  
	cout << endl;
	
	bool ascending(int, int);
	bool descending(int, int);               //声明升降序排列函数
	
	c1.ShowStudentsByIdOrder(ascending);     //对c1中的元素按照id升序排列
	cout << endl;
	c1.ShowStudentsByIdOrder(descending);    //对c1中的元素按照id降序排列

	return 0;

}

bool ascending(int a, int b) {

	if (a > b)
	{
		return 1;
	}
	else if (a < b)
		return 0;
}                                        //升序函数的函数体

bool descending(int a, int b) {
	
	if (a < b)
	{
		return 1;
	}
	else if (a > b) {
		return 0;
	}
}                                       //降序函数的函数体

