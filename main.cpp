/********************************************
 * Instantiates 10 Rectangle objects with random integers from 0 - 50
 * Initialize vector of Rectangle with instantiated Rectangle objects.
 *
 * Author: Wesley Johnson
 * Version: 02/20/2022
 *********************************************/

#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Rectangle.hpp"
#include "CompareByArea.hpp"
#include "CompareByPerimeter.hpp"

// findMax template
template<typename Object, typename Comparator>
const Object & findMax(const std::vector<Object> & rectangles, Comparator & cmp) {
    int MAX = 0;

    for(int i = 1; i < rectangles.size(); i++) {
        if(cmp.isLessThan(rectangles[MAX], rectangles[i])) {
            MAX = i;
        };
    };
    return rectangles[MAX];
};

int main(){
    
    // Seeding random
    srand(time(NULL));

    // Comparator class objects.
    CompareByArea cmp_;
    CompareByPerimeter _cmp;

    // Instantiating 10 objects with random length & with values
    Rectangle r0(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 0"),
              r1(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 1"),
              r2(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 2"),
              r3(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 3"),
              r4(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 4"),
              r5(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 5"),
              r6(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 6"),
              r7(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 7"),
              r8(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 8"),
              r9(rand() % 51 + 1, rand() % 51 + 1, "Rectangle 9");
    
    // Creating vector for rectangle objects and initializing with instantiated objects.
    std::vector<Rectangle> rectangles = {r0,r1,r2,r3,r4,r5,r6,r7,r8,r9};

    // Displaying rectangles with given lengths and heights.
    // One rectangle per line.
    for( int i = 0; i < rectangles.size(); i++){
        std::cout << rectangles[i] << ": Length = " << rectangles[i].getLength()<< ", Width = " << rectangles[i].getWidth() << std::endl; 
    };

    // Initializing results in new objects for ease of display.
    Rectangle area = findMax(rectangles, cmp_);
    Rectangle perimeter = findMax(rectangles, _cmp);
    
    std::cout << "Largest rectangle by area: " << area << ". With an area of: " << area.getArea() << std::endl;

    std::cout << "Largest rectangle by perimeter: " << perimeter << ". With a perimeter of: " << perimeter.getPerimeter() << std::endl;

};



