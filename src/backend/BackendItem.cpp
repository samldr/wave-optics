#include "BackendItem.hpp"

BackendItem :: BackendItem(Geometry geometry, Physics physics) {
    geometry_ = geometry;
    physics_ = physics;
};

Point BackendItem :: getNormal(void){
    return geometry_.getNormal();
}
Point BackendItem :: getIntersection(Ray ray){
    return geometry_.getIntersection(ray);
}

vector<RaySegment> BackendItem :: newSegment(Ray ray, Point normal, Point intersection){
    return physics_.newSegment(ray, normal, intersection);
}
