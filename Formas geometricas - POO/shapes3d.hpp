#ifndef SHAPES3D_H
#define SHAPES3D_H

#define vrs 0

#include <iostream>
#include "shapes.hpp"
#include "shapes2d.hpp"
#include "point.hpp"

using namespace std;

class Shapes3D : public Shapes
{
private:

protected:
    vector<Point3d> m_positioning;

public:
    Shapes3D() : m_positioning(0)
    {
      if(vrs)cout << "I'm a shape3D constructor...." << endl;
        m_positioning.push_back(Point3d(0,0,0));
    };
    ~Shapes3D() { if(vrs)cout << "I'm a shape3D desconstructor" << endl; };

    void GetInfo()
    {
      for (size_t i = 0; i < m_positioning.size(); i++)
      {
        cout << "Shapes2D: pos.x = "
        << m_positioning.at(i).GetX()
        << " pos.y = " << m_positioning.at(i).GetY()
        << " Area: " << m_area << endl;
      }
    }
};

#endif
