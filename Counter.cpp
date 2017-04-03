/********************************************************************* 
 ** Program Filename: Counter.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#include "Counter.hpp"

void Counter::setDestinations(Space *u, Space *d, Space *l, Space *r)
{
   p1 = u;
   p2 = d;
   p3 = l;
   p4 = r;
}

void Counter::special()
{
   std::cout << std::endl;
   std::cout << "'Ooh, what's this bottle doing here?'" << std::endl;
   std::cout << "*smack* *smack* *smack*" << std::endl;
   std::cout << "***********CRASH***********" << std::endl;
   std::cout << "Uh oh... mom won't like that..." << std::endl;
   std::cout << "Oooo, a bottle cap! How fun! I wonder if mommy will love it as much as I do... *snatch*" << std::endl << std::endl;
   captured = true;
}

Space* Counter::message()
{
   unsigned actionChoice = 5;
   while(actionChoice == 0 || actionChoice > 4)
   {
      std::cout << std::endl;
      if(!captured)
         std::cout << "Ahh, this ledge holds one of the most beautiful views in the house: my food bowl." << std::endl;
      else
         std::cout << "Alright, my attention span may be low but I really should stay on track.." << std::endl;
      std::cout << "'Okay, what now?'" << std::endl;
      if(!captured)
         std::cout << "0. tip the stupid bottle over" << std::endl;
      else
         std::cout << "0. watch my food bowl from up high some more" << std::endl;
      std::cout << "1. check the food supply" << std::endl;
      std::cout << "2. explore mysterious caverns" << std::endl;
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
               if(!captured)
                  special();
               else
                  std::cout << "\nI still have that bottle cap from earlier, not much else to do here, better move on.." << std::endl << std::endl;
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

Item* Counter::getPrize()
{
   return cap;
}

bool Counter::hasPrize()
{
   return captured;
}
