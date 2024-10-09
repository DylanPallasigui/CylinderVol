// Author: Dylan Pallsigui
// Date: Feb 2, 2022
// Purpose: cryptocurrency purchase


// Include statements
#include <iostream>
using namespace std;

// Main function
int main()
{
   // Initialize variables
   float height;
   float radius;

   int height_percent;
   int radius_percent;


   // Print an output message
   cout << "What is the height of the cylinder?" << endl;
   cin >> height;
   cout << "The height is " << height << endl;

   cout << "what is the radius of the cylinder" << endl;
   cin >> radius;
   cout << "The radius is " << radius << endl;

   cout << "The cylinder's volume is " << 3.14 * radius * radius * height << endl;

   cout << "Increase height percentage by how much?" << endl;
   cin >> height_percent;
   float height_change = (height_percent / 100.0 * height + height);
   cout << "Height has increased to " << height_change << endl;

   cout << "Increase radius percentage by how much?" << endl;
   cin >> radius_percent;
   float radius_change = (radius_percent / 100.0 * radius + radius);
   cout << "radius has increased to " << radius_change << endl;

   cout << "The new cylinder's volume is " << 3.14 * radius_change * radius_change * height_change << endl;
}