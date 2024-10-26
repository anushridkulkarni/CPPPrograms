/*Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h.

The default constructor of the class should initialize l, b, and h to 0.

The parameterized constructor Box(int length l, int breadth b, int height h) should initialize Box’s l, b and h to length, breadth and height.

The copy constructor Box (Box  B) should set l , b and h to B’s l , b and h, respectively.

Apart from the above, the class should have 4 functions:

int getLength() – Return box’s length

int getBreadth() – Return box’s breadth

int getHeight() – Return box’s height

long long CalculateVolume() – Return the volume of the box

Overload the operator < for the class Box. Box A < Box B if:

A.l < B.l

A.b < B.b and A.l == B.l

A.h < B.h and A.b == B.b and A.l == B.l

Overload operator << for the class Box().

If B is an object of class Box:


 cout << B should print B.l, B.b and B.h on a single line separated by spaces.\ */

 

#include <iostream>
using namespace std;
class box
{
    int length;
    int breadth;
    int height;

public:
    box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    box(box &b)
    {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int getheight()
    {
        return height;
    }
    long long calculatevolume()
    {
        long long volume = length * breadth * height;
        return volume;
    }
};
main()
{
    box b1;

    cout << " B1 Dimesions " << endl;
    cout << "b1 length = " << b1.getlength() << " ";
    cout << "b1 breadth = " << b1.getbreadth() << " ";
    cout << "b1 height = " << b1.getheight() << " ";
    cout << "b1 volume = " << b1.calculatevolume() << endl;

    box b2(4, 5, 6);

    cout << "B2 Dimesions " << endl;
    cout << "b2 length = " << b2.getlength() << " ";
    cout << "b2 breadth = " << b2.getbreadth() << " ";
    cout << "b2 height = " << b2.getheight() << " ";
    cout << "b2 volume = " << b2.calculatevolume() << endl;

    box b3(b2);

    cout << "B3 Dimesions " << endl;
    cout << "b3 length = " << b3.getlength() << " ";
    cout << "b3 breadth = " << b3.getbreadth() << " ";
    cout << "b3 height = " << b3.getheight() << " ";
    cout << "b3 volume = " << b3.calculatevolume() << endl;
}
