#include "Rectangle.h"

int main()
{
    Rectangle r1;
    Rectangle r2;

    r1.setWidth(5.0);
    r1.setLength(10.0);

    r2.setWidth(3.0);
    r2.setLength(9.3);

    cout << "r1 area is: " << r1.getArea() << endl;
    cout << "r2 area is: " << r2.getArea() << endl;

    return 0;
}
