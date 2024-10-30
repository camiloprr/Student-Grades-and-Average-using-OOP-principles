#include <iostream>
using namespace std;

class Student {
private:
    string name;
    double grade1;
    double grade2;
    double grade3;
public:
    double average = 0;
    Student(double studentGrade1, double studentGrade2, double studentGrade3, string studentName) {
        grade1 = studentGrade1;
        grade2 = studentGrade2;
        grade3 = studentGrade3;
        name = studentName;
    }
    double calcAvg() {
        average = (grade1 + grade2 + grade3) / 3.0;
        return average;
    }
    void displayStudentInfo() {
        cout << "The Student " << name << " grades are: " << grade1 << ", " << grade2 << ", " << grade3 << endl;
        cout << "Average is: " << average << endl;
    }
};

int main() {
    Student students[5] = {
        Student(92.0, 85.0, 88.0, "Carlos"),
        Student(95.0, 99.0, 95.0, "Luis Miguel"),
        Student(99.0, 99.0, 97.0, "Camilo"),
        Student(70.0, 80.0, 90.0, "Juan"),
        Student(92.0, 89.0, 100.0, "Stephano")
    };

    for (int i = 0; i < 5; i++) {
        students[i].calcAvg();
        students[i].displayStudentInfo();
        cout << "-------------------" << endl;
    }

    return 0;
}
