#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int getdata(){
         cin>>a;
         if(a % 2 == 0) {
            return 1;
            
         }
         else {
            return -1;
         }
    }   
};
int main(){
    A obj;
   while(true) {
     try{
        int a = obj.getdata();
       if (a < 0) {
         throw 'B';
       }
       else {
        break;
       }
      
    }
    catch(char a){
         cout << "odd No found "<<a <<endl;
    }
     catch (...) {
        cout << "Default " <<endl;
       }
   }
 }
