#include<iostream>
using namespace std;
/*1. Write a function to find square of a number.
int Square(int s){
    return s*s;
}
int main(){
    int s;
    cout<<"Enter a square side : ";
    cin>>s;
    cout<<Square(s);
}*/

/*2. Write a function to print “Hello World”.
void Hello(){
    cout<<"Hello World !";
}
int main(){
    Hello();
}*/

/*3. Write a function to check whether a number is even or odd.
int Numbers(int num){
    if (num%2==0)
        return true;
    else
        return false;
}
int main(){
    int num;
    cout<<"Enter a no : ";
    cin>>num;
    cout<<Numbers(num);
}*/

/*4. Write a function to find sum of two numbers.
int SumOfTwoNo(int a,int b){
    return a+b;
}
int main(){
    cout<<SumOfTwoNo(2,4);
}*/

/*5. Write a void function to print numbers from 1 to n.
void Numbers(int num){
    for(int i=1; i<=num; i++){
        cout<<i<<" ";
    }
}
int main(){
    Numbers(10);
}*/

/*6. Write a function to find maximum of two numbers.
int Maximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<Maximum(23,56);
}*/

/*7. Write a void function to display multiplication table of a number.
void Multiplication(int num){
    for(int i=1; i<=10; i++){
        cout<<num<<"X"<<i<<"="<<num*i<<endl;
    }
}
int main(){
    Multiplication(26);
}*/

/*8. Write a function to calculate area of rectangle.
int Rectangle(int len,int bre){
    return len*bre;
}
int main(){
    cout<<Rectangle(5,8);
}*/

/*9. Write a function to calculate factorial of a number.
int Factorial(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<Factorial(6);
}*/

/*10. Write a function to check whether a number is prime.
int PrimeNo(int num){
    int counts=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            counts+=1;
        }
    }
    if(counts==2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<PrimeNo(13);
}*/

/*11. Write a void function to print Fibonacci series up to n terms.
void Fibonacci(int num){
    int fi=0;
    int se=1;
    cout<<fi<<" "<<se<<" ";
    for(int i=1; i<num-1; i++){
        int nx=fi+se;
        fi=se;
        se=nx;
        cout<<nx<<" ";
    }
}
int main(){
    Fibonacci(5);
}*/

/*12. Write a function to find reverse of a number.
int Reverse(int num){
    int rev=0;
    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter a no :";
    cin>>num;
    cout<<Reverse(num);
}*/

/*13. Write a function to check palindrome number.
int Palindrome(int num){
    int rev=0;
    int ans=num;
    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    return rev==ans;
}
int main(){
    cout<<Palindrome(126);
}*/

/*14. Write a void function to count digits in a number.
void CountDigit(int num){
    int counts=0;
    while (num>0) {
        int digit=num%10;
        counts++;
        num/=10;
    }
    cout<<counts;
}
int main(){
    CountDigit(6590864);
}*/

/*15. Write a function to find largest element in an array.
int LargestElement(int arr[],int sizes){
    int largest=arr[0];
    for (int i=1; i<sizes; i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={2,3,45,6,54,32,59};
    cout<<LargestElement(arr,7);
}*/

/*16. Print Even Numbers
void EvenNumbers(int num){
    for(int i=1; i<=num; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    EvenNumbers(100);
}*/

/*17. Write a function to calculate power (x^y).
int Power(int pow, int base){
    int ans=1;
    for (int i=1; i<=pow; i++){
        ans=ans*base;
    }
    return ans;
}
int main(){
    cout<<Power(3,2);
}*/

/*Q.1 Write a return type function to find the circumference of a circle by passing radius.
float circle(float r){
    return 2*3.14*r;
}

int main(){
    cout<<"Circumference of Circle : "<<circle(4);
}*/

//Q.2 Write a function which return max value between two numbers.
/*int maximum(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    cout<<"Enter a no :";
    cin>>a;
    cout<<"Enter a no :";
    cin>>b;
    cout<<maximum(a,b);
}*/

/*Q.3 Write a function for Fahrenheit to Celsius Conversion.
void fahren(float f)
{
    cout<<(f-32)*5/9;
}

int main(){
    fahren(3);
}
*/

/*Q.4 Write a function to display the factorial of any number.
void factorial(int num){
    int f=1;
    for(int i=1; i<=num; i++){
        f=f*i;
    }
    cout<<f;
}

int main(){
    int num;
    cout<<"Enter a no :";
    cin>>num;
    factorial(num);
}*/

/*Q.5 Write a function to display power by using two parameter.  #include<math.h>
void power(int base,int pow){
    int ans=1;
    for (int i=1; i<=pow; i++){
        ans=ans*base;
    }
    cout<<ans;
}

int main(){
    int base;
    cout<<"Enter a base no :";
    cin>>base;
    int pow;
    cout<<"Enter a power no :";
    cin>>pow;
    power(base,pow);
}*/

/*Q.6 Write a function to take input as salary & return the salary incremented by 10 % .
int salary(int sal){
    return sal+sal*10/100;
}

int main(){
    int sal;
    cout<<"Enter your salary :";
    cin>>sal;
    cout<<salary(sal);
}*/

/*Q.7 Write a function to display the table of any number.
void table(int num){
    for(int i=1; i<=10; i++){
        cout<<num<<"x"<<i<<" = "<<num*i<<endl;
    }
}

int main(){
    int num=24;
    table(num);
}*/

/*Q.8 Write a function to find out the given number is prime or not.
void primeNumber(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        if (num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime no.";
    }
    else{
        cout<<"Not a Prime no.";
    }
}

int main(){
    int num;
    cout<<"Enter a no :";
    cin>>num;
    primeNumber(num);
}
*/

/*Q.9 Write a function to generate the cube of any number.
void cube(int a){
    cout<<a*a*a;
}

int main(){
    int a;
    cout<<"Enter a no :";
    cin>>a;
    cube(a);
}*/

/*Q.10 Write a function to display the sum of digit of any numbers.
void sumofDigit(int num){
    int sum=0;
    num;
    while (num>0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<sum;
}

int main(){
    int num=237;
    sumofDigit(num);
}
*/


