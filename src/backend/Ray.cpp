#include "Ray.hpp"

Ray::Ray(double wavelength, vector<double> pos, vector<double> dir, vector<double> polarization, double intensity, double refractiveIndex){
    wavelength_ = wavelength;
    segments_.push_back(RaySegment(pos, dir, polarization, intensity, refractiveIndex));
}