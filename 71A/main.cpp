#include <iostream>
 
using namespace std;
 
int main() {
    int n, i;
    string word;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> word;
        
        if (word.size() > 10) {
            cout << word[0] << (word.size() - 2) << word[word.size() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
 
    return 0;
}