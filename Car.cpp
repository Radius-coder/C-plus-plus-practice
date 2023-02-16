#include <iostream>
#include <string>
using namespace std;


class Car{
  public:   
      string brand;
      string mode;
      int year;

      void printDetails(){
          cout << brand << " " << mode << " " << year;
      }
};

int main() {

      Car Mercedes;
   
    Mercedes.brand = "Merc";
    Mercedes.mode = "AMG";
    Mercedes.year = 2019;
 
   
    Mercedes.printDetails();
   
   return 0;
}
