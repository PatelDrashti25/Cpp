/* Solve:
Create a function (Hint: make it a friemd function ) which takes 2 points
objects and computes the distance between those 2 points
*/

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    friend void Distance(Point, Point);

public:
    int x, y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

void distance(Point p1, Point p2)
{
    int x_diff = (p2.x - p1.x);
    int y_diff = (p2.y - p2.y);
    int diff = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The difference is: " << diff << endl;
}

int main()
{
    Point p(1, 2);
    Point q(4, 6);

    Point c(1, 1);
    Point d(1, 1);

    distance(p, q);
    distance(c, d);

   
