#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Parallelogram.h"


#include <iostream>
using namespace std;


int main()
{
    cout << "Hello Worldjn";
    cout << "Hello Worldjn";
    cout << "Hello Worldjn";


    int v;
    cout << "1. Rectangle\n2. Triangle\n3. Circle\n4. Square\n5. Paralelogram\n--> ";
    cin >> v;
    Figure* ptr = nullptr;

    switch (v)
    {
    case 1:
        ptr = new Rectangle();
        ptr->SetDimension(10, 5);
        break;
    case 2:
        ptr = new Triangle();
        ptr->SetDimension(10, 15);
        break;

    case 3:
        ptr = new Circle();
        ptr->SetDimension(10);
        break;
    case 4:
        ptr = new Square();
        ptr->SetDimension(10);
        break;
    case 5:
        ptr = new Parallelogram(1,2,4);
        break;
    default:
        break;
    }

    ptr->ShowArea();
    delete ptr;


    return 0;
}