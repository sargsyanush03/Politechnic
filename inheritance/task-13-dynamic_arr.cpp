#include <iostream>

using namespace std;

class Array {
private:
    int* A;
    int b[10];
    int n;

public:
    Array(int size) {
        n = size;
        A = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
    }

    void createArray() {
        for (int i = 0; i < n; i++) {
            b[i] = A[i] * 3;
        }
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    ~Array() {
        delete[] A;
        A = 0;
    }
};

int main() {
    int n;
    do {
        cin >> n;
    } while (n < 1 || n > 10);

    Array obj(n);
    obj.createArray();
    obj.print();

    return 0;
}