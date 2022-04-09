#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "sphere.hpp"
#include "cube.hpp"
#include "tetrahedron.hpp"
#include "shapes.hpp"
#include "shapes2d.hpp"
#include "shapes3d.hpp"
#include "node.hpp"
#include <vector>

int main()
{
  
    Node d(Circle(11.5));
    Node e(Triangle(Point2d(2.5,2.5), Point2d(12.1,0), Point2d(7,7.5)));
    Node f(Square(6.6));
    Node g(Sphere(15));
    Node h(Tetrahedron(Point3d(2.5,2.5,0), Point3d(12.1,0,0), Point3d(7,7.5,0), Point3d(5,5,10)));
    Node i(Cube(6));

    vector< Node > listofstuffs;
    listofstuffs.push_back(d);
    listofstuffs.push_back(e);
    listofstuffs.push_back(f);
    listofstuffs.push_back(g);
    listofstuffs.push_back(h);
    listofstuffs.push_back(i);


    for(size_t i=0; i<listofstuffs.size(); i++)
    {
      datatypes type;
      void* rawdata = listofstuffs.at(i).getRawData(type);

      if(type == tcircle)
      {
        ((Circle*)rawdata)->GetInfo();
        // cout << "Node: x: " << ((Point2d*)rawdata)->GetX() << " y: " << ((Point2d*)rawdata)->GetY()
        // << " Area: "<< ((Shapes*)rawdata)->GetArea() << ", Type: tpoint2d, Shapes: Circle" << endl;
        continue;
      }
      if(type == ttriangle)
      {
        ((Triangle*)rawdata)->GetInfo();
        continue;
      }
      if(type == tsquare)
      {
        ((Square*)rawdata)->GetInfo();
        continue;
      }
      if(type == tsphere)
      {
        ((Sphere*)rawdata)->GetInfo();
        continue;
      }
      if(type == ttetrahedron)
      {
        ((Tetrahedron*)rawdata)->GetInfo();
        continue;
      }
      if(type == tcube)
      {
        ((Cube*)rawdata)->GetInfo();
        continue;
      }
    }

    return 0;
}
