#ifndef REFRACTIVE_HPP
#define REFRACTIVE_HPP

#include <vector>
#include <cmath>
#include <Eigen/Dense>

#include "Physics.hpp"
#include "Ray.hpp"
#include "RaySegment.hpp"
#include "Mat.hpp"
#include "Point.hpp"

using namespace std;


class Refractive : public Physics {
    public:
       
        enum Mat material_;
    
        Refractive(Mat);
        double sellmeier(Ray);
        vector<RaySegment> newSegment(Ray, Point, Point);

};

#endif