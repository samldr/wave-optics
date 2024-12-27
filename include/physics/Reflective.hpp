#ifndef REFLECTIVE_HPP
#define REFLECTIVE_HPP

#include <vector>
#include <cmath>
#include <Eigen/Dense>

#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Reflective : public Physics {
    public:
        vector<RaySegment> newSegment(Ray, vector<double>, vector<double>); // need to figure out what this does to polarization
};

#endif