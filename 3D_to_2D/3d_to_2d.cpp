#include <iostream>
#include <cmath>

using namespace std;

struct Point3D
{
    double x, y, z;
};

struct PointD
{
    double x, y;
};

Point2D projectTo2D(const Point3D& point3D)
{
    //assuming perspective projection with a focal length of 1
    double z = point3D.z;
    Point2D point2D;
    point2D.x = point3D.x / z;
    point2D.y = point3D.y / z;
    return point2D;
};

int main()
{
    Point3D point3D = {1.0, 2.0, 3.0};
    Point2D point2D = projectTo2D(point3D);

    cout << "3D point: (" << point3D.x << ", " << point3D.y << ", " << point3D.z << ")" << endl;
    cout << "2D point: (" << point2D.x << ", " << point2D.y << ")" << endl;

    return 0;
};
