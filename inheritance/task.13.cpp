#include <iostream>
#include <string>

using namespace std;

struct Student {
    string surname;
    double pension;
    int grade;
};

class Group {
protected:
    Student* p;
    int n;
public:
    Group(Student* a, int size) {
        p = a;
        n = size;
    }
};

class NewGroup : public Group {
public:
    NewGroup(Student* a, int size) : Group(a, size) {}

    void Print() {
        for (int i = 0; i < n; i++) {
            if (p[i].grade == 10) {
                p[i].pension += 10000;
                cout << p[i].surname << " " << p[i].pension << " " << p[i].grade << endl;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;

    Student a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i].surname >> a[i].pension >> a[i].grade;
    }

    NewGroup obj(a, n);
    obj.Print();

    return 0;
}