/**
 * Project Untitled
 */


#ifndef _WALL_H
#define _WALL_H

#include "GameObject.h"


class Wall: public GameObject {
public: 
    
    void Wall();
    
    void is_indestructible();
};

#endif //_WALL_H