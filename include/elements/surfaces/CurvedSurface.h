#ifndef CURVEDSURFACE_H
#define CURVEDSURFACE_H

#include <iostream>
#include <vector>

#include "Surface.h"
#include "Ray.h"

using namespace std;

class CurvedSurface : public Surface {
    public:
        vector<double> center_; // center point
        double radius_; // surface radius

        vector<double> angles_; // starting and ending angle for the arc
        double rotation_; // offset angle
    
    CurvedSurface(vector<double>, double, vector<double>, double);
    vector<double> getNormal(vector<double>);
    vector<double> getIntersection(Ray);

};

#endif