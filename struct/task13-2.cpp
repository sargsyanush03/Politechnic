// 13. Given an integer n and an array of n elements representing book records (authors' surnames, number of pages, and price), if a book's page count is greater than a given number k, double its price; otherwise, leave it unchanged. Print the authors' surnames and the new prices of all books.

#include <iostream>

using namespace std;

struct BookInfo {
    char surname[20];
    int pages;
    double price;
};

int main() {
    int i, n, k;
    BookInfo books[20];
    do {
        cin >> n;
    } while (n <= 0 || n > 20);
    do {
        cin >> k;
    } while (k < 0);

    for (i = 0; i < n; i++) {
        cin >> books[i].surname >> books[i].pages >> books[i].price;
    }
    for (i = 0; i < n; i++) {
        if (books[i].pages > k) {
            books[i].price *= 2;
        }
        cout << books[i].surname << " " << books[i].price << endl;
    }

    return 0;
}