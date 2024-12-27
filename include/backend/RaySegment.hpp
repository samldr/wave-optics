#ifndef RAYSEGMENT_HPP
#define RAYSEGMENT_HPP

#include <vector>

using namespace std;

class RaySegment {
    public:
        vector<double> pos_; // start position of the ray segment
        vector<double> dir_; // direction of the ray segment
        vector<double> polarization_; // polarization of the ray segment
        double intensity_; // intensity of the ray segment
        double refractiveIndex_; // refractive index at the start of the ray segment
    
    RaySegment(vector<double>, vector<double>, vector<double>, double, double);
};

#endif