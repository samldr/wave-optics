#include "Point.hpp"

Point :: Point(double x_, double y_){
    x = x_;
    y = y_;
}

double Point :: norm(void){
    return sqrt(pow(x, 2) + pow(y, 2));
}

Eigen::Vector2d Point :: toEigen(void){
    return Eigen::Vector2d(x, y);
}

void Point :: toPoint(Eigen::Vector2d vec){
    x = vec[0];
    y = vec[1];
}
