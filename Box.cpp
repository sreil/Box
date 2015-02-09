#include <iostream>
#include "Box.hpp"
#include <cmath>

using namespace std;


int main()
{
    Box box;
    double boxHeight, boxWidth, boxLength;

    cout << "This program will tell you the surface area and volume of a box" << endl;
    cout << "Please enter the height " << endl;
    cin >> boxHeight;
    cout << "Please enter the width " << endl;
    cin >> boxWidth;
    cout << "Please enter the length" << endl;
    cin >> boxLength;

    box.setHeight(boxHeight);
    box.setWidth(boxWidth);
    box.setLength(boxLength);

    cout << "The surface area is " << box.getSurfaceArea() << endl; //calls surface area function and prints
    cout << "The volume is " << box.getVolume() << endl; //calls volume function and prints

    return 0;
}

void Box::setHeight(double height){
    if(Height< 0)
        cout << "Error.  Must enter a positive number " << endl; //checks for negatives
    else
        Height = height;
    }


void Box::setLength(double length){
   if(Length< 0)
        cout << "Error.  Must enter a positive number " << endl;
    else
        Length = length;
    }


void Box::setWidth(double width){
   if(Width< 0)
        cout << "Error.  Must enter a positive number " << endl;
    else
        Width = width;
    }


double Box::getSurfaceArea(){

    return 2*(Length*Width) + 2*(Length*Height) + 2*(Width + Height); //surface area algorithm
}

double Box::getVolume(){

    return Length*Width*Height; //volume algorithm
}
