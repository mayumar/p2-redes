#include "Ship.hpp"

Ship::Ship(Type type, Orientation orientation, std::vector<int> coordsEdge1){
    type_ = type;
    orientation_ = orientation;
    coordsEdge1_ = coordsEdge1;
    coordsEdge2_ = std::vector<int>(2);
    
    if(type_ == Type::LONG){
        if(orientation_ == Orientation::HORIZONTAL){
            coordsEdge2_[0] = coordsEdge1_[0];
            coordsEdge2_[1] = coordsEdge1_[1]+4;
        }else{
            coordsEdge2_[0] = coordsEdge1_[0]+4;
            coordsEdge2_[1] = coordsEdge1_[1];
        }
    }else if(type_ == Type::MEDIUM){
        if(orientation_ == Orientation::HORIZONTAL){
            coordsEdge2_[0] = coordsEdge1_[0];
            coordsEdge2_[1] = coordsEdge1_[1]+3;
        }else{
            coordsEdge2_[0] = coordsEdge1_[0]+3;
            coordsEdge2_[1] = coordsEdge1_[1];
        }
    }else{
        if(orientation_ == Orientation::HORIZONTAL){
            coordsEdge2_[0] = coordsEdge1_[0];
            coordsEdge2_[1] = coordsEdge1_[1]+2;
        }else{
            coordsEdge2_[0] = coordsEdge1_[0]+2;
            coordsEdge2_[1] = coordsEdge1_[1];
        }
    }
}

void Ship::printType(){
    if(type_ == Type::LONG){
        std::cout << "long";
    }
}

void Ship::printOrientation(){
    if(orientation_ == Orientation::VERTICAL){
        std::cout << "vertical";
    }
}
