#include <iostream> 
using namespace std; 

int main() { 
    string answer; 
    cout << "What is the capital of France? "; 
    cin >> answer; 

    if(answer == "Paris") { //doesnt work with lower P
        cout << "Correct!"; 
    } else { 
      cout << "Wrong!"; 
    } 
    return 0; 
} 
