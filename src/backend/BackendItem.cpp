#include "BackendItem.hpp"

BackendItem :: BackendItem(Geometry geometry, Physics physics) {
    geometry_ = geometry;
    physics_ = physics;
};

vector<double> BackendItem :: getNormal(void){
    return geometry_.getNormal();
}

vector<double> BackendItem :: getIntersection(Ray ray){
    return geometry_.getIntersection(ray);
}

vector<RaySegment> BackendItem :: newSegment(Ray ray, vector<double> normal, vector<double> intersection){
    return physics_.newSegment(ray, normal, intersection);
}
