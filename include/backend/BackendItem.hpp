#ifndef BACKENDITEM_HPP
#define BACKENDITEM_HPP

#include <vector>
#include "Geometry.hpp"
#include "Physics.hpp"

using namespace std;

class BackendItem {
    public:
        Geometry geometry_;
        Physics physics_;
    
        BackendItem(Geometry, Physics);
        vector<double> getNormal(void);
        vector<double> getIntersection(Ray);
        vector<RaySegment> newSegment(Ray, vector<double>, vector<double>);

};

#endif
