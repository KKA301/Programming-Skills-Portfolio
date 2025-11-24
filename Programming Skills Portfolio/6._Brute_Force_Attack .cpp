#include <iostream> 
using namespace std; 

int main() { 
    int password = 12345; 
    int attempt; 
    int tries = 5; 
    while (tries > 0) { 
        cout << "Enter password: "; 
        cin >> attempt; 
        if (attempt == password) { 
            cout << "password is correct"; 
            return 0; 
        } 
        tries--; 
        if (tries > 0) { 
            cout << "incorrect password  " << tries << " attempts remaining.\n"; 
        } 
    } 
    cout << "you had been blocked for too many incorrect tries"; 
    return 0; 
} 
