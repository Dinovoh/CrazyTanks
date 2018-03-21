/**
 * Project Untitled
 */


#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H

class GameObject {
public: 
    
    void get_status();
    
    void set_status();
    
    void set_durability();
    
    void get_durability();
    
    void set_position();
    
    void get_position();
    
    void set_representation();
    
    void get_representation();
private: 
    bool status;
    int durability;
    int xPosition;
    int yPosition;
    char representation;
};

#endif //_GAMEOBJECT_H