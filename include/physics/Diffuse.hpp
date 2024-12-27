#ifndef DIFFUSE_HPP
#define DIFFUSE_HPP

#include <vector>
#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Diffuse : public Physics {
    public:
        vector<RaySegment> newSegment(Ray, vector<double>, vector<double>);
};

#endif