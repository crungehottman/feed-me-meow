/********************************************************************* 
 ** Program Filename: Kitchen.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#include "Kitchen.hpp"

void Kitchen::setDestinations(Space *u, Space *d, Space *l, Space *r)
{
   p1 = u;
   p2 = d;
   p3 = l;
   p4 = r;
}

void Kitchen::special()
{
   std::cout << std::endl;
   std::cout << "*crunch* *crunch* *crunch* *crunch* *crunch*" << std::endl;
   std::cout << "*hppft* *heeepft* 'Uh oh, I think I ate too quickly...'" << std::endl;
   std::cout << "*barf*" << std::endl;
   std::cout << "'Gross. How will human mom clean this up if she's sleeping? I need to find a way to wake her up. (or maybe I should just eat it again...)'" << std::endl;
   std::cout << "'I will give her this tuna bone as a gift when she wakes in case she is upset'" << std::endl << std::endl;
   ate = true;
}

Space* Kitchen::message()
{
   unsigned actionChoice = 5;
   while(actionChoice == 0 || actionChoice > 4)
   {
      std::cout << std::endl;
      if(!ate)
         std::cout << "Ugh...I'm running low on food. How is human mom supposed to hunt for my dinner if she's sleeping? " << std::endl;
      else
         std::cout << "I'm out of food, I need to quickly gather enough gifts to give my mom so she can feed me for my heroic efforts." << std::endl;
      if(!ate)
         std::cout << "0. eat" << std::endl;
      else
         std::cout << "0. meow obnoxiously over my empty food bowl" << std::endl;
      std::cout << "1. explore mysterious caverns" << std::endl;
      std::cout << "2. climb a treacherous counter" << std::endl;
      std::cout << "3. visit the dark bathroom" << std::endl;
      std::cout << "4. check on sleeping mom" << std::endl;
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
               if(!ate)
                  special();
               else
                  std::cout << "\nOopsies I forgot I ate the rest of my kibble too quickly, threw it up, and now I'm all out =(" << std::endl << std::endl;
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

Item* Kitchen::getPrize()
{
   return snack;
}

bool Kitchen::hasPrize()
{
   return ate;
}
