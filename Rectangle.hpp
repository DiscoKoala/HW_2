/*************************************************************************************************************
 * Rectangle class containing basic class attributes and behaviors. Overloaded operator for object comparison.
 * Comparator classes for comparing rectangle objects by area and perimeter.
 *
 * Author: Wesley Johnson
 * Version: 02/20/2022
 *************************************************************************************************************/

#ifndef RECTANGLE
#define RECTANGLE

class Rectangle {

    private:
        int length, width;
        std::string obj_name;

    public: 
        // Constructors
        Rectangle();
        Rectangle (int _length, int _width, std::string _name);

        // Getters
        int getLength();
        int getWidth();
        int getArea();
        int getPerimeter();
        std::string getName();

        // Some attempt to overload Less Than operator.
        bool operator < (Rectangle& comp) {
            
            if(getArea() < comp.getArea()){
                return true;
            };
            return false;
        }; 
        // Overloaded output operator for displaying object names.
        // Used in main.cpp
        friend std::ostream &operator << (std::ostream &output, Rectangle & _rectangle){
            output  << _rectangle.getName();
            return output;
        };
};
#endif