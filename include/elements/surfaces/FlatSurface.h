#ifndef FLATSURFACE_H
#define FLATSURFACE_H

#include <iostream>
#include <vector>

#include "Surface.h"
#include "Ray.h"

using namespace std;

class FlatSurface : public Surface {
    public:
        vector<double> normal_;
        vector<vector<double>> endpoints_; // { {x1, y1}, {x2, y2} }
    
    FlatSurface(vector<double>, vector<double>);
    vector<double> getNormal(void);
    vector<double> getIntersection(Ray);

};

#endif