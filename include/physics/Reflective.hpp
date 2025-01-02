#ifndef REFLECTIVE_HPP
#define REFLECTIVE_HPP

#include <vector>
#include <cmath>
#include <Eigen/Dense>

#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"
#include "Point.hpp"

using namespace std;

class Reflective : public Physics {
    public:
        vector<RaySegment> newSegment(Ray, Point, Point); // need to figure out what this does to polarization
};

#endif