#include "RaySegment.hpp"

RaySegment :: RaySegment(vector<double> pos, vector<double> dir, vector<double> polarization, double intensity, double refractiveIndex) {
    pos_ = pos;
    dir_ = dir;
    polarization_ = polarization;
    intensity_ = intensity;
    refractiveIndex_ = refractiveIndex;
};