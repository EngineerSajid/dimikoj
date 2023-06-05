#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int testCase = 1; testCase <= T; testCase++) {
        int N;
        cin >> N;
        
        cout << "Case " << testCase << ":";
        
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                cout << " " << i;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
