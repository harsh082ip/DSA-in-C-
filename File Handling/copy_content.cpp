#include <fstream>
#include <iostream>
using namespace std;
int main() {

    
    fstream file;
    fstream newfile;
    int word = 0;
    file.open("file1.txt", ios::in);
    if(!file) {
        cout << "Error" << endl;
    }
    else{
        newfile.open("copy.txt", ios::out);
        if(!newfile) {
            cout << "Cannot copy" << endl;
        }
        else{
        string line;

    while (getline(file, line)) {
        newfile << line << endl;
    }

        file.close();
        }
    }
    // cout << "Words: " << word << endl;



}