#include <iostream> 

using namespace std; 

  

int main() { 

    string answer; 

    cout << "What is the capital of France? "; 

    cin >> answer;  // simple input (stops at space) 

  

    if(answer == "Paris") { 

        cout << "Correct!"; 

    } else { 

        cout << "Wrong!"; 

    } 

  

    return 0; 

} 