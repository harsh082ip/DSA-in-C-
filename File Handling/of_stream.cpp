#include <fstream>
#include <iostream>
using namespace std;
int main() {
    // ofstream fout;
    // fout.open("file1.txt");
    // fout << "harsh";
    // fout.close();
    
    fstream file;
    file.open("file1.txt", ios::in);
    if(!file) {
        cout << "Error" << endl;
    }
    else{
        // cout << "No error"; 
        // file << "harsh";
        char x;
        while(1) {
            file >> x;
            if(file.eof()) {
                break;
            }
            cout << x;
        }
        file.close();
    }

    ifstream file1("file1.txt");
    string words;
    while(file1 >> words) {
        cout << words << endl;
    }

}