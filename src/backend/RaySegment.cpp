#include "RaySegment.hpp"

RaySegment :: RaySegment(Point pos, Point dir, vector<double> polarization, double intensity, double refractiveIndex) {
    pos_ = pos;
    dir_ = dir;
    polarization_ = polarization;
    intensity_ = intensity;
    refractiveIndex_ = refractiveIndex;
};