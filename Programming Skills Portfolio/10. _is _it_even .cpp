#include <iostream> 

using namespace std; 

  

string checkEvenOdd(int num) { 

    if(num % 2 == 0) return "The provided number is even"; 

    else return "The provided number is odd"; 

} 

  

int main() { 

    int number; 

    cout << "Enter a number: "; 

    cin >> number; 

  

    cout << checkEvenOdd(number) << endl; 

  

    return 0; 

} 