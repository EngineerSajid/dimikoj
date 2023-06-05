#include<iostream>
using namespace std;

int main() {
    int i;
    int counter = 0;
    
    for (i = 1000; i >= 1; i--) {
        cout << i << "\t";
        counter++;
        
        if (counter % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}