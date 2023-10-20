#include <iostream>

#include <fstream>

#include <string>

#include <sstream>

int main() {
  std::ifstream inputFile("file1.txt"); // Open the text file

  if (inputFile.is_open()) {
    std::string line;
    int wordCount = 0;

    while (std::getline(inputFile, line)) {
      std::stringstream ss(line);
      std::string word;

      while (ss >> word) {
        wordCount++;
      }
    }

    inputFile.close();

    std::cout << "Number of words in the said file: " << wordCount << std::endl;
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }

  return 0;
}

// #include <fstream>
// #include <iostream>
// using namespace std;
// int main() {
//     // ofstream fout;
//     // fout.open("file1.txt");
//     // fout << "harsh";
//     // fout.close();
    
//     fstream file;
//     int word = 0;
//     file.open("file1.txt", ios::in);
//     if(!file) {
//         cout << "Error" << endl;
//     }
//     else{
//         // cout << "No error"; 
//         // file << "harsh";
//         char x;
//         while(1) {
//             file >> x;
            
//             if(file.eof()) {
//                 break;
//             }
//             word++;
//             // cout << x;
//         }
//         file.close();
//     }
//     cout << "Words: " << word << endl;



// }