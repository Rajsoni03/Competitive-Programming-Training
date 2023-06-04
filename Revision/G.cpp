#include <iostream>
#include <string>
using namespace std;


class Student{
	public:
		string name;
		int age;
		string email;
		string* college;

		// default constructor
		Student(){
			this->name 	= "Surbhi";
			this->age 	= 0;
			this->email = "";
			this->college = new string("GGITS");
			cout << "default constructor" << endl;
		};
		
		// parameterized constructor
		Student(string name, int age, string email){
			this->name 	= name;
			this->age 	= age;
			this->email = email;
			cout << "parameterized constructor" << endl;
		};

		// copy constructor
		Student(const Student& obj){
			this->name 	= obj.name;
			this->age 	= obj.age;
			this->email = obj.email;
			cout << "copy constructor" << endl;
		};

		// distructor
		~Student(){
			delete this->college;
			cout << this->age << " - distructor" << endl;
		};
};


void func(){
	// Student s_stack;
	// cout << s_stack.name << endl;

	Student *s_heap = new Student;
	cout << s_heap->name << endl;

	delete s_heap;
	s_heap->~Student();
}


int main(){
	cout << "calling func" << endl;
	func();
	cout << "func pop out" << endl;
	

	// calling copy constructor 
	// Student s1;
	// s1.name = "Raj";
	// s1.age = 10;

	// Student s2(s1);
	// s2.age = 20;

	// cout << s2.name << endl;
	return 0;
}