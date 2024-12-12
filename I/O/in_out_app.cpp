// Write a program to read and write data in a file simultaneously.
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file;
    file.open("sample.txt", ios::in | ios::out | ios::app);
    if (!file){
        cout<<"Error in creating file!"<<endl;
        return 0;
    }
    cout<<"File created!"<<endl;
    file << "Line 1" << endl;
    file << "Line 2" << endl;
    file << "Line 3" << endl;
    file.seekg(0);
    string data;
    while (!file.eof()){
        getline(file, data);
        cout << data << endl;
    }
    file.clear(); // Clear the EOF flag
    file.seekp(0, ios::end); // Move the write pointer to the end of the file
    file << "Line 4" << endl;
    file << "Line 5" << endl;
    file << "Line 6" << endl;
    file.close();
    return 0;
}