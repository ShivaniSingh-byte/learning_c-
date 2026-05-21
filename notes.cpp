#include<iostream>
using namespace std;
int main()
{
//An operator is a special symbol or keyword that tells the computer to perform a specific operations or tasks on value..
// types of operator
// 1. arithmetic operator (+-*/%)
// 2. logical operator (and or not)
// 3. relational operator (<,<=,>,>=,=)
// 4. assignment operator (=)
// 5. ternary operator(?:)
// 6. comparison operator(==)
// 7. binary operator & unary operator
/*
logical operator : it will compare the logical value.
 1. and : && ( ampersand ) non-zero value is acceptable
    syntax : variable && variable
    t&&t=t else false
 2. or : || ( pipeline ) true is there when the ans is true and both are false then the ans is false
    syntax : varible || variable
    false || false = false else true
 3. not : ! opposite ans
    syntax : !variable
    opposite
 not comparison
 */

 /*int a=10;   //declaration with initilization
 int b=5;    //declaration with initilization
 int c;   //only declaration
 c=a&&b;
 cout<<c<<"\n";
 c=-5&&-6;
 cout<<c<<"\n";
 c=0&&0;
 cout<<c;
 */   //ex of and & ampersand..

 /*int a=9;
 int b=7;
 int c;
 c=a>3||b<2; //1
 cout<<c;
 c=4||0;
 cout<<c;  //1
 */   //ex of or

 //comparison
 /*int a=9;
 int b=0;
 int c;
 c=a>19 && b<-1;
 cout<<!c; */   //ex of not

 // (a>19) relation operator is used to relate or compare two value / it works on two operands.
 /* syntax:
    variablename1 operator variablename2
    1. >  : greater than
    2. >= : greater than equal to
    3. <  : less than
    4. <= : less than equal to
    5. != : not equal to
    */

/* int a;
a=9>2;
cout<<a;*/
  //static program


/*int a;
int b;
int c;
cout<<"enter 1 no.. \n :";
cin>>a;
cout<<"enter 2 no.. \n:";
cin>>b;
c=a>b;
cout<<"result :"<<c;*/
  //dynamic program

/*int a;
int b;
cout<<"enter 1 no.. \n:";
cin>>a;
cout<<"enter 2 no.. \n:";
cin>>b;
cout<<(a>b);*/  //by memory saving


/*int a=19;
int c;
c=a>19;
cout<<c<<"\n";//0
c=a>=19;
cout<<c;//1*/

//to display the value and address of a variable
/*int a=9;
int b=8;
cout<<"value of a="<<a<<"\n";
cout<<"address of a="<<&a<<"\n";
cout<<"value of b="<<b<<"\n";
cout<<"address of b="<<&b; */
//0x is hexadecimal
//&(ampersand)(type of special operator)
//it represent the memory address of a variable
//memory address ko refer krta hn..

//Assignment operator { = } ( right to left )
/*int v=87;
cout<<v;*/

     //ternary operator
     //syntax
//variable = condition? ontruevalue : onfalsevalue ;
//It is used for condition based programming

/*int a;
a=9;
int b;
b=a>10?100:-100;
cout<<b;*/

/*int age;
cout<<"enter your age\n";
cin>>age;
(age>=18)?cout<<"u can vote":cout<<"u can't";*/

//two variable
/*int a,b;
cout<<"enter 1 no";
cin>>a;
cout<<"enter 2 no";
cin>>b;
b=a>b?a:b;      //a>b?cout<<a:cout<<b;
cout<<b;*/

/*int a,b;
cout<<"enter 1 no";
cin>>a;
cout<<"enter 2 no";
cin>>b;
a>b?cout<<a-b:cout<<b-a;*/

//ternary operator(condition based)
//syntax:condition?ontruevalue:onfalsevalue
/*int age;
cout<<"enter ur age :";
cin>>age;
int result;
result=age>0?100:10;
cout<<result;*/

//memory save
/*int age;
cout<<"enter ur age\n";
cin>>age;
(age>0)?cout<<"valid age":cout<<"invalid age";*/

//write a program to print even or odd
/*int a;
cout<<"enter no :";
cin>>a;
(a%2==0)?cout<<"even":cout<<"odd";*/   //==comparison operator


//Binary operator requires two operands to perform any operation.
//it include aritmetic,and ,or,relational operator etc..
/*base of binary is 2
binary requires 2 operands */

//unary operator:it requires one operand to perform any operation
/*it is having two types
1. increment operator (++)
2. decrement operator (--)
3. unary operator is having two different section
4. post section and pre section
Increment Operator:
1. pre increment: phele
    syntax:++variable

2.post increment: bad me ctrl+c
    syntax:variable++*/

/*int a=1;
cout<<a++<<"\n";
cout<<a;*/   //post increment //a=a+1
/*int b=1;
cout<<++b;*/   //pre increment

/*decrement operator:
1.pre decrement:
      syntax:--variable
2.post decrement:
      syntax:variable--*/

/*int a=6;
int b=7;
cout<<++a<<"\n";
cout<<--b<<"\n";
cout<<a++<<"\n";
cout<<b--;*/

//unary operator with examples
/*int a=2;
int b=3;
int c;
c=--a;
cout<<"c="<<c<<"\t"<<"a="<<a<<"\n"; //c=2,a=3
a=--b;
cout<<"a="<<a<<"\t"<<"b="<<b<<"\n"; //b=2,a=2
b=c++;
cout<<"b="<<b<<"\t"<<"c="<<c<<"\n"; //b=1,c=1
cout<<"\n final values\n";
cout<<"a="<<a<<"\n";
cout<<"b="<<b<<"\n";
cout<<"c="<<c;*/

/*int a=4;
int b=9;
int c;
c=b++;
a=c--;
b=--a;
cout<<"a="<<a<<"\n";
cout<<"b="<<b<<"\n";
cout<<"c="<<c;*/

/*int a=90;
int b=3;
int c;
c=++b;
b=--a;
a=c++;
cout<<"a="<<a<<"\n";
cout<<"b="<<b<<"\n";
cout<<"c="<<c;*/

/* Bitwise Operators :
It is used in hardware programming
1. And (&)
2. Or (|)
3. Negation(~) : -(variable+1)
4. Left shift (<<) : multiply ko represent krta hn , binary ke base 2 se multiply
5. Right shift (>>) : divide */

/*int a;
a=8&13;
cout<<a<<"\n";
a=8&6;
cout<<a<<"\n";
a=34&49;
cout<<a<<"\n";
a=34|49;
cout<<a<<"\n";
a=34|49;
cout<<~a<<"\n";
a=90;
cout<<~a<<"\n";
a=-6;
cout<<~a<<"\n";
a=34&75;
cout<<a<<"\n";
a=94&29;
cout<<a<<"\n";
a=65&88;
cout<<a<<"\n";
a=29&32;
cout<<a<<"\n";
a=12&58;
cout<<a<<"\n";
a=52&82;
cout<<a<<"\n";
a=49|33;
cout<<a<<"\n";
a=10|87;
cout<<a<<"\n";
a=92|98;
cout<<a<<"\n";
a=7;
cout<<~a<<"\n";*/

// left shift operator :
/*int v=7;
int c;
c=v<<4;
cout<<c;*/

//right shift operator :
/*int v=20;
int c;
c=v>>3;
cout<<c;*/

/*int a=7;
int b=6;
int c;
cout<<(a&b);
cout<<(a|b);
cout<<~a;
c=a<<4;
cout<<c;
c=b>>3;
cout<<c;*/

/*Special operator : 1.sizeof()
2.address of variable (&)
it will count the variable of byte or size
it return no of bytes or memory */

/*int a=98;
cout<<"memory size in byte="<<sizeof(a)<<"\n";
cout<<"address of a="<<&a<<"\n";
cout<<"value of a="<<a;*/

/*Types of variable :
    1. local variable : within a scope/inside a scope
    2. global variable :
    3. reference variable
    4. pointer variable*/

/*int a=98;
cout<<a<<"\n";
{
int a=34;
cout<<a;
}*/ //local variable


}

