// Write a program to write data to a file using ofstream class.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout;
    fout.open("sample.txt");
    string data="Hello File!";
    fout<<data;
    fout.close();
    return 0;
}