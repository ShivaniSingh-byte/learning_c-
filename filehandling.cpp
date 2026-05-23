#include<iostream>
#include<fstream>
using namespace std;
int main(){
    /*delete
    int value = remove("C:\\Users\\Dell\\OneDrive\\Desktop\\file1.txt");
    if (value == 0) {
        cout<<"File Deleted !!";
    }
    else {
        cout<<"File Not Deleted !!";
    }*/


    /*Copy
    ofstream onFile;
    ifstream inFile;
    char str;
    inFile.open("C:\\Users\\Dell\\OneDrive\\Desktop\\file.txt");
    onFile.open("C:\\Users\\Dell\\OneDrive\\Desktop\\file1.txt");
    while(inFile.get(str)){
        onFile.put(str);
    }
    cout<<"Copied !!";
    inFile.close();
    onFile.close();*/


    /*read
    ifstream inFile; string str;
    inFile.open("C:\\Users\\Dell\\OneDrive\\Desktop\\file.txt");
    while(getline(inFile,str)){
        cout<<str;
    }
    inFile.close();*/


    /*Write part
    ofstream onFile;
    onFile.open("C:\\Users\\Dell\\OneDrive\\Desktop\\file.txt");
    onFile<<"Hii file handling i am handling you :)";
    cout<<"data has been written in the file !!";
    onFile.close();*/


    /* File created
    ofstream onFile;
    onFile.open("C:\\Users\\Dell\\OneDrive\\Desktop\\file.txt");
    cout<<"File created !!";
    onFile.close();*/

}
