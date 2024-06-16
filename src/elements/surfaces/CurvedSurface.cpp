#include <iostream>
#include <vector>
#include <cmath>
#include "CurvedSurface.h"
#include "Ray.h"

using namespace std;

CurvedSurface :: CurvedSurface(vector<double> center, double radius, vector<double> angles, double rotation){
    center_ = center;
    radius_ = radius;
    angles_ = angles;
    rotation_ = rotation;

};

vector<double> CurvedSurface :: getNormal(vector<double> intersectionPoint){
    // redo this whole function with eigen or somethign

    double x = intersectionPoint.at(0) - center_.at(0);
    double y = intersectionPoint.at(1) - center_.at(1);

    vector<double> normal = {x, y};

    double inv_mod = 1 / sqrt(pow(normal.at(0), 2) + pow(normal.at(0), 2));

    normal.at(0) *= inv_mod;
    normal.at(1) *= inv_mod;  
    
    return normal;
}

vector<double> CurvedSurface :: getIntersection(Ray){
    return {0.0, 0.0}; // placeholder