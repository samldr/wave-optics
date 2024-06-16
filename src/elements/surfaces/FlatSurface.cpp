#include <iostream>
#include <vector>
#include <cmath>
#include "FlatSurface.h"
#include "Ray.h"

using namespace std;

FlatSurface :: FlatSurface(vector<double> p1, vector<double> p2){
    endpoints_.push_back(p1);
    endpoints_.push_back(p2);

    normal_.push_back((endpoints_.at(0)).at(1) - (endpoints_.at(1)).at(1));
    normal_.push_back((endpoints_.at(1)).at(0) - (endpoints_.at(0)).at(0));

    double inv_mod = 1 / sqrt(pow(normal_.at(0), 2) + pow(normal_.at(0), 2));

    normal_.at(0) *= inv_mod;
    normal_.at(1) *= inv_mod;   
   
};

vector<double> FlatSurface :: getNormal(void){
    return normal_;
}

vector<double> FlatSurface :: getIntersection(Ray){
    return {0.0, 0.0}; // placeholder