/********************************************
 * Definitions for class methods in Rectangle.hpp
 *
 * Author: Wesley Johnson
 * Version: 02/20/2022
 *********************************************/

#include <iomanip>
#include <iostream>
#include <vector>

#include "Rectangle.hpp"

// Default constructor
Rectangle::Rectangle(){
    length = 0;
    width = 0;
};

// Constructor to initiate length, width, and given name.
Rectangle::Rectangle(int _length, int _width, std::string _name){
    length = _length;
    width = _width;
    obj_name = _name;
};

int Rectangle::getLength(){
    return length;
};

int Rectangle::getWidth(){
    return width;
};

// Gettin that area
int Rectangle::getArea(){
    return (length * width);
};

// Gettin that dank perimeter
int Rectangle::getPerimeter(){
    return ((2*length) + (2*width));
};

// Returning object name
std::string Rectangle::getName(){
    return obj_name;
};

// Additional operator overload for perimeter comparison.
// Not sure if entirely necessary.
bool operator < (Rectangle& comp, Rectangle& _comp) {
    
    if(comp.getPerimeter() < _comp.getPerimeter()){
        return true;
    };
    return false;
}; 

