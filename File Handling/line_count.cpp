#include <fstream>
#include <iostream>
using namespace std;
int main() {


    ifstream file1("file1.txt");
    string line = "";
    int lineCount = 0;
    while(file1.is_open()) {
        
        
        while(getline(file1, line)) {
            lineCount++;
        }
        file1.close();
    }
    cout << "No of lines: " << lineCount << endl;

}