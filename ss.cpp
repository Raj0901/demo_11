#include <iostream>
#include <iomanip>

using namespace std;

class Student {
private:
    int rollno;
    float marks1, marks2, marks3;

public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;
    }

    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
        cout << "Marks for Subject 3: " << marks3 << endl;
    }

    float calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    float calculatePercentage() {
        return (calculateTotal() / 3.0);
    }

    char calculateGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else
            return 'F';
    }
};

int main() {
    Student student;
    student.acceptInfo();
    
    cout << "\nStudent Information:\n";
    student.display();
    
    cout << "\nTotal Marks: " << student.calculateTotal() << endl;
    cout << "Percentage: " << fixed << setprecision(2) << student.calculatePercentage() << "%" << endl;
    cout << "Grade: " << student.calculateGrade() << endl;

    return 0;
}
