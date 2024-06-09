#ifndef SCENEITEM_H
#define SCENEITEM_H

#include "Ray.h"
#include "RaySegment.h"

class SceneItem {
    public:
        virtual double getNormal(void);
        virtual double intersectPoint(Ray);
        virtual RaySegment newSegment(Ray);
};

#endif