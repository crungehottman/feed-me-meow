/********************************************************************* 
 ** Program Filename: Kitchen.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#ifndef KITCHEN_HPP
#define KITCHEN_HPP
#include "Space.hpp"
#include "Bathroom.hpp"
#include "Cabinet.hpp"
#include "Counter.hpp"
#include "Livingroom.hpp"
#include "Item.hpp"

class Kitchen : public Space
{
   private:
      Space *p1;   /* counter */
      Space *p2;   /* cabinet */
      Space *p3;   /* bathroom */
      Space *p4;   /* livingroom */
      Item *snack;
      bool ate;
   public:
      Kitchen(){};
      Kitchen(Item *gem){snack = gem; ate = false;};
      void setDestinations(Space*, Space*, Space*, Space*);
      void special();
      Space* message();
      Item* getPrize();
      bool hasPrize();
};
#endif
