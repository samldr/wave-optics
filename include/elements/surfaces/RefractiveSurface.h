#ifndef REFRACTIVESURFACE_H
#define REFRACTIVESURFACE_H

#include <iostream>
#include <vector>

#include "Surface.h"
#include "Ray.h"
#include "RaySegment.h"

using namespace std;

class RefractiveSurface : public Surface {
    public:
        double refractive_index_;
    
    RefractiveSurface(double); // int so that we can make a polygon out of refractive index
    vector<RaySegment> newSegment(Ray);

};

#endif