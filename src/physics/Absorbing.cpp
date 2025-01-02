#include "Absorbing.hpp"

vector<RaySegment> Absorbing :: newSegment(Ray ray, Point intersection, Point normal){
    Point dir;
    vector<RaySegment> output;
    output.push_back(RaySegment(intersection, dir, ray.segments_.back().polarization_, ray.segments_.back().intensity_, ray.segments_.back().refractiveIndex_));
    return output;
};