#include<iostream>
using namespace std;
int C1(int z);
int B1(int y);
void A1(int x){
    cout<<"A1 = "<<x<<"\n";
    B1(x);
}
B1(int y){
    cout<<"B1 = "<<y<<"\n";
    C1(y);
}
C1(int z){
    cout<<"C1 = "<<z<<"\n";
    return 0;
}
int main(){
    A1(8);

}
