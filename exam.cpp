#include<iostream>
using namespace std;
int main(){
    /*dataype
    1. Write a program to display the sizes of all fundamental data types in C++.
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;

    2. Declare variables of all basic data types and initialize them with values.
    int a = 10;
    float b = 3.14f;
    double c = 9.87654321;
    char d = 'A';
    bool e = true;
    short f = 5;
    long g = 123456;
    long long h = 9876543210;

    cout << "int: " << a << endl;
    cout << "float: " << b << endl;
    cout << "double: " << c << endl;
    cout << "char: " << d << endl;
    cout << "bool: " << e << endl;
    cout << "short: " << f << endl;
    cout << "long: " << g << endl;
    cout << "long long: " << h << endl;

    3. Create a program that takes input from the user for each
    data type and displays the entered values.
    int a;
    float b;
    double c;
    char d;
    bool e;

    cout << "Enter an int: ";
    cin >> a;
    cout << "Enter a float: ";
    cin >> b;
    cout << "Enter a double: ";
    cin >> c;
    cout << "Enter a char: ";
    cin >> d;
    cout << "Enter a bool (0 or 1): ";
    cin >> e;

    cout << "int: " << a << endl;
    cout << "float: " << b << endl;
    cout << "double: " << c << endl;
    cout << "char: " << d << endl;
    cout << "bool: " << e << endl;

    4. Write a program to calculate the area of a circle using float and double data types.
    float f;
    double d;

    cout << "Enter radius (float): ";
    cin >> f;
    cout << "Enter radius (double): ";
    cin >> d;

    float area = 3.14159f * f * f;
    double area_d = 3.141592653589793 * d * d;
    cout << "Area using float: " << area << endl;
    cout << "Area using double: " << area_d << endl;

    5. Use char data type to print ASCII values of characters entered by the user.
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "You entered: " << ch << endl;
    cout << "ASCII value: " << (int)ch << endl;

    6. Create a program to demonstrate the use of bool data type.
    bool isCodingFun = true;
    bool isBoring = false;
    cout << "Is coding fun? " << isCodingFun << endl;
    cout << "Is coding boring? " << isBoring << endl;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    bool isPositive = (x > 0);
    cout << "Is the number positive? " << isPositive << endl;*/



         /*Loop :
    1. Print the first 10 natural numbers using a loop.
    for(int i=1; i<=10; i++){
        cout<<i<<endl;
    }

    2. Write a program to calculate the factorial of a number using a for loop.
    int fact;
    int ans=1;
    cout<<"Enter a no:";
    cin>>fact;
    for(int i=1; i<=fact; i++){
        ans=ans*i;
    }
    cout<<ans;

    3. Implement a program to find the sum of the first N natural numbers using a while loop.
    int i=1;
    int n;
    int sum=0;
    cout<<"Enter a no:";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum;

    4. Implement a program to find all numbers divisible by 3 and 5 within a range.
    int start;
    int end;
    cout<<"Enter a starting no:";
    cin>>start;
    cout<<"Enter a ending no:";
    cin>>end;
    for(int i=start; i<=end; i++){
        if(i%3==0 && i%5==0){
            cout<<i<<" ";
        }
    }

    5. Write a program to calculate the sum of squares of the first N natural numbers.
    int sum=0;
    int n;
    cout<<"Enter a no:";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum=sum+i*i;
    }
    cout<<sum;

    6. Print the multiplication table of a number.
    int num;
    cout<<"Enter a no:";
    cin>> num;
    for(int i=1; i<=10; i++){
        cout<<num*i<<endl;
    }

    7. Write a program to check if a number is a prime number.
    int num;
    int count=0;
    cout<<"Enter a no:";
    cin>>num;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime no";
    }
    else{
        cout<<"Not Prime no";
    }

    8. Implement a program to reverse a number.
    int num;
    int reverse=0;
    cout<<"Enter a no";
    cin>>num;
    while(num%10){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    cout<<reverse;

    9. Generate Fibonacci series up to a given term using loops.
    int num;
    cout<<"Enter a no:";
    cin>>num;
    int first=0;
    int second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=1; i<=num-2; i++){
        int next=first+second;
        first=second;
        second=next;
        cout<<next<<endl;
    }

    10. Implement a program to count the number of digits in a number.
    int num;
    cout<<"Enter a no:";
    cin>>num;
    int count=0;
    while(num>0){
        int digit=num%10;
        count++;
        num=num/10;
    }
    cout<<count;

    11. Write a program to calculate the sum of digits of a number.
    int sum=0;
    int num;
    cout<<"Enter a no:";
    cin>>num;
    while(num>0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<sum;

    12. Check if a number is a palindrome using loops.
    int num;
    int reverse=0;
    cout<<"Enter a no:";
    cin>>num;
    int ans=num;

    while(num!=0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(reverse==ans){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    13. Print all prime numbers within a given range.
    int start, end, num;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int num = start; num <= end; num++) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << num << " ";
        }
    }

    14. Write a program to find the LCM of two numbers.
    int a;
    int b;
    int lcm;
    cout<<"Enter a no:";
    cin>>a;
    cout<<"Enter a no:";
    cin>>b;
    int max=(a>b)?a:b;
    int num=max;

    while(true){
        if(max%a==0 && max%b==0){
            lcm=max;
            break;
        }
        max=max+num;
    }
    cout<<lcm;

    15. Write a program to find the HCF of two numbers.
    int hcf;
    int a;
    int b;
    cout<<"Enter a no:";
    cin>>a;
    cout<<"Enter a no:";
    cin>>b;
    int min=(a<b)?a:b;

    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<hcf;

    16. Create a program to calculate the power of a number using loops.
    int power;
    int base;
    int i=1;
    int ans=1;
    cout<<"Enter a base no:";
    cin>>base;
    cout<<"Enter a power no:";
    cin>>power;

    while(i<=power){
        ans=ans*base;
        i++;
    }
    cout<<ans;

    17. Print all Armstrong numbers within a range.
    int start, end, num;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    18. Write a program to find the sum of even and odd numbers separately in a range.
    sum of even no:
    int num;
    int sum=0;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(num%2==0){
            sum=sum+digit;
        }
        num=num/10;
    }
    cout<<sum;

    sum of odd no:
    int num;
    int sum=0;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(num%2!=0){
            sum=sum+digit;
        }
        num=num/10;
    }
    cout<<sum;*/
}
