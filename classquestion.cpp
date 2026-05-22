#include<iostream>
using namespace std;


/*Create a class Time with hours and minutes. Add two time objects and display the result.
class Time{
    int hours,minutes;
public :
    void input(){
        cout<<"Enter hours and minutes : ";
        cin>>hours>>minutes;
    }
    void add(Time t1,Time t2){
        minutes=t1.minutes+t2.minutes;
        hours=t1.hours+t2.hours;

        if (minutes>=60){
            hours+=minutes/60;
            minutes%=60;
        }
    }
    void display(){
        cout<<"Total Time="<< hours << " hours " << minutes << " minutes\n";
    }
};

int main(){
    Time t1, t2, t3;
    cout << "Enter first time:\n";
    t1.input();
    cout << "Enter second time:\n";
    t2.input();
    t3.add(t1, t2);
    t3.display();
}*/

/*Create a class BankAccount with account number and balance.
Add functions to deposit, withdraw, and display balance.
class BankAccount{
    int accno;
    int balance;
public :
    void input(){
        cout<<"Enter your accno : ";
        cin>>accno;
        cout<<"Enter your balance : ";
        cin>>balance;
    }
    void deposite(int amt){
        balance+=amt;
        cout<<balance<<endl;
    }
    void withdrawl(int amt){
        balance-=amt;
        cout<<balance<<endl;
    }
    void balances(){
        cout<<balance<<endl;
    }
};
int main(){
    BankAccount ba;
    ba.input();
    ba.deposite(1000);
    ba.withdrawl(3000);
    ba.balances();
}*/

/*Create a class Employee with name and basic salary.
Write a function to calculate net salary by adding 15% bonus.
class Employee{
    string name;
    float salary;
public :
    void details(){
        cout<<"Enter ur name : ";
        cin>>name;
        cout<<"Enter ur salary : ";
        cin>>salary;
    }
    void netsalary(){
        cout<<"Name : "<<name<<endl;
        int net=salary+(salary*0.15);
        cout<<net;
    }
};

int main(){
    Employee e;
    e.details();
    e.netsalary();
}*/

/*Create a class Circle with radius as data member.
Write functions to calculate area and circumference.
class Circle{
    float radius;
public :
    void calculate(){
        cout<<"Enter a radius : ";
        cin>>radius;
    }
    void display(){
        cout<<"Area of Circle : "<<3.14*radius*radius<<endl;
        cout<<"Circumference of Circle : "<<2*3.14*radius;
    }
};

int main(){
    Circle c;
    c.calculate();
    c.display();
}*/

/*Create a class Rectangle with length and width.
Write functions to calculate and display the area and perimeter.
class Rectangle{
    float length;
    float breadth;
public :
    void calculate(){
        cout<<"Enter a length : ";
        cin>>length;
        cout<<"Enter a breadth : ";
        cin>>breadth;
    }
    void display(){
        cout<<"Area of Rectangle : "<<length*breadth<<endl;
        cout<<"Perimeter of Rectangle : "<<2*(length+breadth);
    }
};

int main(){
    Rectangle r;
    r.calculate();
    r.display();
}*/

/*Create a class Student with data members name, roll number, and marks.
Write member functions to input and display the details.
class Student{
    string name;
    int rollno;
    int marks;
public :
    void input(){
        cout<<"Enter your name :";
        cin>>name;
        cout<<"Enter your roll no :";
        cin>>rollno;
        cout<<"Enter your marks :";
        cin>>marks;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Rollno : "<<rollno<<endl;
        cout<<"Marks : "<<marks;
    }

};

int main(){
    Student s;
    s.input();
    s.display();
}*/
