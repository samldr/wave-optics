#include "Ray.hpp"

Ray::Ray(double wavelength, Point pos, Point dir, vector<double> polarization, double intensity, double refractiveIndex){
    wavelength_ = wavelength;
    segments_.push_back(RaySegment(pos, dir, polarization, intensity, refractiveIndex));
}