#include <iostream>
#include <vector>

using std::string;

class University {
private:
    string name;
    string country;
    int ranks;
    std::vector<Student*> students;
public:
    University()
    {

    }
    University(string name, string country)
    {
        this->name = name;
        this->country = country;
    }
    void AddStudent(Student& student) {
        students.push_back(&student);
    }
};

class Student {
private:
    string name;
    int course;
    int age;
public:
    Student() {

    }
    Student(string name, int course) {
        this->name = name;
        this->course = course;
    }
};

class Employee {
private:
    string name;
    int age;
    string post;
public:
    Employee() {

    }
    Employee(string name) {
        this->name = name;
    }
};

class bachelor : Student {
private:
    string speciality;
public:

};

class master : Student {
private:    
    string speciality;
public:

};

int main() {
    University myUniversity("My University", "USA");
    Student myStudent("John Doe", 1);
    myUniversity.AddStudent(myStudent);
    myUniversity.PrintStudents();
}