#ifndef RAY_HPP
#define RAY_HPP

#include <vector>
#include "RaySegment.hpp"
#include "Point.hpp"

using namespace std;

class Ray {
    public:
        vector<RaySegment> segments_;
        double wavelength_;
        
        Ray(double wavelength, Point pos, Point dir, vector<double> polarization, double intensity, double refractiveIndex);    
};

#endif