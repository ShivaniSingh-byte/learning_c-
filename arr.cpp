#include<iostream>
using namespace std;
int main(){

    Descending order :
    int n;
    cout<<"Enter size :";
    cin>>n;

    int arr[n];
    cout<<"Enter elements :";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Descending order :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    /*ascending order :
    int n;
    cout<<"Enter size :";
    cin>>n;

    int arr[n];
    cout<<"Enter elements :";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Ascending order :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    array

    13. update +5:
    int data[]={1,3,5,6,7};

    int size = sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        data[i]=data[i]+5;
    }

    for(int i=0; i<size; i++){
        cout<<data[i]<<" ";
    }

    12. delete : array me value delete nhi kar skte
    int data[]={1,3,5,6,7};
    int value;
    cout<<"Enter a value to remove :";
    cin>>value;

    int size = sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(data[i]==value){
            data[i]=0;
        }
    }

    for(int i=0; i<size; i++){
        cout<<data[i]<<" ";
    }

    11. reverse an array :
    int data[]={3,5,6,8,7};
    int size=sizeof(data)/sizeof(data[0]);
    int i=0;
    int j=size-1;

    while(i!=j){
        int temp;
        temp=data[i];
        data[i]=data[j];
        data[j]=temp;
        i++;
        j--;
    }

    10. missing a no. in a series :
    int data[]={1,2,4,6,8};

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size-1; i++){
        int diff=data[i+1]-data[i];
        if(diff>1){
            cout<<data[i]+1;
        }
    }

    9. multiple data :
    int data[]={1,8,12,14};

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size-1; i++){
        int diff=data[i+1]-data[i];
        if(diff>1){
            for( int a=data[i]+1; a<data[i+1]; a++){
                cout<<a<<" ";
            }
        }
    }

    8. Remove duplicates from an array :
    int arr[]={1,2,1 ,2,3,1};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
            }
        }
        if(arr[i]!=-1){
            }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }

    5. WAP to add 5 to each element.
    int data[]={1,3,2,6,7};

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        data[i]=data[i]+5;
    }

    for(int i=0; i<size; i++){
        cout<<data[i];
    }

    7. WAP to print only odd number.
    int data[]={1,2,4,3,5,9,8,7};

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(data[i]%2!=0){
            cout<<data[i];
        }
    }

    6. WAP to print only even number.
    int data[]={1,6,3,2,4,6,7};

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(data[i]%2==0){
            cout<<data[i];
        }
    }

    4. WAP to sum of all element in an array.
    int data[]={1,2,5,7,8};
    int sum=0;

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0;i<size; i++){
        sum=sum+data[i];
    }
    cout<<sum;

    3. Find the smallest elements in an array.
    int data[]={2,4,6,3,1};
    int min=data[0];

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(min>data[i]){
            min=data[i];
        }
    }
    cout<<min<<endl;

    2. Find the largest elements in an array.
    int data[]={1,5,7,3,9};
    int max=data[0];

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(max<data[i]){
            max=data[i];
        }
    }
    cout<<max<<endl;

    1. Write a program to take input and display elements of an array.
    int data_no;
    cout<<"Enter a no:";
    cin>>data_no;

    int data[data_no];

    for(int i=0; i<data_no; i++){
        cout<<"Enter data";
        cin>>data[i];
    }

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        cout<<data[i]<<endl;
    }*/
}
