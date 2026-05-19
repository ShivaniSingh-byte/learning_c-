#include<iostream>
using namespace std;
int main(){
    /* Single Dimension Array : text file
    syntax :
        datatype arrayname[size]; */

        /*int a;
        cout<<sizeof(a)<<endl;
        int aa[3];
        cout<<sizeof(aa);*/

    /*Two Dimension Array : image file
    first loop - row
    second loop - column*/
    /*int arr[2][3]={1,2,3,4,5,6};
    for(int r=0; r<2; r++){
        for(int c=0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }*/

    //Three Dimension Array : means video file . it represents no of copies
    /*int arr[2][2][3]={1,2,3,4,5,6,1,2,3,4,5,6};
    for(int t=0; t<2; t++){     //table ke liye
        for(int r=0; r<2; r++){  //row ke liye
            for(int c=0; c<3; c++){  //column ke liye
                cout<<arr[t][r][c]<<"\t";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }*/

    /* int a[3];     // ram me 0 indexing ka memory address jo provide hua hn..
    a[0]=800;
    a[1]=600;
    a[2]=400;
    cout<<a; */

    /*int a=23;      //memory address
    a=90;
    cout<<a<<endl;
    cout<<&a;*/

    //SINGLE DIMENSIONAL ARRAY :
    /*int arr[5];
    arr[0]=24;
    arr[1]=89;
    arr[2]=34;
    arr[3]=65;
    arr[4]=87;
    cout<<arr[2];
    cout<<arr[5];*/

    /*updated value
    int arr[5];
    arr[0]=24;
    arr[1]=89;
    arr[2]=34;
    arr[3]=65;
    arr[4]=87;
    //updation
    arr[3]=arr[3]+10;
    //not updated
    cout<<arr[3]+10<<endl;
    cout<<arr[3];*/

    /*sum:
    int arr[5];
    arr[0]=24;
    arr[1]=89;
    arr[2]=34;
    arr[3]=65;
    arr[4]=87;
    cout<<arr[1]+arr[2];*/

    // STATIC INITIALISATION :
    /* 1st way :
    int arr[5];
    arr[0]=45;
    cout<<arr[2];*/

    /*  2nd way :
    int arr[]={1,5,6,76,5,9,4};
    cout<<arr[2];*/

    /* 3rd way :
    int arr[2]={1,2};
    cout<<arr[0];*/

    //DYNAMIC INITIALISATION
    /*int subject[3];
    //input :
    for(int i=0; i<3; i++){
        cout<<"enter value for "<<i<<" position : ";
        cin>>subject[i];
    }
    //output :
    cout<<"Value of Array : ";
    for(int i=0; i<3; i++){
        cout<<subject[i]<<" ";
    }*/

    /*int subject[]={10,20,30};  //value increase krenge but vo size prr depend h..
    //input :
    for(int i=0; i<=2; i++){
        cout<<subject[i]<<" ";
    }*/

    /*int subject[]={10,20,30,40,50};
    int len=sizeof(subject)/sizeof(subject[0]);
    cout<<len<<endl;;
    for(int i=0; i<len; i++){
        cout<<"enter value for "<<i<<" position : ";
        cin>>subject[i];
    }
    cout<<"Value of Array : ";
    for(int i=0; i<len; i++){
        cout<<subject[i]<<" ";
    }*/

    ///write a program to count the length of the array
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    for (int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }*/

    /// write a program to print only even no in given array..
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    for(int i=0; i<s; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }*/

    /// write a program to print only odd no in given array..
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    for(int i=0; i<s; i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }*/

    ///write a program to print square of every no of an array
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]*arr[i]<<" ";
    }*/

    ///write a program to print cube of every no of an array
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]*arr[i]*arr[i]<<" ";
    }*/

    ///write a program to print the sum of an array
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    int sum=0;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        sum=sum+arr[i];
    }
    cout<<sum;*/

    ///write a program to print max value of an array
    /*int arr[]={14,27,83,49,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    int maxs=arr[0];
    for(int i=0; i<s; i++){
        if(maxs<arr[i]) {
            maxs=arr[i];
        }
    }
    cout<<maxs;*/

    ///write a program to print min value of an array
    /*int arr[]={14,27,83,9,85,66,79,80};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    int mins=arr[0];
    for (int i=0; i<s; i++){
        if(mins>arr[i]){
            mins=arr[i];
        }
    }
    cout<<mins;*/

    ///write a program to print the sum of odd no... in an array
    /*int arr[]={2,9,6,7};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<s; i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
    }
    cout<<sum;*/

    ///write a program to print the sum of even no... in an array
    /*int arr[]={2,9,6,7};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<s; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    cout<<sum;*/

    ///write a program to print (by default) ascending order....
    ///bubble ,selection ,insertion ,quick ,merge sort (two optimisation - time complexity & space complexity)
    /*int arr[]={9,5,10,12,6};
    int s,temp;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        for(int j=i+1; j<s; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted Ascending Array :";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }*/

    ///write a program to print descending order....
    /*int arr[]={9,5,10,12,6};
    int s,temp;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        for(int j=i+1; j<s; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted Descending Array : ";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }*/

    /*int a=10;
    int b=9;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;*/

    ///BUBBLE SORT ALGORITHM
    ///answer always come in ascending order.
    ///we know the time complexity and space complexity.
    ///asymptotic notation(symbol) : it is used to measure the time and space complexity is called asymptotic notation unit..
    ///notation means change the meaning of the statement.
    ///there are three units of asymptotic notation :
    ///1.BIG O - WORST CONDITION
    ///2.THETA - AVERAGE CONDITION
    ///3.OMEGA - BEST CONDITION

    ///dynamic input :
    /*int s;
    cout<<"Enter size of array :";
    cin>>s;
    int arr[s];
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter "<<s<<" value :";
    for(int i=0; i<len; i++){
        cin>>arr[i];
    }
    cout<<"original array : "<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }*/

    ///sorting : o(n2)
    /*int c=0;
    int s;
    cout<<"Enter size of array :";
    cin>>s;
    int temp;
    int arr[s];
    //int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter "<<s<<" value :";
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }
    cout<<"original array : "<<endl;
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"sorted array : "<<endl;
    for(int i=0; i<s; i++){
       for(int j=0; j<s-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            c++;
       }
    }
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"no of iteration :"<<c;*/

    ///bubble shot program :
    /*int c=0; //counter variable
    int s;  //size of array
    int flag;  //flag variable : for termination
    cout<<"Enter size of array :";
    cin>>s;
    int temp;  //for swapping
    int arr[s];
    //int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter "<<s<<" value :";
    for(int i=0; i<s; i++){ //to get the input
        cin>>arr[i];
    }
    cout<<"original array : "<<endl;
    for(int i=0; i<s; i++){ //to display the output of an given array
        cout<<arr[i]<<endl;
    }
    cout<<"sorted array : "<<endl;
    for(int i=0; i<s; i++){
        flag=0;
       for(int j=0; j<s-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag++;
            }
            c++;
       }
       if(flag==0){
            break;
       }
    }
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nno of iteration :"<<c;*/

    ///big O :worst case me bhi code execute ho jayega
    ///time complexity - O(n)/O(n-1) 1 is nullify or constant
    ///space complexity - O(1)/constant space {a[10]}
    ///stable - variable swap krne me apni RHS se LHS me shift hoga..
    ///{5,2,3,1,4} - no {1,2,3,4,5} - yes
    ///inplace is dependent on space complexity - when we create a copy of an array and the result is no
    ///big O - worst case - O(n) [theta - average case ,omega - best case]
    ///code is optimized - yes or no

}
