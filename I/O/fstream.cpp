// Write a program to write lines and read themusing fstrem class.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;
    file.open("sample.txt", ios::out);
    if (!file){
        cout<<"Error in creating file!"<<endl;
        return 0;
    }
    cout<<"File created!"<<endl;
    file<<"Line 1"<<endl;
    file<<"Line 2"<<endl;
    file<<"Line 3"<<endl;
    file.close();
    file.open("sample.txt", ios::in);
    string data;
    while (!file.eof()){
        getline(file, data);
        cout<<data<<endl;
    }
    file.close();
    file.open("sample.txt", ios::app);
    file<<"Line 4"<<endl;
    file.close();
    return 0;
}