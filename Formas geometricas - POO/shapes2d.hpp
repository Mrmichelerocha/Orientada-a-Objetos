#ifndef SHAPES2D_H
#define SHAPES2D_H

#define vrs 0

#include <iostream>
#include <vector>
#include "shapes.hpp"
#include "point.hpp"

using namespace std;

class Shapes2D : public Shapes
{
private:

protected:
    vector<Point2d> m_positioning;

public:
    Shapes2D() : m_positioning(0)
    {
      if(vrs)cout << "I'm a shape2D constructor...." << endl;
      m_positioning.push_back(Point2d(0,0));
    };
    ~Shapes2D() { if(vrs)cout << "I'm a shape2D desconstructor" << endl; };

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
