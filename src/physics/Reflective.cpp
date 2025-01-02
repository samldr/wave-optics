#include "Reflective.hpp"

vector<RaySegment> Reflective :: newSegment(Ray ray, Point normal, Point intersection){
    RaySegment segment = ray.segments_.back();

    Eigen::Vector2d eIncident(&segment.dir_.x); 
    Eigen::Vector2d eNormal(&normal.x);
    Eigen::Vector2d eReflected = eIncident - 2*eIncident.dot(eNormal)*eNormal; 
    
    Point reflected(eReflected[0], eReflected[1]);

    vector<RaySegment> output = {RaySegment(intersection, reflected, segment.polarization_, segment.intensity_, segment.refractiveIndex_)};
    return output;
};