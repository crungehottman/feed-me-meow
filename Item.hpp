/*****************************************************************************
 ** Program Filename: Item.hpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 ** Description: items that go in cat's inventory
 *****************************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
class Item
{
   private:
      std::string toy;
   public:
      Item();
      Item(std::string gem){toy = gem;};
      std::string getToyName();
      bool operator!=(Item &treasure){return toy != treasure.getToyName();};
};
#endif
