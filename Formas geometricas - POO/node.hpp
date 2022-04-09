#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "point.hpp"
#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "sphere.hpp"
#include "cube.hpp"
#include "tetrahedron.hpp"
#include "shapes3d.hpp"

using namespace std;

enum datatypes {tcircle, ttriangle, tsquare, tsphere, tcube, ttetrahedron };

class Node
{
private:
    void* m_data;
    datatypes m_type;

public:
    //constructors
    Node(Circle i)          : m_data(new Circle(i)),         m_type(tcircle) {};
    Node(Triangle i)        : m_data(new Triangle(i)),       m_type(ttriangle) {};
    Node(Square i)          : m_data(new Square(i)),         m_type(tsquare) {};
    Node(Sphere i)          : m_data(new Sphere(i)),         m_type(tsphere) {};
    Node(Cube i)            : m_data(new Cube(i)),           m_type(tcube) {};
    Node(Tetrahedron i)     : m_data(new Tetrahedron(i)),    m_type(ttetrahedron) {};

    ~Node() {};

    //setters

    //update()

    //getters
    void* getRawData(datatypes& type) const {
        type=m_type;
        return m_data;
    };
};
#endif
