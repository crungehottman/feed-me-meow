/********************************************************************* 
 ** Program Filename: Livingroom.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP
#include "Space.hpp"
#include "Bathroom.hpp"
#include "Kitchen.hpp"
#include "Cabinet.hpp"
#include "Counter.hpp"
#include "Item.hpp"

class Livingroom : public Space
{
   private:
      Space *p1;   /* kitchen */
      Space *p2;   /* cabinet */
      Space *p3;   /* counter */
      Space *p4;   /* bathroom */
      Item *fly;
      bool annihilated;
   public:
      Livingroom(){};
      Livingroom(Item *gem){fly = gem; annihilated = false;};
      void setDestinations(Space*, Space*, Space*, Space*);
      void special();
      Space* message();
      Item* getPrize();
      bool hasPrize();
};
#endif
