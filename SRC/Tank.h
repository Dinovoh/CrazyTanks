/**
 * Project Untitled
 */


#ifndef _TANK_H
#define _TANK_H

#include "GameObject.h"


class Tank: public GameObject {
public: 
    
    void move_up();
    
    void move_down();
    
    void move_left();
    
    void move_right();
};

#endif //_TANK_H