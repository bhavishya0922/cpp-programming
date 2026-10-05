/**
 * Problem: Multilevel Inheritance in C++
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string &n, int a) : name(n), age(a) {}
    void showPersonal() const {
        std::cout << "Name: " << name << " | Age: " << age << "\n";
    }
};

class AcademicMember : public Person {
protected:
    std::string institution;
public:
    AcademicMember(const std::string &n, int a, const std::string &inst)
        : Person(n, a), institution(inst) {}
    void showInstitution() const {
        std::cout << "Institution: " << institution << "\n";
    }
};

class CSEStudent : public AcademicMember {
private:
    int semester;
public:
    CSEStudent(const std::string &n, int a, const std::string &inst, int sem)
        : AcademicMember(n, a, inst), semester(sem) {}

    void displayFullSummary() const {
        showPersonal();
        showInstitution();
        std::cout << "Degree: B.Tech CSE | Current Semester: " << semester << "\n";
    }
};

int main() {
    CSEStudent student("Bhavishya Dewangan", 19, "Technical Campus", 3);
    student.displayFullSummary();
    return 0;
}
