#include "RaySegment.c"

class Ray {
    public:
        RaySegment * segments;
        int wavelength;
        Ray(int wavelength, int * pos, int * dir, int * polarization, int intensity, int refractiveIndex);    
};

Ray::Ray(int wavelength, int * pos, int * dir, int * polarization, int intensity, int refractiveIndex){
    wavelength = wavelength;
    segments += new RaySegment(pos, dir, polarization, intensity, refractiveIndex);
}

