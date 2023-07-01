#include <iostream>
 
using namespace std;
 
int main() {
    int i,n,solution = 0;
    bool p,v,t;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> p >> v >> t;
        
        if (p + v + t >= 2) {
            solution++;
        }
    }
    
     cout << solution << endl;
 
    return 0;
}