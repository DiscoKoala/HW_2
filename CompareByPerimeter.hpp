/********************************************
 * Comparator class declarations and definition.
 * Compares perimeter.
 * Used in findMax template in main.cpp.
 * Inheritance from base rectangle class.
 *
 * Author: Wesley Johnson
 * Version: 02/20/2022
 *********************************************/

#ifndef PERIMETER
#define PERIMETER

#include "Rectangle.hpp"

class CompareByPerimeter {
    public:
    bool isLessThan(Rectangle rectangle, Rectangle _rectangle){
            return (rectangle.getPerimeter() < _rectangle.getPerimeter());
        };
};

#endif