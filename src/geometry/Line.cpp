#include "Line.hpp"
// TODO: update the Point class properly here
Line :: Line(Point p1, Point p2) {
    p1_= p1;
    p2_ = p2;

    normal_.x = p1.y - p2.y;
    normal_.y = p2.x - p1.x;

    double invMag = 1 / sqrt(pow(normal_.x, 2) + pow(normal_.y, 2));

    normal_.x *= invMag;
    normal_.y *= invMag;
};

Point Line :: getNormal(void) {
    return normal_;
};

Point Line :: getIntersection(Ray ray){
    Point intersection;

    double x1 = p1_.x;
    double y1 = p1_.y;
    double x2 = p2_.x;
    double y2 = p2_.y;   

    double x3 = ray.segments_.back().pos_.x;
    double y3 = ray.segments_.back().pos_.y;
    double x4 = ray.segments_.back().dir_.x;
    double y4 = ray.segments_.back().dir_.y;    
    
    double denom =  (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);

    if(denom == 0) { // use epsilon thing here
        return intersection;
    }
    
    double num1 = (x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4);
    double num2 = (x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4);   

    intersection.x = num1 / denom;
    intersection.y = num2 / denom;
    
    return intersection;
};