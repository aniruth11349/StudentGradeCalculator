#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int maths, physics, computer;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter Maths marks: ";
    cin >> maths;

    cout << "Enter Physics marks: ";
    cin >> physics;

    cout << "Enter Computer marks: ";
    cin >> computer;

    if (maths < 0 || maths > 100 ||
        physics < 0 || physics > 100 ||
        computer < 0 || computer > 100) {
        cout << "Invalid marks!";
        return 0;
    }

    double average = (maths + physics + computer) / 3.0;

    cout << "\nStudent: " << name << endl;
    cout << "Average: " << average << endl;

    if (average >= 90) {
        cout << "Grade: A";
    } else if (average >= 75) {
        cout << "Grade: B";
    } else if (average >= 50) {
        cout << "Grade: C";
    } else {
        cout << "Grade: Needs improvement";
    }

    return 0;
}
