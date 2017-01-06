#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //COUNT THE LOWER TRIANGLE TWICE!!!
    //TEST IF ONE TRIANGLE = 0 - ON BORDER; IF = AREA - IN TRIANGLE; IF > AREA - OUTSIDE TRIANGLE

    double shape;
    double radius;
    double xCircle;
    double yCircle;
    double length;
    double width;
    double xRectangle;
    double yRectangle;
    double side1;
    double side2;
    double side3;
    double xTriangle;
    double yTriangle;

    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;

    double sideA;
    double sideB;
    double sideC;
    double sideD;

    double side4;

    double rectLength;

    double s;
    double s1;
    double s2;
    double s3;
    double s4;
    double area;
    double area1;
    double area2;
    double area3;
    double area4;

    double total;

    double x;
    double y;
    double distance;

    cout << "Welcome to Fun with Geometry, part 1!!  First, pick a shape: " << endl;
    cout << "For Circle, enter 1. \n";
    cout << "For Rectangle, enter 2. \n";
    cout << "For Triangle, enter 3. \n";

    cin >> shape;

    if (shape == 1)
    {
        cout << "Enter the radius of the circle: \n";
        cin >> radius;
        cout << "Input the x-coordinate of the point in the center of the circle: \n";
        cin >> xCircle;
        cout << "Input the y-coordinate of the point in the center of the circle: \n";
        cin >> yCircle;

        cout << "Please enter a random x coordinate for a point in space: \n";
        cin >> x;
        cout << "Please enter a random y coordinate for a point in space: \n";
        cin >> y;


        distance = sqrt((x-xCircle)*(x-xCircle)+(y-yCircle)*(y-yCircle));

        if(distance > radius)
            cout << "Your point is on the outside of the shape. \n";
        else if (distance < radius)
            cout << "Your point is on the inside of the shape. \n";
        else
            cout << "Your point is on the border of the shape. \n";
    }

    else if (shape == 2)
    {
        cout << "Enter the x coordinate of the first point in the rectangle: ";
        cin >> x1;
        cout << "Enter the y coordinate of the first point in of the rectangle: ";
        cin >> y1;
        cout << "Enter the x coordinate of the second point in the rectangle: ";
        cin >> x2;
        cout << "Enter the y coordinate of the second point in of the rectangle: ";
        cin >> y2;
        cout << "Enter the x coordinate of the third point in of the rectangle: ";
        cin >> x3;
        cout << "Enter the y coordinate of the third point in the rectangle: ";
        cin >> y3;
        cout << "Enter the x coordinate of the fourth point in the rectangle: ";
        cin >> x4;
        cout << "Enter the y coordinate of the fourth point in the rectangle: ";
        cin >> y4;


        side1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

        side2 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

        side3 = sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));

        side4 = sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));


        area = side1 * side2;

        cout << endl;

        cout << area << endl;

        cout << endl;

        cout << "Please enter an x coordinate of a random point: ";
        cin >> x;
        cout << "Please enter the y coordinate of the point: ";
        cin >> y;

        sideA = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));

        sideB = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));

        sideC = sqrt((x3-x)*(x3-x)+(y3-y)*(y3-y));

        sideD = sqrt((x4-x)*(x4-x)+(y4-y)*(y4-y));


        s1 = (sideA + sideB + side1)/2;

        s2 = (sideC + sideB + side2)/2;

        s3 = (sideC + sideD + side3)/2;

        s4 = (sideA + sideD + side4)/2;


        area1 = sqrt(s1*(s1-sideA)*(s1-sideB)*(s1-side1));
        area2 = sqrt(s2*(s2-sideC)*(s2-sideB)*(s2-side2));
        area3 = sqrt(s3*(s3-sideC)*(s3-sideD)*(s3-side3));
        area4 = sqrt(s4*(s4-sideD)*(s4-sideA)*(s4-side4));





        if ((area1==0) or (area2 == 0) or (area3 == 0) or (area4 == 0))
            cout << "Your point is on the border of the Rectangle. \n";


        else if (fabs(total-area) <= .001)
            cout << "Your point is on the inside of the Rectangle. \n";

        else if (total > area)
            cout << "Your point is on the outside of the Rectangle. \n";



    }

    else
    {
        cout << "Enter in the x coordinate of the first point: ";
        cin >> x1;
        cout << "Enter in the y coordinate of the first point: ";
        cin >> y1;
        cout << "Enter in the x coordinate of the second point: ";
        cin >> x2;
        cout << "Enter in the y coordinate of the second point: ";
        cin >> y2;
        cout << "Enter in the x coordinate of the third point: ";
        cin >> x3;
        cout << "Enter in the y coordinate of the third point: ";
        cin >> y3;


        side1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

        side2 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

        side3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

        s = (side1 + side2 + side3)/2;

        area = sqrt(s*(s-side1)*(s-side2)*(s-side3));



        cout << "Please enter an x coordinate to a random point: ";
        cin >> x;
        cout << "Please enter the y coordinate of the point: ";
        cin >> y;

        cout << endl;





        sideA = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));

        sideB = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));

        sideC = sqrt((x3-x)*(x3-x)+(y3-y)*(y3-y));

        s2 = (sideB + sideA + side1)/2;
        s3 = (sideC + sideA + side3)/2;
        s4 = (sideB + sideC+ side2)/2;

        area2 = sqrt(s2*(s2-sideB)*(s2-sideA)*(s2-side1));
        area3 = sqrt(s3*(s3-sideC)*(s3-sideA)*(s3-side3));
        area4 = sqrt(s4*(s4-sideB)*(s4-sideC)*(s4-side2));

        total = area2 + area3 + area4;


        if ((area2 == 0) or (area3 == 0) or (area4 == 0))
            cout << "Your point is on the border of the Triangle. \n";


        else if (fabs(total-area) <= .001)
            cout << "Your point is on the inside of the Triangle. \n";

        else if (total > area)
            cout << "Your point is on the outside of the Triangle. \n";


    }

}
