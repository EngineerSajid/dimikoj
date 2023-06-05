#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;  // সংখ্যার সংখ্যা পড়ানো হচ্ছে

    for (int i = 0; i < T; i++) {
        int num;
        cin >> num;  // পূর্ণসংখ্যা পড়ানো হচ্ছে

        if (num % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}