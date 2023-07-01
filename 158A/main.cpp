#include <iostream>
using namespace std;
 
int main() {
    int n,k;
    cin >> n >> k;
    
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int count = 0;
    int k_place = a[k - 1];
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            break;
        }
        
        if (a[i] >= k_place) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}