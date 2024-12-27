#ifndef ABSORBING_HPP
#define ABSORBING_HPP

#include <vector>
#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Absorbing : public Physics {
    public:
        vector<RaySegment> newSegment(Ray, vector<double>);
};

#endif