#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {

        if (marks >= 90) {
            cout << "Grade: A" << endl;
        } else {
            cout << "Grade: B" << endl;
        }
    } else {

        cout << "Grade: F" << endl;
    }

    return 0;
}

