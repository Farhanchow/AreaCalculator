// SIMPLE AREA CALCULATOR v2.0 ***v1.0
//Author: Farhan
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
// display the area calculator menu
// Simple Area Calculator Menu  <<<< options for the user       -
//     1. Calculate the area of a circle
//     2. Calculate the area of a rectangle
//     3. Quit to exit the program
void display_menu();
// function get_choice reads, validates and returns
// the user's choice
int get_menu_choice();
// function circle returns the area of a circle with radius

double circle(double r);
double rectangle(double l, double w);

// function is_positive returns false if k is strictly negative and true otherwise
bool is_positive(double k);

int main()
{
    int choice;
  do
    {display_menu();
  choice = get_menu_choice();
  double area = 0;  // holds the area of a geometry shape
  cout << fixed << showpoint << setprecision(5);
  switch (choice)
    {case 1: double radius; // radius of a circle
  cout << "Please Enter Radius of Circle: ";
  cin >> radius;
 while (!is_positive(radius))
{cout << "Please Enter a Non-negative Radius: ";
    cin >> radius; }
 area = circle(radius);
  cout << "Area of circle is: " << area << endl;
break;
   case 2: double length;
           double width;
   cout<< "Please Enter the length of rectangle"<<endl;
   cin>> length;
   cout<< "Please Enter the width of rectangle"<<endl;
   cin>> width;
   while (!is_positive(length))
   {
       cout<< "Enter a non-negative length";
       cin>> length;

   }
   while (!is_positive(width))
   {
       cout<< "Please Enter a non-negative width";
       cin>> width;

   }

   area = rectangle(length, width);

   cout<< "Area of rectangle is: " << area <<endl;

break;
 default:break;
 }
 }
 while (choice != 3);
cout << "Good bye...now. "<< endl;
 return 0;
 }
void display_menu()
{    cout << endl;
cout << "Simple Surface Area Claculator Menu v2.0" << endl;
cout << "-----------------------------------" << endl;
cout << " 1. Calculate the area of a circle" << endl;
cout << " 2. Calculate the area of a rectangle" << endl;
cout << " 3. Quit to exit the program" << endl;
cout << endl;
}
int get_menu_choice()
{  int choice;
cout << "Enter your selection (1, 2, or 3): ";
cin >> choice;
while(((choice < 1) || (choice > 3)) && (!cin.fail()))
 {   cout << "Try again (1, 2, or 3): ";
cin >> choice;
}
if (cin.fail())
 {       cout << "Error: exiting now ...come back soon" << endl;
 exit(EXIT_FAILURE);
 }
 return choice;
 }
double circle(double r)
{    const double pi = 3.14159;
     double area = pi * r * r;
     return (area);
     }
double rectangle (double l, double w)
{
    double area = l * w;
    return (area);
}
bool is_positive(double k)
{    if (k < 0) return false;
 return true;
 }
