#include<iostream>
using namespace std;
/*Anonymous Class :A class which doesn't have its name(nameclass)
class {
public :
    void show(){
        cout<<"Welcome,Shivani!";
    }
}obj;
int main(){
    obj.show();
}*/

/*access specifier : it is used to specify the accessibility.
there are three types of access specifier :
public , private , protected .*/

   /* class cal{     //:: - scope resolution operator
        int a,b;
    public :
        void add();
        void sub();
        void mul();
        void div();
    };
    void cal :: add(){
        a=10;
        b=20;
        cout<<a+b<<endl;
    }
    void cal :: sub(){
        a=20;
        b=10;
        cout<<a-b<<endl;
    }
    void cal :: mul(){
        a=10;
        b=20;
        cout<<a*b<<endl;
    }
    void cal :: div(){
        a=10;
        b=5;
        cout<<a/b;
    }
    int main(){
        cal ob;
        ob.add();
        ob.sub();
        ob.mul();
        ob.div();
    }*/

/*Function declare and define outside a class :
    class sub{
        int a,b;
    public :
        void sum();
    };
    void sub :: sum(){
        a=10;
        b=20;
        cout<<a+b;
    }
    int main(){
        sub s;
        s.sum();
    }*/

/*Function declare and define inside a class :
    class sum{
        int a,b;
    public :
        void add(){   //decleration of function
            a=34;
            b=345;
            cout<<"Result = "<<a+b;    //definition of function
        }
    };
    int main(){
        sum s;
        s.add();
    }*/

    //Function declare in a class but define outside of class

    /*class pl
    {
    // public:int a=2;
    int a=90;
    int b=4;
   public: void hello()
    {
        cout<< a;
    }
    void sum()
    {
        cout<<a+b<<endl;
    }

    void mul()
    {
        cout<<a-b<<endl;
    }

    };

int main () {

    // cout<<ob.a;
    pl ob;
    // ob.hello();
    ob.sum();
    ob.mul();
    }*/

    /*class p1{
        int a=90;
    public :
        void hello(){
            cout<<a;
        }
    };
    int main(){
        p1 ob;
        ob.hello();
    }*/

    /*class p1{
    public :
        int a=20;
    };
    int main(){
        p1 ob;
        cout<<ob.a;
    }*/

    /*class student{
        char c;
    public :
        int a,b;
    };
    int main(){
        student obj;
        obj.a=900;
        cout<<obj.a;
    }*/

    /*class student{
        char c;
        int a,b;
    };
    int main(){
        student obj,obj2;
        cout<<sizeof(obj)<<endl;
        cout<<sizeof(obj2);
    }*/

    /*class student{
        int a,b;
        char c;
    };
    int main(){
        student obj,obj2;
        cout<<sizeof(obj)<<endl;
        cout<<sizeof(obj2);
    }*/

    /*class student{
        int a,b;
    };
    int main(){
        student obj,obj2;
        cout<<sizeof(obj)<<endl;
        cout<<sizeof(obj2);
    }*/

    /*class student{ by default is 1

    };
    int main(){
        student obj,obj2;
        cout<<sizeof(obj)<<endl;
        cout<<sizeof(obj2);
    }*/

    /*class student{

    };
    int main(){
        student obj;
        cout<<sizeof(obj);
    }*/

    /*empty class : smallest program
    class student{

    };
    int main(){

    }*/

    /*class joy{
        int a,b;
    public :
        void sum(){
            cout<<"Enter 1 & 2 no :";
            cin>>a>>b;
            cout<<a+b;
        }
        void mul(){
            cout<<"Enter 1 & 2 no :";
            cin>>a>>b;
            cout<<a+b;
        }
    };
    int main(){
        joy j;
        j.sum();
        j.mul();
        cout<<sizeof(j);
    }*/

    /*return 0 shows the success rate of a program.
    int a,b;
    cout<<"Enter 1 no:";
    cin>>a;
    cout<<"Enter 2 no:";
    cin>>b;
    cout<<a/b<<"\n";
    cout<<"done";*/
