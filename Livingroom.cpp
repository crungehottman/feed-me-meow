/********************************************************************* 
 ** Program Filename: Livingroom.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#include "Livingroom.hpp"

void Livingroom::setDestinations(Space *u, Space *d, Space *l, Space *r)
{
   p1 = u;
   p2 = d;
   p3 = l;
   p4 = r;
}

void Livingroom::special()
{
   std::cout << std::endl;
   std::cout << "Dang, I accidentially killed it, guess I can still show it to mom later and look like a hero..." << std::endl << std::endl;
   annihilated = true;
}

Space* Livingroom::message()
{
   unsigned actionChoice = 5;
   while(actionChoice == 0 || actionChoice > 4)
   {
      std::cout << std::endl;
      if(!annihilated)
      {
         std::cout << "bbbbbzzzzz" << std::endl;
         std::cout << "Sounds like a fly I can play with..." << std::endl;
      }
      else
      {
         std::cout << "ZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
         std::cout << "Humans sure are loud sleepers!" << std::endl;
         std::cout << "Human mommy is in a deep sleep, I'd better get her more gifts to encourage her to wake up and feed me..." << std::endl;
      }
      std::cout << "what now?" << std::endl;
      if(!annihilated)
         std::cout << "0. play with the pesky fly" << std::endl;
      else
         std::cout << "0. try to wake up napping human mommy" << std::endl;
      std::cout << "1. check on food supply" << std::endl;
      std::cout << "2. explore mysterious caverns" << std::endl;
      std::cout << "3. climb a treacherous counter" << std::endl;
      std::cout << "4. visit the dark bathroom" << std::endl;
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
               if(!annihilated)
                  special();
               else if(fly && p1->hasPrize() && p2->hasPrize() && p3->hasPrize() && p4->hasPrize())
                  return this;
               else
                  std::cout << "\nMy battle with that pesky fly was intense, my adventure isn't quite over yet though.." << std::endl << std::endl;
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

Item* Livingroom::getPrize()
{
   return fly;
}

bool Livingroom::hasPrize()
{
   return annihilated;
}
