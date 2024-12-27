#ifndef PHYSICS_HPP
#define PHYSICS_HPP

#include <vector>
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Physics {
    public:
        virtual vector<RaySegment> newSegment(Ray, vector<double>, vector<double>);  
};

#endif