#include<iostream>
using namespace std;
    /* 1. Write a program to demonstrate a simple function that prints "Hello, World!".
// Function definition
void printMessage() {
    cout << "Hello, World!" << endl;
}

int main() {
    // Function call
    printMessage();
}*/

   /*2. Create a function to add two numbers and return the result.
// Function definition
int addNumbers(int a, int b) {
    return a + b;  // return the sum
}

int main() {
    int num1 = 5, num2 = 7;

    // Function call
    int result = addNumbers(num1, num2);

    cout << "Sum: " << result << endl;
}*/

   /*3. Implement a program with a function to find the maximum of three numbers.
// Function to find maximum of three numbers
int findMax(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int maxValue = findMax(num1, num2, num3);
    cout << "Maximum value: " << maxValue << endl;
}*/

   /*4. Write a function to calculate the factorial of a number.
// Function to calculate factorial using loop
int factorial(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;  // multiply result by i
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
}*/

    /*5. Create a function to check whether a number is prime or not.
// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)  // 0 and 1 are not prime
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)  // divisible by i → not prime
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
}*/

   /*6. Write a program to demonstrate function overloading with different types of
parameters.
// Overloaded functions

// 1. Add two integers
int add(int a, int b) {
    return a + b;
}

// 3. Add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 integers (5 + 10): " << add(5, 10) << endl;
    cout << "Sum of 3 integers (1 + 2 + 3): " << add(1, 2, 3) << endl;
}*/

   /*7. Implement a program to calculate the area of a rectangle, circle, and triangle using
separate functions.*/

   /*8. Create a recursive function to calculate the nth Fibonacci number.
// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)  // base case
        return 0;
    else if (n == 1)  // base case
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // recursive relation
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
}*/

   /*9. Write a function to reverse a number.

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;          // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        n /= 10;                     // remove last digit
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverseNumber(num) << endl;
}*/

   //10. Create a function to swap two numbers using call by value and call by reference.
