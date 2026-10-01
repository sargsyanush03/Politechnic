#include <iostream>

using namespace std;

struct BookInfo {
    char surname[20];
    int pages;
    double price;
};

void Stanal(BookInfo *books, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (books[i].pages > k) {
            books[i].price *= 2;
        }
        cout << books[i].surname << " " << books[i].price << endl;
    }
}

int main() {
    int i, n, k;
    BookInfo books[20];
    do {
        cin >> n;
    } while (n <= 0 || n > 20);
    do {
        cin >> k;
    } while (k <= 0);

    for (i = 0; i < n; i++) {
        cin >> books[i].surname >> books[i].pages >> books[i].price;
    }

    Stanal(books, n, k);

    return 0;
}