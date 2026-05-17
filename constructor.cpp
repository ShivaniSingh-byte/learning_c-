#include<iostream>
using namespace std;
/*Constructor : it is used to allocate the memory of an object.
it doesn't return any value.
Constructor is call by an implicit calling.
it is also called special function.
the function name is similar to a class name in a constructor.
more than one constructor is called multioverloaded constructor.
constructor is activated when we create an object of any class.
there are three types of constructor :
    1.default Constructor
    2.parameterised Constructor
    3.copy Constructor*/

    /*2.parameterised Constructor
    class joy{
    public:
        joy(int accno){
            cout<<"ur balance = 5000000";
        }
    };
    int main(){
        joy b(101);
    }*/

    /*1.default Constructor
    class joy{
    public:
        joy(){
            cout<<"Constructor Activated";
        }
    };
    int main(){
        joy t;
    }*/

    /*3. copy constructor
    class Rbi
    {
    int amount;
    int balance;
    public:Rbi()
    {
    amount=10000;
    }
    Rbi(Rbi &obj)
    {
    balance=obj.amount;
    cout<<"Balance="<<balance<<"\n";
    }
    };
    int main()
    {
    Rbi Sbi;
    Rbi Pnb(Sbi);

    }*/

    /*Overloaded Constructor:-
    class joy
    {
    public:joy()
    {
        cout<<"Constructor activated"<<endl;
    }
    public:joy(int acno)
    {
     cout<<"your balance=11000";
    }
    };

    int main()
    {
    joy();
    joy(101);
    }*/

/*Constructor or destructor
class hello
{
int a;
public:hello()
{
cout<<"activated\n";
}
~hello()
{
cout<<"\nmemory released\n";
}
void display()
{
cout<<"welcome\n";
}
void show()
{
cout<<"\n bye bye\n";
}
};
int main()
{
hello h;
h.display();
h.show();
}*/

