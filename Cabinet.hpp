/********************************************************************* 
 ** Program Filename: Cabinet.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#ifndef CABINET_HPP
#define CABINET_HPP
#include "Space.hpp"
#include "Bathroom.hpp"
#include "Kitchen.hpp"
#include "Counter.hpp"
#include "Livingroom.hpp"
#include "Item.hpp"

class Cabinet : public Space
{
   private:
      Space *p1;   /* kitchen */
      Space *p2;   /* counter */
      Space *p3;   /* bathroom */
      Space *p4;   /* livingroom */
      Item *dust;
      bool defeated;
   public:
      Cabinet(){};
      Cabinet(Item *gem){dust = gem; defeated = false;};
      void setDestinations(Space*, Space*, Space*, Space*);
      void special();
      Space* message();
      Item* getPrize();
      bool hasPrize();
};
#endif
