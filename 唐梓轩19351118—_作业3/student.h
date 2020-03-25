#pragma once

#include <string>
#include <iostream>
using namespace std;
class Student {
	friend class ClassStudent;
	static const int maxCourses_ = 3;
	int id_;
	string name_;
	string courseNames_[maxCourses_] = { "0","0","0" };
	double grades_[maxCourses_];
public:
	
	Student(int id, std::string name) :id_(id), name_(name) {
		grades_[0] = 0;
		grades_[1] = 0;
		grades_[2] = 0;
	}
	Student() = default;
	Student(const Student& p);
	bool AddCourse(const std::string& courseNames, double grade);
	void setgread(std::string course, double gread);
	double getGrade(std::string coursename);
	double getAverageGrade();
	void showGrades();
};
//Student类的定义
