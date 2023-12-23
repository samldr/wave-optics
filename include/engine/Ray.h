#ifndef RAY_H
#define RAY_H

#include <iostream>
#include <vector>
#include "RaySegment.h"

using namespace std;

class Ray {
    public:
        vector<RaySegment> segments_;
        double wavelength_;
        
        Ray(double wavelength, vector<double> pos, vector<double> dir, vector<double> polarization, double intensity, double refractiveIndex);    
};

#endif