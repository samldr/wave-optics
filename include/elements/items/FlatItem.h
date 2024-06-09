#ifndef FLATITEM_H
#define FLATITEM_H

#include <iostream>
#include <vector>

#include "SceneItem.h"

class FlatItem : public SceneItem {
    public:
        vector<vector<int>> _edges = {}; // x y coordinates of the two endpoints of the item 'line'
        vector<double> _normal = {}; // normal vector to the line

        FlatItem(void);
        double IntersectPoint(Ray);
        
};

#endif