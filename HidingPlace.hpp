/*****************************************************************************
 ** Program Filename: HidingPlace.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 ** Description: this acts as the players inventory.
 *****************************************************************************/
#ifndef HIDINGPLACE_HPP
#define HIDINGPLACE_HPP
#include "Item.hpp"
#include <vector>
using std::vector;

class HidingPlace
{
   private:
      vector<Item*> inventory;
   public:
      HidingPlace(){};
      void addItem(Item*);
      bool hasItem(Item*);
      bool isFull();
      void showGifts();
      vector<Item*> getInv() const;
      bool operator==(const HidingPlace&);
};
#endif
