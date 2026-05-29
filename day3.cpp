#include<iostream>
using namespace std;
int main(){
    /* IF ELSE STATEMENT :
    1. Write a program to check whether a number is positive, negative, or zero.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    2. Implement a grading system based on user input marks 80-90(A), 60-80(B), 40-60(C), 0-40(D).
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 60 && marks < 80) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 40 && marks < 60) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 0 && marks < 40) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Invalid marks entered!" << endl;
    }

    3. Check if a number is even or odd using an if-else statement.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    }
    else {
        cout << "The number is odd." << endl;
    }

    4. Write a program to find the largest of three numbers.
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    }
    else {
        cout << "The largest number is: " << c << endl;
    }

    5. Implement a program to check if a year is a leap year.
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }

    6. Write a program to determine the eligibility to vote based on age.
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else if (age >= 0) {
        cout << "You are not eligible to vote." << endl;
    }
    else {
        cout << "Invalid age entered!" << endl;
    }

    7. Create a program to check if a character is a vowel or consonant.
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        cout << "The character is a vowel." << endl;
    }
    else {
        cout << "The character is a consonant." << endl;
    }

    8. Implement a simple number guessing game with if-else statements.
    int secretNumber = 7;
    int guess;
    cout << "Guess the number (between 1 and 10): ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "Congratulations! You guessed the correct number." << endl;
    }
    else if (guess > secretNumber) {
        cout << "Too high! Try a smaller number." << endl;
    }
    else {
        cout << "Too low! Try a larger number." << endl;
    }

    9. Write a program to validate user input based on conditions Ex ATM.
    int atm,balance=10000;
      cout<<"1 for withdrawl\t";
      cout<<"2 for deposite\t";
      cout<<"3 for balance_cheaque\n";
      cin>>atm;
      if(atm==1){
        int amount_withdrawl;
        cout<<"Enter Amount :";
        cin>>amount_withdrawl;
        cout<<balance-amount_withdrawl;
      }
      else if(atm==2){
        int amount_deposite;
        cout<<"Enter Amount :";
        cin>>amount_deposite;
        cout<<balance+amount_deposite;
      }
      else if(atm==3){
        cout<<balance;
      }
      else{
        cout<<"Invalid Input";
      }

    10. Create a program to calculate the discount based on purchase amount using conditions 0-1000(5%),
1000-5000(10%), 5000-10000(15%), 10000-30000(20%) and more then 50000(30%).
    int amount, discount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount >= 0 && amount <= 1000) {
        discount = (amount * 5) / 100;   // 5%
    }
    else if (amount > 1000 && amount <= 5000) {
        discount = (amount * 10) / 100;  // 10%
    }
    else if (amount > 5000 && amount <= 10000) {
        discount = (amount * 15) / 100;  // 15%
    }
    else if (amount > 10000 && amount <= 30000) {
        discount = (amount * 20) / 100;  // 20%
    }
    else if (amount > 50000) {
        discount = (amount * 30) / 100;  // 30%
    }
    else {
        cout << "Invalid purchase amount!" << endl;
    }*/




    /* Operators :
    1. Write a program to demonstrate arithmetic operators.
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Addition (a + b): " << (a + b) << endl;
    cout << "Subtraction (a - b): " << (a - b) << endl;
    cout << "Multiplication (a * b): " << (a * b) << endl;
    cout << "Division (a / b): " << (a / b) << endl;
    cout << "Modulus (a % b): " << (a % b) << endl;

    2. Implement a calculator using basic operators (+, -, *, /, %).
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    // Using ternary operator chain
    int result = (op == '+') ? (a + b) :
                 (op == '-') ? (a - b) :
                 (op == '*') ? (a * b) :
                 (op == '/') ? (b != 0 ? (a / b) : 0) :
                 (op == '%') ? (b != 0 ? (a % b) : 0) : 0;
    cout << "Result: " << result << endl;

    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout << "Result: " << (a + b) << endl;
            break;
        case '-':
            cout << "Result: " << (a - b) << endl;
            break;
        case '*':
            cout << "Result: " << (a * b) << endl;
            break;
        case '/':
                cout << "Result: " << (a / b) << endl;
        default:
            cout << "Invalid operator!" << endl;
    }

    3. Demonstrate the use of increment and decrement operators.
    int x = 10;
    cout << "Initial value of x: " << x << endl;

    // Post-increment: value used first, then increased
    cout << "Post-increment (x++): " << x++ << endl;
    cout << "Value after post-increment: " << x << endl;

    // Pre-increment: value increased first, then used
    cout << "Pre-increment (++x): " << ++x << endl;
    cout << "Value after pre-increment: " << x << endl;

    // Post-decrement: value used first, then decreased
    cout << "Post-decrement (x--): " << x-- << endl;
    cout << "Value after post-decrement: " << x << endl;

    // Pre-decrement: value decreased first, then used
    cout << "Pre-decrement (--x): " << --x << endl;
    cout << "Value after pre-decrement: " << x << endl;

    4. Create a program to show the difference between post-increment and pre-increment.
    int x = 5;
    cout << "Initial value of x: " << x << endl;
    // Post-increment: value is used first, then increased
    cout << "Post-increment (x++): " << x++ << endl;
    cout << "Value of x after post-increment: " << x << endl;
    // Reset x for clarity
    x = 5;
    // Pre-increment: value is increased first, then used
    cout << "Pre-increment (++x): " << ++x << endl;
    cout << "Value of x after pre-increment: " << x << endl;

    5. Write a program to swap two numbers.
    int a;
    int b;
    int c;
    cout<<"Enter 1st no:";
    cin>>a;
    cout<<"Enter 2nd no:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    6. Write a program to swap two numbers using arithmetic operator.
    int a;
    int b;
    cout<<"Enter 1st no:";
    cin>>a;
    cout<<"Enter 2nd no:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    7. Use relational operators to compare two user-input numbers.
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a >= b : " << (a >= b) << endl;

    8. Implement a program using logical operators to validate user credentials.

    9. Demonstrate the use of the conditional (ternary) operator.
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    // Using ternary operator to find the larger number
    int max = (a > b) ? a : b;
    cout << "The larger number is: " << max << endl;
    // Another example: check even or odd
    cout << a << " is " << ((a % 2 == 0) ? "Even" : "Odd") << endl;
    cout << b << " is " << ((b % 2 == 0) ? "Even" : "Odd") << endl;

    10. Use assignment operators (+=, -=, *=, etc.) in a program.
    int a = 10;
    cout << "Initial value of a: " << a << endl;
    a += 5;   // same as a = a + 5
    cout << "After a += 5: " << a << endl;
    a -= 3;   // same as a = a - 3
    cout << "After a -= 3: " << a << endl;
    a *= 2;   // same as a = a * 2
    cout << "After a *= 2: " << a << endl;
    a /= 4;   // same as a = a / 4
    cout << "After a /= 4: " << a << endl;
    a %= 3;   // same as a = a % 3
    cout << "After a %= 3: " << a << endl;

    11. Write a program to find the maximum of two numbers using the conditional operator.
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int max = (a > b) ? a : b;
    cout << max << endl;*/

}
