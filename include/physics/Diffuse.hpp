#ifndef DIFFUSE_HPP
#define DIFFUSE_HPP

#include <vector>
#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"
#include "point.hpp"

using namespace std;

class Diffuse : public Physics {
    public:
        vector<RaySegment> newSegment(Ray, point, point);
};

#endif