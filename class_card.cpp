#include "class_card.h"
#include <iostream>
#include <sstream>

namespace cards

{
// card constructor
card::card(t_suit s, t_rank a )
{
   suit = s;
   rank = a;
}


// return ouput with name and label of card
std::string card::name()
{
	std::string s;
	std::string output;
	 s = suit_name[0];
	std::stringstream str;
	str << s + ",";
	str << card::getRank();

	str >> output;
	return output + "\n";
	
}
 t_suit card::getSuit()
 {
    return suit;
 }
  t_rank card::getRank()
 {
	return ranks[0];
 }

 }
