#include <iostream>

using namespace std;

int main() {
    
    int n;
    int s = 0;
    string o;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> o;
        if (o == "++X" || o == "X++") {
            ++s;
        }
        
        if (o == "--X" || o == "X--") {
            --s;
        }
    }
    
    cout << s << endl;
    
    return 0;
}