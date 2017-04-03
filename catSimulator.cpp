/********************************************************************* 
 ** Program Filename: catSimulator.cpp
 ** Author: Caleigh Runge-Hottman caleighhottman@gmail.com
 *********************************************************************/
#include "Space.hpp"
#include "Kitchen.hpp"
#include "Cabinet.hpp"
#include "Counter.hpp"
#include "Bathroom.hpp"
#include "Livingroom.hpp"
#include "HidingPlace.hpp"
#include <iostream>

int main()
{
   unsigned roomChoice = 5;
   bool awake = false;
   unsigned short cheatSheet = 2;

   HidingPlace *couch = new HidingPlace;
   HidingPlace *awesomePrize = new HidingPlace;

   Item *empty = new Item("");
   Item *tunaBone = new Item("Tuna Bone");
   Item *dustBunny = new Item("Dust Bunny");
   Item *bottleCap = new Item("Bottle Cap");
   Item *waterDroplet = new Item("Water Droplet");
   Item *deadFly = new Item("Dead Fly");

   /* super secret awesome fun order to get you some donburi */
   awesomePrize->addItem(bottleCap);
   awesomePrize->addItem(waterDroplet);
   awesomePrize->addItem(tunaBone);
   awesomePrize->addItem(dustBunny);
   awesomePrize->addItem(deadFly);

   Space *spot = new Space(empty);
   Space *k = new Kitchen(tunaBone);
   Space *cab = new Cabinet(dustBunny);
   Space *co = new Counter(bottleCap);
   Space *br = new Bathroom(waterDroplet);
   Space *lr = new Livingroom(deadFly);

   k->setDestinations(cab, co, br, lr);
   cab->setDestinations(k, co, br, lr);
   co->setDestinations(k, cab, br, lr);
   br->setDestinations(k, cab, co, lr);
   lr->setDestinations(k, cab, co, br);

   /* START */
   while(cheatSheet > 1 || std::cin.fail())
   {
      std::cout << "Before we begin... do you want to see a cheatSheet for the game?" << std::endl;
      std::cout << "note: you can only choose to see the cheatSheet at the beginning of every game" << std::endl;
      std::cout << "0. just let me play the game" << std::endl;
      std::cout << "1. let me see the cheatSheet" << std::endl;
      std::cout << "Your choice: ";
      std::cin >> cheatSheet;
      if(cheatSheet > 1 || std::cin.fail())
      {
         std::cin.clear();
         while (std::cin.get() != '\n');
         std::cout << "\n\n'I may not know your human mumbo-jumbo, but even I know that was a silly answer, try again..'" << std::endl << std::endl << std::endl;
         cheatSheet = 2;
      }
   }

   if(cheatSheet == 1) /* show cheatSheet */
   {
      std::cout << std::endl << std::endl;
      std::cout << "your goal: to find a bunch of presents for your human parent, in hopes she will wake up and feed you." << std::endl;
      std::cout << "in order to do this, you must collect ALL of the gifts (collect them via each room's special function (always 0))" << std::endl;
      std::cout << "you can only wake up the mom after you've collected all of the items (including the item in the living room: a fly)'" << std::endl;
      std::cout << "an example walkthrough would be as follows:" << std::endl;     
      std::cout << "What should I do first? : 0 (check food supply)" << std::endl;   
      std::cout << "What should I do now? : 0 (eat)" << std::endl;
      std::cout << "What should I do now? : 1 (explore)" << std::endl;
      std::cout << "What should I do now : 0 (explore mysterious caverns)" << std::endl;
      std::cout << "What should I do now : 2. counter" << std::endl;
      std::cout << "What now? : 0. tip bottle over" << std::endl;
      std::cout << "What now? : 3. Bathroom" << std::endl;
      std::cout << "What now? : 0. lay in wet sink" << std::endl;
      std::cout << "What now? : 4. lounge " << std::endl;
      std::cout << "What now? : 0. play with pesky fly" << std::endl;
      std::cout << "What now? : 0. try to wake up napping human mom" << std::endl;
      std::cout << std::endl;
      std::cout << std::endl;
      std::cout << std::endl;
   }

   std::cout << std::endl;
   std::cout << std::endl;
   std::cout << "Feed Me Meow: A Cat Simulator" << std::endl;
   std::cout << std::endl;
   std::cout << "Written and Created by Caleigh Runge-Hottman" << std::endl;
   std::cout << std::endl;
   std::cout << std::endl;
   std::cout << "You awoke laying on a lone blanket in the corner of a square room amidst a sea of hi-piled carpet." << std::endl;
   std::cout << "You slowly bat your eyes and look for some answer as to whether you should continue sleeping." << std::endl;
   std::cout << "You realize you have slept for twenty hours, and gain a sudden burst of energy." << std::endl;
   std::cout << "You stretch your claws into the carpet and let out a ferocious yawn." << std::endl;
   std::cout << "You hear a loud noise and look over to the direction in which it is originating. " << std::endl;
   std::cout << "The noise is coming from the couch, which holds a large snoring human who is fast asleep." << std::endl;
   std::cout << "'She must be tired from hunting and canning my tuna every day', you think to yourself." << std::endl;
   std::cout << "'If she isn't holding down our fort, I must,' you think as you sniff the carpet for any signs of danger. " << std::endl;
   std::cout << "'I think we're safe for now, but I'll be on the lookout.'" << std::endl;

   while(roomChoice > 4)
   {
      std::cout << std::endl;
      std::cout << std::endl;
      std::cout << "What should I do first today?" << std::endl;
      std::cout << "0. check the food supply" << std::endl;
      std::cout << "1. explore the mysterious cavern of the house" << std::endl;
      std::cout << "2. explore the cliffs of the house" << std::endl;
      std::cout << "3. go into the dark bathroom" << std::endl;
      std::cout << "4. continue guarding the livingroom" << std::endl;
      std::cout << "First adventure: ";
      std::cin >> roomChoice;
      std::cout << std::endl;
      if(roomChoice > 4 || std::cin.fail())
      {
         std::cin.clear();
         while (std::cin.get() != '\n');
         std::cout << "\n'I may not know your human mumbo-jumbo, but even I know that was a silly answer, try again..'" << std::endl;
         roomChoice = 5;
      }
   }
   switch(roomChoice)
   {
      case 0:
         spot = k;
      break;
      case 1:
         spot = cab;
      break;
      case 2:
         spot = co;
      break;
      case 3:
        spot = br;
      break;
      case 4:
         spot = lr;
      break;
   }

   while(!awake)
   {
      Space* lastSpot = spot;
      spot = spot->message();
      if(lastSpot->hasPrize() && !couch->hasItem(lastSpot->getPrize()))
         couch->addItem(lastSpot->getPrize());
      if(couch->isFull() && lastSpot == lr && spot == lr)
         awake = true;
   }

   /* you won the game! */
   couch->showGifts();

   std::cout << std::endl;
   std::cout << "Thanks! Those are lovely gifts!" << std::endl;
   std::cout << "I have a gift for you too: sushi!" << std::endl;

   if(*couch == *awesomePrize)
      std::cout << "\nYaaaaay!!! You caught everything in the super awesome secret order, here's your amazing prize: UNADON!!!" << std::endl;

   std::cout << "End." << std::endl;
   return 0;
} 
