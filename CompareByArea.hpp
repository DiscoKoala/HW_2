/********************************************
 * Comparator class declarations and definition.
 * Compares area.
 * Used in findMax template in main.cpp.
 * Inheritance from base rectangle class.
 *
 * Author: Wesley Johnson
 * Version: 02/20/2022
 *********************************************/

#ifndef AREA
#define AREA

#include "Rectangle.hpp"

class CompareByArea: public Rectangle {
    public:
    bool isLessThan(Rectangle rectangle, Rectangle  _rectangle){
        return (rectangle.getArea() < _rectangle.getArea());
    };
};

#endif