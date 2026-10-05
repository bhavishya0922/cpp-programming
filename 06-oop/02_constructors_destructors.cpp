/**
 * Problem: Constructor Overloading & Deep Copy Semantics
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <string>

class StudentProfile {
private:
    std::string name;
    int rollNo;
    double gpa;

public:
    // Default constructor
    StudentProfile() : name("Unassigned"), rollNo(0), gpa(0.0) {}

    // Parameterized constructor
    StudentProfile(const std::string &n, int r, double g) : name(n), rollNo(r), gpa(g) {}

    // Copy constructor
    StudentProfile(const StudentProfile &other) : name(other.name), rollNo(other.rollNo), gpa(other.gpa) {
        std::cout << "[COPY CONSTRUCTOR] Cloned profile for " << name << "\n";
    }

    ~StudentProfile() {
        // Destructor cleanup
    }

    void print() const {
        std::cout << "Student: " << name << " (Roll: " << rollNo << ") - GPA: " << gpa << "\n";
    }
};

int main() {
    StudentProfile s1("Bhavishya", 202409, 8.85);
    s1.print();

    StudentProfile s2 = s1; // Calls copy constructor
    s2.print();
    return 0;
}
