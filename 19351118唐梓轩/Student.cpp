#include "student.h"



bool Student::AddCourse(const std::string& courseNames, double grade)
{
	if (courseNames_[0] == "0")
	{
		courseNames_[0] = courseNames;
		grades_[0] = grade;
		return 1;
	}
	else if (courseNames_[0] != "0" && courseNames_[1] == "0")
	{
		courseNames_[1] = courseNames;
		grades_[1] = grade;
		return 1;
	}
	else if (courseNames_[0] != "0" && courseNames_[1] != "0" && courseNames_[2] == "0")
	{
		courseNames_[2] = courseNames;
		grades_[2] = grade;
		return true;
	}
	else if (courseNames_[0] != "0" && courseNames_[1] != "0" && courseNames_[2] != "0")
	{
		cout << "录入失败！" << endl;
		return false;
	}
}
void Student::setgread(std::string course, double grade) {
	if (course == courseNames_[0])
		grades_[0] = grade;
	else if (course == courseNames_[1])
		grades_[1] = grade;
	else if (course == courseNames_[2])
		grade = grades_[2];
}

Student::Student(const Student& p)
{
	id_ = p.id_; name_ = p.name_;
	for (int i = 0; i < 3; i++)
		courseNames_[i] = p.courseNames_[i];
	for (int i = 0; i < 3; i++)
		grades_[i] = p.grades_[i];
}

double Student::getGrade(std::string coursename) {
	if (coursename == courseNames_[0])
		return grades_[0];
	else if (coursename == courseNames_[1])
		return grades_[1];
	else if (coursename == courseNames_[2])
		return grades_[2];
	else
		return -1;

}


double Student::getAverageGrade() {
	double i;
	i = (grades_[1] + grades_[0] + grades_[2]) / 3;
	return i;
}

void Student::showGrades() {
	cout << "姓名:" << name_ << " 学号:" << id_ << endl;
	cout << courseNames_[0] << ": " << grades_[0] << endl;
	cout << courseNames_[1] << "     : " << grades_[1] << endl;
	cout << courseNames_[2] << "    : " << grades_[2] << endl << endl;
}



//Student类函数的函数体