#include "ClassStudent.h"




int ClassStudent::studentCount_ = 0;

ClassStudent::ClassStudent(Student s[20]) {
	Student i;
	for (int i = 0; i < 20; i++) {
		*(students_ + i) = &s[i];
	}
}
ClassStudent::ClassStudent(ClassStudent& p) {
	code_ = p.code_;
	studentCount_ = p.studentCount_;
	for (int i = 0; i < 20; i++) {
		students_[i] = p.students_[i];
	}
}

bool ClassStudent::AddStudent(const Student* p) {
	Student s(*p);
	if (studentCount_ > 20)
		return false;
	else
		*students_[studentCount_] = s;
	studentCount_++;
	return true;
}
void ClassStudent::ShowStudent(int id) const {
	for (int i = 0; i < studentCount_; i++)
	{
		if (students_[i]->id_ == id)
			cout << "Robotics:" << students_[i]->getGrade("Robotics") << endl << "C++:" << students_[i]->getGrade("C++") << endl << "Math:" << students_[i]->getGrade("Math") << endl;
	}
}void ClassStudent::showStudentCount() {
	cout << studentCount_ << endl;
}

void ClassStudent::ShowStudentsByIdOrder(bool (*compare)(int, int)) {

	Student* one;

	for (int i = 0; i < studentCount_ - 1; i++)
	{
		for (int j = i + 1; j < studentCount_; j++)
		{
			if ((*compare)(students_[i]->id_, students_[j]->id_))
			{
				one = students_[i];
				students_[i] = students_[j];
				students_[j] = one;
			}
		}

	}



	for (int i = 0; i < studentCount_; i++)
	{
		cout << "学号:" << students_[i]->id_ << "  姓名" << students_[i]->name_ << endl;
	}
}

//ClassStudent类的函数体