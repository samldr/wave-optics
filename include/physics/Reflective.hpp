#ifndef REFLECTIVE_HPP
#define REFLECTIVE_HPP

#include <vector>

#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Reflective : public Physics {
    
    vector<RaySegment> newSegment(Ray);

};

#endif