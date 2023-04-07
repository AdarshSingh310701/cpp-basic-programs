#include <iostream>

using namespace std;

int main() {
    int num1, num2, result;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    if(cin.fail()){
        cout << "Invalid input! Please enter valid numbers." << endl;
    }
    else{
        result = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << result << "." << endl;
    }
    
    return 0;
}

