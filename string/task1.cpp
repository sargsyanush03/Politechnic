// 1. Given a string, obtain a new string whose elements are obtained by removing 'a' characters from the given string.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[50], s2[50];
    cin.getline(s1, 50);

    char *p1 = s1, *p2 = s2;

    while (*p1 != '\0') {
        if (*p1 != 'a') {
            *p2 = *p1;
            p2++;
        }
        p1++;
    }
    *p2 = '\0';

    cout << s2 << endl;

    return 0;
}