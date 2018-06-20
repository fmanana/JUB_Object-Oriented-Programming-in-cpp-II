#include <iostream>
#include <vector>
#include "GenericPlayer.h"
#include "Card.h"
#include "Hand.h"
#include "Player.h"

bool GenericPlayer::IsBusted() const
{ 
    return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
    std::cout << m_Name << " busts.\n";
}

//overloads << operator so a GenericPlayer object can be sent to cout
std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_Name << ":\t";
    
    std::vector<Card*>::const_iterator pCard;
    if (!aGenericPlayer.m_Cards.empty())
    {
        for (pCard = aGenericPlayer.m_Cards.begin(); 
             pCard != aGenericPlayer.m_Cards.end(); 
             ++pCard)
        {
            os << *(*pCard) << "\t";
        }


        if (aGenericPlayer.GetTotal() != 0)
		{
            std::cout << "(" << aGenericPlayer.GetTotal() << ")";
		}
    }
    else
    {
        os << "<empty>";
    }
        
    return os;
}