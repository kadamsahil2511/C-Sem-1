// Write a progam to append data in a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    string filename = "sample.txt";
    fstream file(filename, ios::app | ios::out);
    if (!file.is_open()){
        cout<<"Error in opening file!"<<endl;
        return 1;
    }
    file << "This is a new line." << endl;
    file.close();
    ifstream readfile(filename);
    if (!readfile.is_open()){
        cout<<"file not found!"<<endl;
        return 1;
    }
    string line;
    while (getline(readfile, line)){
        cout<<line<<endl;
    }
    readfile.close();
    return 0;       
}