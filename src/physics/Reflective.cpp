#include "Reflective.hpp"

vector<RaySegment> Reflective :: newSegment(Ray ray, vector<double> norm, vector<double> intersection){
    RaySegment segment = ray.segments_.back();

    Eigen::Vector2d eigenIncident(segment.dir_.data()); 
    Eigen::Vector2d eigenNormal(norm.data());
    Eigen::Vector2d eigenReflected = eigenIncident - 2*eigenIncident.dot(eigenNormal)*eigenNormal; 
    
    vector<double> reflected = {eigenReflected[0], eigenReflected[1]};

    vector<RaySegment> output = {RaySegment(intersection, reflected, segment.polarization_, segment.intensity_, segment.refractiveIndex_)};
    return output;
};