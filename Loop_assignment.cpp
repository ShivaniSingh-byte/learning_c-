#include<iostream>
using namespace std;

int main(){
         1. Print numbers from 1 to 10:
         * for loop :
         for (int SHIVANIi=1; SHIVANIi<=10; SHIVANIi++){
            cout<<SHIVANIi<<" ";
         }

         * while loop :
         int SHIVANIi=1;
         while(SHIVANIi<=10){
            cout<<SHIVANIi<<" ";
            SHIVANIi++;
         }

         * do while :
         int SHIVANIi=1;
         do{
            cout<<SHIVANIi<<" ";
            SHIVANIi++;
         }
         while(SHIVANIi<=10);

         2. Print numbers from 10 to 1 :
          * for loop :
         for(int SHIVANIi=10; SHIVANIi>=1; SHIVANIi--){
            cout<<SHIVANIi<<" ";
         }

         * while loop :
         int SHIVANIi=10;
         while(SHIVANIi>=1){
            cout<<SHIVANIi<<" ";
            SHIVANIi--;
         }

         * do while loop :
         int SHIVANIi=10;
         do{
            cout<<SHIVANIi<<" ";
            SHIVANIi--;
         }
         while(SHIVANIi>=1);

         3. Print all even numbers btw 1 to 50 :
         * for loop :
         for(int SHIVANIi=1; SHIVANIi<=50; SHIVANIi++){
            if(SHIVANIi%2==0){
            cout<<SHIVANIi<<" ";
         }
         }

         * while loop :
         int SHIVANIi=1;
         while(SHIVANIi<=50){
          if(SHIVANIi%2==0){
          cout<<SHIVANIi<<" ";
         }
         SHIVANIi++;
         }

         * do while :
         int SHIVANIi=1;
         do{
            if(SHIVANIi%2==0)
            cout<<SHIVANIi<<" ";
            SHIVANIi++;
         }
         while(SHIVANIi<=50);

         4.Print all odd numbers btw 1 and 50 :
         * for  loop :
         for(int SHIVANIi=1; SHIVANIi<=50; SHIVANIi++){
            if(SHIVANIi%2!=0){
            cout<<SHIVANIi<<" ";
            }
         }

         * while loop :
         int SHIVANIi=1;
         while(SHIVANIi<=50){
            if(SHIVANIi%2!=0){
            cout<<SHIVANIi<<" ";
            }
            SHIVANIi++;
         }

         * do while :
         int SHIVANIi=1;
         do{
            if(SHIVANIi%2!=0)
            cout<<SHIVANIi<<" ";
            SHIVANIi++;0
         }
         while(SHIVANIi<=50);

         5. Print the sum of N natural numbers :
         * for loop :
         int SHIVANIn;
         int SHIVANIans=0;
         cout<<"Enter a no:";
         cin>>SHIVANIn;
         for(int SHIVANIi=1; SHIVANIi<=SHIVANIn; SHIVANIi++){
            SHIVANIans=SHIVANIans+SHIVANIi;
         }
         cout<<SHIVANIans;

         * while loop :
         int SHIVANIi=1;
         int SHIVANIans=0;
         int SHIVANIn;
         cout<<"Enter a no:";
         cin>>SHIVANIn;
         while(SHIVANIi<=SHIVANIn){
            SHIVANIans=SHIVANIans+SHIVANIi;
            SHIVANIi++;
         }
         cout<<SHIVANIans;

         * do while :
         int SHIVANIi=1;
         int SHIVANIans=0;
         int SHIVANIn;
         cout<<"Enter a no:";
         cin>>SHIVANIn;
         do{
            SHIVANIans=SHIVANIans+SHIVANIi;
            SHIVANIi++;
         }
         while(SHIVANIi<=SHIVANIn);
         cout<<SHIVANIans;

         6. Calculate factorial of a given number N :
         * for loop :
         int SHIVANIn;
         int SHIVANIans=1;
         cout<<"Enter a no:";
         cin>>SHIVANIn;
         for(int SHIVANIi=1; SHIVANIi<=SHIVANIn; SHIVANIi++){
            SHIVANIans=SHIVANIans*SHIVANIi;
         }
         cout<<SHIVANIans;

         * while loop :
         int SHIVANIi=1;
         int SHIVANIans=1;
         int SHIVANIn;
         cout<<"Enter a no:";
         cin>>SHIVANIn;
         while(SHIVANIi<=SHIVANIn){
            SHIVANIans=SHIVANIans*SHIVANIi;
            SHIVANIi++;
         }
         cout<<SHIVANIans;

         * do while :
         int SHIVANIi=1;
         int SHIVANIans=1;
         int SHIVANIn;
         cout<<"Enter a no:";
         cin>>SHIVANIn;
         do{
            SHIVANIans=SHIVANIans*SHIVANIi;
            SHIVANIi++;
         }
         while(SHIVANIi<=SHIVANIn);
         cout<<SHIVANIans;

         7.Print the table of any number entered by the user :
         * for loop :
         int SHIVANInum;
         cout<<"Enter any no:";
         cin>>SHIVANInum;
         for(int SHIVANIi=1; SHIVANIi<=10; SHIVANIi++){
            cout<<SHIVANInum<<" x "<<SHIVANIi<<" = "
            <<SHIVANInum * SHIVANIi<<endl;
         }

         * while loop :
         int SHIVANInum;
         int SHIVANIi=1;
         cout<<"Enter any no:";
         cin>>SHIVANInum;
         while(SHIVANIi<=10){
            cout<<SHIVANInum<<" x "<<SHIVANIi<<" = "
            <<SHIVANInum * SHIVANIi<<endl;
            SHIVANIi++;
         }

         * do while :
         int SHIVANInum;
         int SHIVANIi=1;
         cout<<"Enter any no:";
         cin>>SHIVANInum;
         do{
            cout<<SHIVANInum<<" x "<<SHIVANIi<<" = "
            <<SHIVANInum * SHIVANIi<<endl;
            SHIVANIi++;
         }
         while(SHIVANIi<=10);

         8. Check if a number is a perfect number :
         * for loop:
         int SHIVANInum;
         int SHIVANIsum=0;
         cout<<"Enter the no:";
         cin>>SHIVANInum;
         for(int SHIVANIi=1; SHIVANIi<SHIVANInum; SHIVANIi++){
             if(SHIVANInum%SHIVANIi==0){
                SHIVANIsum += SHIVANIi;
             }
         }
         if(SHIVANIsum==SHIVANInum)
            cout<<SHIVANInum<<"is a perfect number";
         else
            cout<<SHIVANInum<<"is not a perfect number";

        * while loop :
        int SHIVANInum;
        int SHIVANIsum=0;
        int SHIVANIi=1;
        cout<<"Enter the no:";
        cin>>SHIVANInum;
        while(SHIVANIi<SHIVANInum){
         if(SHIVANInum%SHIVANIi==0){
                SHIVANIsum += SHIVANIi;
                }
         SHIVANIi++;
         }
         if(SHIVANIsum==SHIVANInum)
            cout<<SHIVANInum<<"is a perfect number"<<endl;
         else
            cout<<SHIVANInum<<"is not a perfect number"<<endl;

        * do while :
        int SHIVANInum;
        int SHIVANIsum=0;
        int SHIVANIi=1;
        cout<<"Enter the no:";
        cin>>SHIVANInum;
        do{
           if(SHIVANInum%SHIVANIi==0){
                SHIVANIsum += SHIVANIi;
                }
         SHIVANIi++;
         }
        while(SHIVANIi<SHIVANInum);
        if(SHIVANIsum==SHIVANInum)
            cout<<SHIVANInum<<"is a perfect number"<<endl;
         else
            cout<<SHIVANInum<<"is not a perfect number"<<endl;

        9.Print the square of numbers from 1 to 10 :
        * for loop :
        for(int SHIVANIi=1; SHIVANIi<=10;SHIVANIi++){
            cout<<"Square"<<SHIVANIi<<" = "
            <<SHIVANIi*SHIVANIi<<endl;
        }

        * while loop :
        int SHIVANIi=1;
        while(SHIVANIi<=10){
            cout<<"Square"<<SHIVANIi<<" = "
            <<SHIVANIi*SHIVANIi<<endl;
            SHIVANIi++;
        }

        * do while :
        int SHIVANIi=1;
        do{
            cout<<"Square"<<SHIVANIi<<" = "
            <<SHIVANIi*SHIVANIi<<endl;
            SHIVANIi++;
        }
        while(SHIVANIi<=10);

        10. Print the cube of numbers from 1 to 5 :
        * for loop :
        for(int SHIVANIi=1; SHIVANIi<=5; SHIVANIi++){
            cout<<"Cube"<<SHIVANIi<<" = "
            <<SHIVANIi*SHIVANIi*SHIVANIi<<endl;
        }

        * while loop :
        int SHIVANIi=1;
        while(SHIVANIi<=5){
            cout<<"Cube"<<SHIVANIi<<" = "
            <<SHIVANIi*SHIVANIi*SHIVANIi<<endl;
            SHIVANIi++;
        }

        * do while :
        int SHIVANIi=1;
        do{
            cout<<"Cube"<<SHIVANIi<<" = "
            <<SHIVANIi*SHIVANIi*SHIVANIi<<endl;
            SHIVANIi++;
        }
        while(SHIVANIi<=5);

        11. Print numbers from 100 down to 90 :
        * for loop :
        for(int SHIVANIi=100; SHIVANIi>=90; SHIVANIi--){
            cout<<SHIVANIi<<" "<<endl;
        }

        * while loop :
        int SHIVANIi=100;
        while(SHIVANIi>=90){
            cout<<SHIVANIi<<" "<<endl;
            SHIVANIi--;
        }

        * do while :
        int SHIVANIi=100;
        do{
            cout<<SHIVANIi<<" "<<endl;
            SHIVANIi--;
        }
        while(SHIVANIi>=90);

        12. Print all multiples of 3 btw 1 to 30 :
        * for loop :
        for (int SHIVANIi=1; SHIVANIi<=30; SHIVANIi++){
            if(SHIVANIi%3==0){
                cout<<SHIVANIi<<" ";
            }
        }

        * while loop :
        int SHIVANIi=1;
        while(SHIVANIi<=30){
            if(SHIVANIi%3==0)
            cout<<SHIVANIi<<" ";
            SHIVANIi++;
        }

        * do while :
        int SHIVANIi=1;
        do{
            if(SHIVANIi%3==0){
               cout<<SHIVANIi<<" ";
            }
            SHIVANIi++;
        }
        while(SHIVANIi<=30);

        13. Print the sum of even numbers from 1 to 20 :
        * for loop :
        int SHIVANIsum=0;
        for(int SHIVANIi=1; SHIVANIi<=20; SHIVANIi++){
            if(SHIVANIi%2==0){
            cout<<SHIVANIi<<" ";
            SHIVANIsum += SHIVANIi;
           }
        }
        cout<<"\n"<<"Sum of even no:"<<SHIVANIsum;

        * while loop :
        int SHIVANIsum=0;
        int SHIVANIi=1;
        while(SHIVANIi<=20){
            if(SHIVANIi%2==0){
            cout<<SHIVANIi<<" ";
            SHIVANIsum += SHIVANIi;
            }
            SHIVANIi++;
        }
        cout<<"\n"<<"Sum of even no:"<<SHIVANIsum;

        * do while :
        int SHIVANIi=1;
        int SHIVANIsum=0;
        do{
            if(SHIVANIi%2==0){
                cout<<SHIVANIi<<" ";
                SHIVANIsum += SHIVANIi;
            }
            SHIVANIi++;
        }
        while(SHIVANIi<=20);
        cout<<"\n"<<"Sum of even no:"<<SHIVANIsum;

        14. Print the sum of odd numbers from 1 to 20 :
        * for loop :
        int SHIVANIsum=0;
        for(int SHIVANIi=1; SHIVANIi<=20; SHIVANIi++){
            if(SHIVANIi%2!=0){
            cout<<SHIVANIi<<" ";
            SHIVANIsum += SHIVANIi;
           }
        }
        cout<<"\n"<<"Sum of odd no:"<<SHIVANIsum;

        * while loop :
        int SHIVANIsum=0;
        int SHIVANIi=1;
        while(SHIVANIi<=20){
            if(SHIVANIi%2!=0){
            cout<<SHIVANIi<<" ";
            SHIVANIsum += SHIVANIi;
            }
            SHIVANIi++;
        }
        cout<<"\n"<<"Sum of odd no:"<<SHIVANIsum;

        * do while :
        int SHIVANIi=1;
        int SHIVANIsum=0;
        do{
            if(SHIVANIi%2!=0){
                cout<<SHIVANIi<<" ";
                SHIVANIsum += SHIVANIi;
            }
            SHIVANIi++;
        }
        while(SHIVANIi<=20);
        cout<<"\n"<<"Sum of odd no:"<<SHIVANIsum;

        15. Print numbers from 1 to 10 along with their squares :
        * for loop :
        for(int SHIVANIi=1; SHIVANIi<=10; SHIVANIi++){
            cout<<SHIVANIi<<"="<<SHIVANIi*SHIVANIi<<endl;
        }

        *while loop :
        int SHIVANIi=1;
        while(SHIVANIi<=10){
            cout<<SHIVANIi<<"="<<SHIVANIi*SHIVANIi<<endl;
            SHIVANIi++;
        }

        * do while loop :
        int SHIVANIi=1;
        do{
            cout<<SHIVANIi<<"="<<SHIVANIi*SHIVANIi<<endl;
            SHIVANIi++;
        }
        while(SHIVANIi<=10);

        16. Print the countdown from 10 to 0 and then "Completed" :
        * for loop :
        for(int SHIVANIi=10; SHIVANIi>=0; SHIVANIi--){
            cout<<SHIVANIi<<" ";
        }
        cout<<"Completed";

        * while loop :
        int SHIVANIi=10;
        while(SHIVANIi>=0){
            cout<<SHIVANIi<<" ";
            SHIVANIi--;
        }
        cout<<"Completed";

        * do while loop :
        int SHIVANIi=10;
        do{
            cout<<SHIVANIi<<" ";
            SHIVANIi--;
        }
        while(SHIVANIi>=0);
        cout<<"Completed";

        17. Print numbers 5, 10, 15, 20, 25 using a loop :
        * for loop :
        for(int SHIVANIi=5; SHIVANIi<=25; SHIVANIi+=5){
            cout<<SHIVANIi<<" ";
        }

        * while loop :
        int SHIVANIi=5;
        while(SHIVANIi<=25){
            cout<<SHIVANIi<<" ";
            SHIVANIi+=5;
        }

        * do while :
        int SHIVANIi=5;
        do{
            cout<<SHIVANIi<<" ";
            SHIVANIi+=5;
        }
        while(SHIVANIi<=25);

        18. Print “Learning C++” 7 times :
        * for loop :
        for(int SHIVANIi=0; SHIVANIi<7; SHIVANIi++){
            cout<<"Learning C++"<<endl;
        }

        * while loop :
        int SHIVANIi=0;
        while(SHIVANIi<7){
            cout<<"Learning C++"<<endl;
            SHIVANIi++;
        }

        * do while :
        int SHIVANIi=0;
        do{
            cout<<"Learning C++"<<endl;
            SHIVANIi++;
        }
        while(SHIVANIi<7);

        19. Print countdown 5, 4, 3, 2, 1 and then print “Go!” :
        * for loop :
        for(int SHIVANIi=5; SHIVANIi>=1; SHIVANIi--){
            cout<<SHIVANIi<<"\n";
        }
        cout<<"GO!";

        * while loop :
        int SHIVANIi=5;
        while(SHIVANIi>=1){
            cout<<SHIVANIi<<"\n";
            SHIVANIi--;
        }
        cout<<"GO!";

        * do while :
        int SHIVANIi=5;
        do{
            cout<<SHIVANIi<<"\n";
            SHIVANIi--;
        }
        while(SHIVANIi>=1);
        cout<<"GO!";

        20. Print numbers 1 to 5 in one line separated by commas :
        * for loop :
        for(int SHIVANIi=1; SHIVANIi<=5; SHIVANIi++){
                cout<<SHIVANIi;
            if(SHIVANIi<5){
                cout<<",";
            }
        }

        * while loop :
        int SHIVANIi=1;
        while(SHIVANIi<=5){
            cout<<SHIVANIi;
            if(SHIVANIi<5){
                cout<<",";
            }
            SHIVANIi++;
        }

        * do while :
        int SHIVANIi=1;
        do{
            cout<<SHIVANIi;
            SHIVANIi++;
            if(SHIVANIi<=5){
                cout<<",";
            }
        }
        while(SHIVANIi<=5);

}
