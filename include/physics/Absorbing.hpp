#ifndef ABSORBING_HPP
#define ABSORBING_HPP

#include <vector>
#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"
#include "Point.hpp"

using namespace std;

class Absorbing : public Physics {
    public:
        vector<RaySegment> newSegment(Ray, Point, Point);
};

#endif