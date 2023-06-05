#include<iostream>
using namespace std;

int main(){
    int testcase;
    cout << "Enter testcase: ";
    cin >> testcase;

    for(int i=0; i<testcase; testcase++){
        int number;
        cout << "Enter numbers: ";
        cin >> number;

        for(int row=0; row<number; row++){
            for(int column = 0; column<number; column++){
                if(row == 0 || row == number-1 || column == 0 || column == number-1){
                    cout << "*";
                }else{
                    cout << "*";
                }
               
            }
            cout << endl;
        }
        cout << endl;
    }
}