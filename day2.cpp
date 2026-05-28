#include<iostream>
using namespace std;
int main(){
    4. Write a program to find the size of int, float, double, and char.
    cout<<"Size of int :"<<sizeof(int)<<endl;
    cout<<"Size of float :"<<sizeof(float)<<endl;
    cout<<"Size of double :"<<sizeof(double)<<endl;
    cout<<"Size of char :"<<sizeof(char)<<endl;

    5. Write a program to demonstrate the use of cin and cout.
    int SHIVANInum;
    cout<<"Enter a no:";
    cin>>SHIVANInum;

    6. Write a program to calculate the area of a rectangle.
    int SHIVANIl;
    int SHIVANIb;
    int SHIVANIarea;
    cout<<"Enter a no:";
    cin>>SHIVANIl;
    cout<<"Enter a no:";
    cin>>SHIVANIb;
    SHIVANIarea=SHIVANIl*SHIVANIb;
    cout<<"Area of rectangle :"<<SHIVANIarea;

     7. Write a program to swap two numbers using a third variable.
   int SHIVANIa;
   int SHIVANIb;
   int SHIVANIc;
   cout<<"Enter 1st no:";
   cin>>SHIVANIa;
   cout<<"Enter 2nd no:";
   cin>>SHIVANIb;
   SHIVANIc=SHIVANIa;
   SHIVANIa=SHIVANIb;
   SHIVANIb=SHIVANIc;
   cout<<"a="<<SHIVANIa<<endl;
   cout<<"b="<<SHIVANIb<<endl;

   8. Write a program to swap two numbers without using a third variable.
   int SHIVANIa;
   int SHIVANIb;
   cout<<"Enter 1st no:";
   cin>>SHIVANIa;
   cout<<"Enter 2nd no:";
   cin>>SHIVANIb;
   SHIVANIa=SHIVANIa+SHIVANIb;
   SHIVANIb=SHIVANIa-SHIVANIb;
   SHIVANIa=SHIVANIa-SHIVANIb;
   cout<<"a="<<SHIVANIa<<endl;
   cout<<"b="<<SHIVANIb<<endl;

   9. Write a program to convert temperature from Celsius to Fahrenheit.
   int SHIVANIfah;
   int SHIVANIcel;
   cout<<"Enter a no:";
   cin>>SHIVANIfah;
   SHIVANIfah=(SHIVANIcel*9/5)+32;
   cout<<"Converting Celsius into Fahrenheit :"<<SHIVANIfah<<endl;
}
