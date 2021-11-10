#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  string FEP = "FUEL EFFICIENCY PROGRAM";
  string MT = "Miles Traveled";
  string GU = "Gas Used (Gallons)";
  string FEOC = "FUEL EFFICIENCY OF CAR ";
   
  
  double miles;
  double gallons;
  double mpg;
  
  miles = 420.5;
  gallons = 14.3;
  mpg = 29.4;
  
  cout << setiosflags(ios::right | ios::fixed | ios::showpoint);
  cout << FEP << endl;
  
  cout << "- - - - - - - - - - - -" << endl;
  
  cout << MT << setw(10) << ":" <<  setw(7) << setprecision(1) 
       << miles << endl;
       
  cout << GU << setw(6) << ":" <<  setw(7) << setprecision(1) 
       << gallons << endl;
       
  cout << endl;
  
  cout << FEOC << ":" <<  setw(7) << setprecision(1) << mpg
       << " mpg" << endl;

  
  return 0;
}
