/********************************************************************* 
 ** Program Filename: Bathroom.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#include "Bathroom.hpp"

void Bathroom::setDestinations(Space *u, Space *d, Space *l, Space *r)
{
   p1 = u;
   p2 = d;
   p3 = l;
   p4 = r;
}

void Bathroom::special()
{
   std::cout << std::endl;
   std::cout << "'There's really something about sinks, you know?'" << std::endl;
   std::cout << "'Gosh, this sure is comfy. I could almost fall asle-....'" << std::endl;
   std::cout << "*zzzzzZZzz*" << std::endl << std::endl;
   collected = true;
}

Space* Bathroom::message()
{
   unsigned actionChoice = 5;
   while(actionChoice == 0 || actionChoice > 4)
   {
      std::cout << std::endl;
      if(!collected)
         std::cout << "'Gee, it sure is dark in here!'" << std::endl;
      else
         std::cout << "I've gathered all the water from my last catnap.." << std::endl;

      if(!collected)
         std::cout << "0. lay in wet sink" << std::endl;
      else
         std::cout << "0. lay in dry sink" << std::endl;
      std::cout << "1. check the food supply" << std::endl;
      std::cout << "2. explore caverns" << std::endl;
      std::cout << "3. climb a treacherous counter" << std::endl;
      std::cout << "4. check on sleeping mom " << std::endl;
      std::cout << "Next adventure: ";
      std::cin >> actionChoice;
      if(actionChoice > 4 || std::cin.fail())
      {
         std::cin.clear();
         while (std::cin.get() != '\n');
         std::cout << "\n\n'I may not know your human mumbo-jumbo, but even I know that was a silly answer, try again..'" << std::endl;
         actionChoice = 5;
         std::cout << std::endl;
      }
      else
      {
         std::cout << std::endl;
         switch(actionChoice)
         {
            case 0:
               if(!collected)
                  special();
               else
                  std::cout << "\nI soaked all of the water from the sink during my last nap in it, I should continue my journey.." << std::endl << std::endl;
            break;
            case 1:
               return p1;
            break;
            case 2:
               return p2;
            break;
            case 3:
               return p3;
            break;
            case 4:
               return p4;
            break;
         }
      }
   }
   return nullptr;
}

Item* Bathroom::getPrize()
{
   return drop;
}

bool Bathroom::hasPrize()
{
   return collected;
}
