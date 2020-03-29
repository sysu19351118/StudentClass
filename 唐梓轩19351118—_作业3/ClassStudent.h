#include "student.h"
#include <string>
class ClassStudent {
	static int const  maxStudents_ = 20;
	static int studentCount_;
	string code_ = "aaa2019";
	Student* students_[maxStudents_];
public:
	ClassStudent(Student s[20]);
	ClassStudent(ClassStudent&);
	~ClassStudent() {}
	bool AddStudent( const Student*  student);
	void ShowStudent(int id) const;
	static void showStudentCount();
	void ShowStudentsByIdOrder(bool (*compare)(int, int));
};

//classStudent类的定义