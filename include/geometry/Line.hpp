#ifndef LINE_HPP
#define LINE_HPP

#include <vector>
#include <cmath>

#include "Geometry.hpp"
#include "Ray.hpp"

using namespace std;

class Line : public Geometry {
    public:
        vector<double> normal_;
        vector<vector<double>> endpoints_; // { {x1, y1}, {x2, y2} }
    
        Line(vector<double>, vector<double>);
        vector<double> getNormal(void);
        vector<double> getIntersection(Ray);

};

#endif