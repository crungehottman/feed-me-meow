/********************************************************************* 
 ** Program Filename: Bathroom.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#ifndef BATHROOM_HPP
#define BATHROOM_HPP
#include "Space.hpp"
#include "Kitchen.hpp"
#include "Cabinet.hpp"
#include "Counter.hpp"
#include "Livingroom.hpp"
#include "Item.hpp"

class Bathroom : public Space
{
   protected:
      Space *p1;   /* kitchen */
      Space *p2;   /* cabinet */
      Space *p3;   /* counter */
      Space *p4;   /* living */
      Item *drop;
      bool collected;
   public:
      Bathroom(){};
      Bathroom(Item *gem){drop = gem; collected = false;};
      void setDestinations(Space*, Space*, Space*, Space*);
      void special();
      Space* message();
      Item* getPrize();
      bool hasPrize();
};
#endif
