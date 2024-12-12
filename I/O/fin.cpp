// Write a program to read data from a file using ifstream class.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    fin.open("sample.txt");
    string data;
    while (!fin.eof()){
        getline(fin, data);
        cout<<data;
    }
    fin.close();
    return 0;
}