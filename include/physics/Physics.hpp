#ifndef PHYSICS_HPP
#define PHYSICS_HPP

#include <vector>
#include "Ray.hpp"
#include "RaySegment.hpp"
#include "Point.hpp"

using namespace std;

class Physics {
    public:
        virtual vector<RaySegment> newSegment(Ray, Point, Point);  
};

#endif