#ifndef BACKENDITEM_HPP
#define BACKENDITEM_HPP

#include <vector>
#include "Geometry.hpp"
#include "Physics.hpp"
#include "Point.hpp"

using namespace std;

class BackendItem {
    public:
        Geometry geometry_;
        Physics physics_;
    
        BackendItem(Geometry, Physics);
        Point getNormal(void);
        Point getIntersection(Ray);
        vector<RaySegment> newSegment(Ray, Point, Point);

};

#endif
