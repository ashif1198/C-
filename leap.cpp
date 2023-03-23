#include<iostream>
using namespace std;
 
int main()
{
 int year;
 cout << "Enter the year :"	<< endl;
 cin >> year;
 if(year % 400 == 0)
 {
 	cout << "Its a Leap year";
 }
 else if (year % 100 == 0)
 {
 	cout << "Its not a Leap year:";
 }
 else if (year%4==0)
 {
 	cout << "Its a leap yaer ";
 }
 else
 {
 	cout << "Its not a Leap Year";
 }
 } 
