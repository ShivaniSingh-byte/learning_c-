#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
int n, arr[50], c, min, t;
clrscr();
cout<<"Enter number of elements\n";
cin>>n;
cout<<"Enter values\n";
for (c = 0; c < n; c++)
{
cin>>arr[c];
}
for (c=1;c<=n-1;c++)
{
min = c;//2
while(min>0 && arr[min]< arr[min-1])
{
t= arr[min];//1
arr[min]=arr[min-1];
arr[min-1] = t;//1
min--;
} }
cout<<"\nSorted list in ascending order:\n";
for (c=0;c<=n-1;c++)
{
cout<<arr[c]<<"\n";
}
getch();
}
