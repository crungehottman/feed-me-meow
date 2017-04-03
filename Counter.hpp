/********************************************************************* 
 ** Program Filename: Counter.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#ifndef COUNTER_HPP
#define COUNTER_HPP
#include "Space.hpp"
#include "Bathroom.hpp"
#include "Kitchen.hpp"
#include "Cabinet.hpp"
#include "Livingroom.hpp"
#include "Item.hpp"

class Counter : public Space
{
   private:
      Space *p1;   /* kitchen */
      Space *p2;   /* cabinet */
      Space *p3;   /* bathroom */
      Space *p4;   /* livingroom */
      Item *cap;
      bool captured;
   public:
      Counter(){};
      Counter(Item *gem){cap = gem; captured = false;};
      void setDestinations(Space*, Space*, Space*, Space*);
      void special();
      Space* message();
      Item* getPrize();
      bool hasPrize();
};
#endif
