#ifndef PHYSICS_HPP
#define PHYSICS_HPP

#include <vector>
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Physics {

    virtual vector<RaySegment> newSegment(Ray);

};

#endif