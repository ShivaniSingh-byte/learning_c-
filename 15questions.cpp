+#include<iostream>
using namespace std;

int main(){
    //perfect no:
   /* int num;
    int sum=0;
    cout<<"Enter a no:";
    cin>>num;

    for(int i=1; i<num; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<"perfect";
    }
    else{
        cout<<"not perfect";
    }

    //prime :
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
        cout<<"Prime no.";
    }
    else{
        cout<<"Not Prime no.";
    }

    //palindrome :
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

    //sum of only odd digit in a no:
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
    cout<<sum;

    //sum of only even digit in a no:
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

    //only odd digit in a no :
    int num;
    cout<<"Enter a no :";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(num%2!=0){
            cout<<digit;
        }
        num=num/10;
    }

    //only even digit in a no:
    int num;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(num%2==0){
            cout<<digit;
        }
        num=num/10;
    }

    //lowest no :
    int num;
    int min=10;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(min>digit){
            min=digit;
        }
        num=num/10;
    }
    cout<<min;

    //greatest no :
    int num;
    int max=0;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(max<digit){
            max=digit;
        }
        num=num/10;
    }
    cout<<max;

    //count in a digit :
    int num;
    int count=0;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        count++;
        num=num/10;
    }
    cout<<count;

    //sum of digit in a no:
    int num;
    int sum=0;
    cout<<"Enter a no:";
    cin>>num;

    while(num>0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<sum;*/

    //reverse :
    int num;
    int reverse=0;
    cout<<"Enter a no:";
    cin>>num;

    while(num%10){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    cout<<reverse;

    // power :
    /*int power;
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

    // facorial :
    int fact;
    int i=1;
    int ans=1;
    cout<<"Enter a no:";
    cin>>fact;

    while(i<=fact){
        ans=ans*i;
        i++;
    }
    cout<<ans;*/
}
