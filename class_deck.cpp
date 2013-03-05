
#include "class_card.h"
#include "class_deck.h"
#include <iostream>
#include <algorithm>
#include <time.h>

namespace cards
{

	std::vector<cards::card> cvector;
 // lage deck  av cards
	deck::deck()
	{
	  	for(int i=0; i < NUM_RANKS; i++  )
		{
			for(int j = 0; j < NUM_SUITS; j++)
			{
		     cards::t_suit s = (cards::t_suit)i;
			 cards::card tempcard( s, ranks[j] );
		     cvector.push_back(tempcard);
			}
		}

	}
	// teller hvor mange deck er
	deck::deck(int deckCount)
	{
		deckCount = deck();
	
	}
	// shuffle the cards
	void shuffle()
	{
			srand ( unsigned ( time (NULL) ) );
			for( int i = 0; i < 1; i++ )
			
			std::random_shuffle(cards::cvector.begin(), cards::cvector.end());
			
	}
	// deal one card at time
	card deal()
	{
		
	for (std::vector<cards::card>::iterator it = cards::cvector.begin() ; it != cards::cvector.end(); ++it)
		{
			shuffle();
			cards::card (c) = *it;
			return cards::card (c);
		}
		
	
	}
	// return the size
	int size()
	{
	   return cards::cvector.size();
	}
	
     
}

