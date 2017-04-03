/********************************************************************* 
 ** Program Filename: Space.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include "Item.hpp"

class Space
{
   private:

   public:
      Space();
      Space(Item*);
      virtual void setDestinations(Space*, Space*, Space*, Space*){};
      virtual void special(){};
      virtual Space* message(){return nullptr;};
      virtual Item* getPrize(){return nullptr;};
      virtual bool hasPrize(){return false;};
};
#endif
