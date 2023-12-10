#include <iostream>
#include <vector>

using std::string;

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
    string GetName() {
        return name;
    }
    int GetCourse() {
        return course;
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
    int quality_of_students;
    string department;
public:

};

class master : Student {
private:    
    string speciality;
    int quality_of_students;
    string department;
public:

};

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
    void PrintStudents() {
        for (auto& student : students) std::cout << student->GetName() << " " << student->GetCourse() << "\n";
    }
    void PrintUniversity() {
        std::cout << name << " " << country << "\n";
    }
};

int main() {
    University myUniversity("RUDN", "Russia");
    University AnotherUniversity("MSU", "Russia");
    Student myStudent("Anna Zolotykh", 2);
    myUniversity.AddStudent(myStudent);
    myUniversity.PrintStudents();
    AnotherUniversity.PrintUniversity();
}