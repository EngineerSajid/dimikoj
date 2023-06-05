#include <iostream>
using namespace std;

int main() {

    int T;
    
    cout << "Enter the testcase: ";
    cin >> T;
    
    for(int i=0; i<T; i++){
        int number;
        int sum =0;
        cout << "Enter a five-digit number: ";
        cin >> number;
        
        // Extracting the first and last digits
        
        sum += number % 10;
        sum += number / 10000;
        cout << "Sum = " << sum <<endl;
    }
   
    

    return 0;
}
