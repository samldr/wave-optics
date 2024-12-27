#include "Line.hpp"

Line :: Line(vector<double> p1, vector<double> p2) {
    endpoints_.push_back(p1);
    endpoints_.push_back(p2);

    normal_.push_back(p1[1] - p2[1]);
    normal_.push_back(p2[0] - p1[0]);

    double invMag = 1 / sqrt(pow(normal_[0], 2) + pow(normal_[1], 2));

    normal_[0] *= invMag;
    normal_[1] *= invMag;
};

vector<double> Line :: getNormal(void) {
    return normal_;
};

vector<double> Line :: getIntersection(Ray ray){
    vector<double> intersection;

    double x1 = endpoints_[0][0];
    double y1 = endpoints_[0][1];
    double x2 = endpoints_[1][0];
    double y2 = endpoints_[1][1];   

    double x3 = ray.segments_.back().pos_[0];
    double y3 = ray.segments_.back().pos_[1];
    double x4 = ray.segments_.back().dir_[0];
    double y4 = ray.segments_.back().dir_[1];    
    
    double denom =  (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);

    if(denom == 0) { // use epsilon thing here
        return intersection;
    }
    
    double num1 = (x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4);
    double num2 = (x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4);   

    intersection.push_back(num1 / denom);
    intersection.push_back(num2 / denom);
    
    return intersection;
};