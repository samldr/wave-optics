#ifndef POINT_HPP
#define POINT_HPP

#include <Eigen/Dense>

class Point {
    public:
        double x, y;

        Point();
        Point(double, double);
        double norm(void);
        Eigen::Vector2d toEigen(void);
        void toPoint(Eigen::Vector2d);

};

#endif