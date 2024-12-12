// Write a program to check if a file exists or not. If it does not exist, create a new file, if it exists, ask user to create it with a new name.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    fin.open("sample.txt");
    if (fin){
        cout<<"File exists!"<<endl;
        cout<<"Do you want to create a new file with a new name? (y/n): ";
        char ch;
        cin>>ch;
        if (ch=='y'){
            string new_file;
            cout<<"Enter new file name: ";
            cin>>new_file;
            ofstream fout;
            fout.open(new_file);
            cout<<"New file created!"<<endl;
            fout.close();
        }
    }
    else{
        ofstream fout;
        fout.open("sample.txt");
        cout<<"New file created!"<<endl;
        fout.close();
    }
    fin.close();
    return 0;
}