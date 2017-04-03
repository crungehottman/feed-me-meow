/********************************************************************* 
 ** Program Filename: Cabinet.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#include "Cabinet.hpp"

void Cabinet::setDestinations(Space *u, Space *d, Space *l, Space *r)
{
   p1 = u;
   p2 = d;
   p3 = l;
   p4 = r;
}

void Cabinet::special()
{
   std::cout << std::endl;
   std::cout << "*creeeak* *BOOM* *creeeak* *BOOM* *creeeeeeeeeak*" << std::endl;
   std::cout << "I finally got it open!" << std::endl;
   std::cout << "*BOOM*" << std::endl;
   std::cout << "The door shut behind me. I hope I don't run into any dust- Ahhh choo! -bunnies" << std::endl;
   std::cout << "..." << std::endl;
   std::cout << "Is that..." << std::endl;
   std::cout << "Is that a... dust...bunny?" << std::endl;
   std::cout << "MRRRRROOOOWWWWWWWWW" << std::endl;
   std::cout << "*BOOM* *BOOM *CLANG* *BAM* *BANG*" << std::endl;
   std::cout << "----------" << std::endl;
   std::cout << "'DEFEATED! I defeated a dust bunny! Wait 'til human mom hears about this!'" << std::endl;
   std::cout << "I'll take the dustbunny carcass as proof, so she'll have to believe me!" << std::endl << std::endl;
   defeated = true;
}

Space* Cabinet::message()
{
   unsigned actionChoice = 5;
   while(actionChoice == 0 || actionChoice > 4)
   {
      std::cout << std::endl;
      if(!defeated)
      {
         std::cout << "'My home has many doors to mysterious caverns the humans call Cabinets'" << std::endl;
         std::cout << "'Sometimes when I'm feeling brave, I explore them.'" << std::endl;
         std::cout << "'Ledgened has it that the caverns are home to dangerous beasts called 'dust bunnies'...'" << std::endl;
      }
      else
         std::cout << "That battle with the ferocious dust monster was intense, but I own this place!" << std::endl;

      if(!defeated)
         std::cout << "0. explore mysterious caverns" << std::endl;
      else
         std::cout << "0. show the dust bunnies I mean business" << std::endl;
      std::cout << "1. check the food supply" << std::endl;
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
               if(!defeated)
                  special();
               else
                  std::cout << "\nAll clear here, mommy would be so proud of my ability to defend our territory from dust!" << std::endl << std::endl;
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

Item* Cabinet::getPrize()
{
   return dust;
}

bool Cabinet::hasPrize()
{
   return defeated;
}
