// 4. Given a string containing a surname, output true if the surname ends with "yan", false otherwise.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[50];
    cin.getline(s1, 50);

    int l = strlen(s1);
    char *p1 = s1 + l - 3;

    if (l >= 3 && strcmp(p1, "yan") == 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}