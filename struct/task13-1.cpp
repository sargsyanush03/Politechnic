// 13. Given an integer n and an array of n elements representing student records (surname, exam grade, and journal number), print the surnames of students with journal numbers from 10 to 20 who received a grade higher than a given number k.

#include <iostream>

using namespace std;

struct StudentInfo {
    char surname[20];
    int grade;
    int number;
};

int main() {
    int i, n, k;
    StudentInfo students[20];
    do {
        cin >> n;
    } while (n <= 0 || n > 20);
    do {
        cin >> k;
    } while (k < 1 || k > 100);

    for (i = 0; i < n; i++) {
        cin >> students[i].surname >> students[i].grade >> students[i].number;
    }
    for (i = 0; i < n; i++) {
        if (students[i].number >= 10 && students[i].number <= 20 && students[i].grade > k) {
            cout << students[i].surname << endl;
        }
    }

    return 0;
}