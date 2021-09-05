#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b; 
    
    cin >> a;
    cin >> b;
    
    cout << a.size() << " " << b.size() << endl; 
    cout << a + b << endl; 
    
    a[0] = a[0] ^ b[0]; 
    b[0] = b[0] ^ a[0]; 
    a[0] = a[0] ^ b[0]; 
    
    cout << a << " " << b;
    
  
    return 0;
}
