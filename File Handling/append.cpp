#include <fstream>
#include <iostream>
using namespace std;
int main() {

    
    fstream file;
    fstream newfile;
    int word = 0;
    file.open("file1.txt", ios::app | ios::out | ios ::in);
    if(!file) {
        cout << "Error" << endl;
    }
    else{
        file << " New Apppend";
        char x;
        while(1) {
            cout << "here"<< endl;
            file >> x;
            if(file.eof()) {
                break;
            }
            cout << x ;
        }
    }
    file.close();



}