#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double miles;
  double gallons;
  double mpg;
  
  miles = 420.5;
  gallons = 14.3;
  mpg = 29.4;
  
  cout << setiosflags(ios::right | ios::fixed | ios::showpoint);
  cout << "FUEL EFFICIENCY PROGRAM" << endl;
  
  cout << "- - - - - - - - - - - -" << endl;
  
  cout << "Miles Traveled" << setw(10) << ":" <<  setw(7) << setprecision(1) 
       << miles << endl;
       
  cout << "Gas Used (Gallons)" << setw(6) << ":" <<  setw(7) << setprecision(1) 
       << gallons << endl;
       
  cout << endl;
  
  cout << "FUEL EFFICIENCY OF CAR " << ":" <<  setw(7) << setprecision(1) << mpg
       << " mpg" << endl;

  
  return 0;
}
