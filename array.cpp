/*ARRAY :
    1. multiple data hold.
    2. similar type of data.
    3. fixed size.
    4. store data in sequence.
    5. indexing starts with 0.
    []--subscript operator.

    syntax :
        static type :
            datatype arrayname[]={1,2,3};
        dynamic type :
            datatype arrayname[4];

        types of array :
        1. one dimensions array : int arr[]
        2. two dimensions array : int arr[][]
        3. multi dimensions array : int arr[][][]*/

#include<iostream>
using namespace std;
int main(){
    //three dimensions array[][][]
    int arr[2][2][2]={
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                cout<<arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    /* two dimensions array : int arr[][]
    int s=sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<s<<endl;
    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }

        cout<<endl;
    }

    Remove duplicates from an array :
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

    multiple data :
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

    missing a no. in a series :
    int data[]={1,2,4,6,8};

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size-1; i++){
        int diff=data[i+1]-data[i];
        if(diff>1){
            cout<<data[i]+1;
        }
    }

     reverse an array :
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

    for(int i=0; i<size; i++){
        cout<<data[i];
    }

    smallest :
    int data[]={1,3,5,2,6,8,12};
    int min=data[0];

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(min>data[i]){
            min=data[i];
        }
    }
    cout<<min;

    largest no:
    int data[]={1,3,5,2,6,8,12};
    int max=data[0];

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        if(max<data[i]){
            max=data[i];
        }

    }
    cout<<max<<endl;

    sum of all no:
    int data[]={1,3,5,2,6,8};
    int sum=0;

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
          sum=sum+data[i];
    }
    cout<<sum;

    even no:
    int data[]={1,4,5,7,8,2,6,9};

    int size=sizeof(data)/sizeof(data[0]);
    for(int i=0; i<size; i++){
        if(data[i]%2==0){
            cout<<data[i];
        }
    }

    odd no:
    int data[]={1,4,5,7,8,2,6,9};

    int size=sizeof(data)/sizeof(data[0]);
    for(int i=0; i<size; i++){
        if(data[i]%2!=0){
            cout<<data[i];
        }
    }

    to take input and display elements of an array :
    int data_no;
    cout<<"Enter a no:";
    cin>>data_no;

    int data[data_no];

    for(int i=0; i<data_no; i++){
        cout<<"Enter data:";
        cin>>data[i];
    }

    int size=sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        cout<<data[i]<<endl;
    }

    delete : array me value delete nhi kar skte
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

    update :
    int data[]={1,3,5,6,7};

    int size = sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        data[i]=data[i]+5;
    }

    for(int i=0; i<size; i++){
        cout<<data[i]<<" ";
    }

    sizeof :
    int number_of_data;
    cout<<"Enter no. of data you want to enter :";
    cin>>number_of_data;

    int data[number_of_data];

    for(int i=0; i<number_of_data; i++){
        cout<<"Enter data :";
        cin>>data[i];
    }

    int size = sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        cout<<data[i]<<endl;
    }

    int data[]={2,5,7,3,75,45,64,46,42,42,78,33,54,63};

    int size = sizeof(data)/sizeof(data[0]);

    for(int i=0; i<size; i++){
        cout<<data[i]<<endl;
    }

    int data[10];
    int data[]={2,5,7,4};

    for(int i=0; i<=3; i++){
        cout<<data[i]<<endl;
    }*/

}
