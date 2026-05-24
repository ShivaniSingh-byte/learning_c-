#include<iostream>
using namespace std;
/* EXCEPTION : IT IS USED TO AVOID THE ABNORMAL CONDITIONS / PROCESS.   ... - elif datatype
EXCEPTION HANDLERS : TRY , THROW , CATCH. */
int main(){
    int n=100;
    int v;
    cout<<"Enter a value and it is divide by 100 : ";
    cin>>v;
    try{
        if(v==0){
            throw "bad";
        }
        cout<<n/v<<endl;
    }
    catch (...){
        cout<<"server down";
    }
   /* catch(int i){
        cout<<"denominator should not be zero."<<endl;
    }
    catch(double i){
        cout<<"float value not allowed."<<endl;
    }
    catch(const char *e){
        cout<<"string not allowed."<<endl;
    } */
    cout<<"Successfully completed";

}
