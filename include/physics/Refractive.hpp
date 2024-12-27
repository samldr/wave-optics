#ifndef REFRACTIVE_HPP
#define REFRACTIVE_HPP

#include <vector>

#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Refractive : public Physics {
    public:
        double refractive_index_;
    
    Refractive(double);
    vector<RaySegment> newSegment(Ray);

};

#endif