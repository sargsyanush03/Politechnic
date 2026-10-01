// 2. Given a string, replace all 'a' characters in the string with 'b'.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[50];
    cin.getline(s1, 50);

    char *p = s1;

    while (strchr(p, 'a') != nullptr) {
        p = strchr(p, 'a');
        *p = 'b';
        p++;
    }

    cout << s1 << endl;

    return 0;
}