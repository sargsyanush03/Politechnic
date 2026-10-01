// 3. Given 2 strings, output true if both strings are the same, false otherwise.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[50], s2[50];
    cin.getline(s1, 50);
    cin.getline(s2, 50);

    char *p1 = s1, *p2 = s2;

    if (strcmp(p1, p2) == 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}