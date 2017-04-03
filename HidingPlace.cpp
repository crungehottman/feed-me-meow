/*****************************************************************************
 ** Program Filename: HidingPlace.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 ** Description: this acts as the players inventory.
 *****************************************************************************/
#include <iostream>
#include <algorithm>
#include "HidingPlace.hpp"

void HidingPlace::addItem(Item* item)
{
   inventory.push_back(item); // once you have all the gifts you're almost done (just wake mommy)
}

bool HidingPlace::hasItem(Item* item)
{
   return std::find(inventory.begin(), inventory.end(), item) != inventory.end();
}

bool HidingPlace::isFull()
{
   return (inventory.size() == 5);
}

void HidingPlace::showGifts()
{
   std::cout << std::endl;
   std::cout << "Mommy, mommy, check out all the cool things I got you..." << std::endl;
   for(std::vector<Item*>::iterator i = inventory.begin(); i != inventory.end(); i++)
   {
     if(i == inventory.begin())
        std::cout << "I captured a " << (*i)->getToyName();
     else if(i == inventory.end()-1)
        std::cout << ", and a " << (*i)->getToyName();
     else
        std::cout << ", a " << (*i)->getToyName();
   }
   std::cout << " all just for you... *cough* feed me *cough*" << std::endl;
}

vector<Item*> HidingPlace::getInv() const
{
   return inventory;
}

bool HidingPlace::operator==(const HidingPlace &treasure)
{
   bool same = true;
   unsigned c = 0;
   for(std::vector<Item*>::iterator i = inventory.begin(); i != inventory.end(); i++)
   {
      if(**i != *(treasure.getInv())[c])
         same = false;
      c++;
   }
   return same;
}
