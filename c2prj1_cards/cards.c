#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
    assert(2 <= c.value && c.value <= VALUE_ACE
	 && SPADES <= c.suit && c.suit <= CLUBS);
}

const char * ranking_to_string(hand_ranking_t r) {
  char * r_str;
  switch(r) {
  case STRAIGHT_FLUSH:
    r_str = "straight flush";
    break;
    
  case FOUR_OF_A_KIND:
    r_str = "four of a kind";
    break;
    
  case FULL_HOUSE:
    r_str = "full house";
    break;
    
  case FLUSH:
    r_str = "flush";
    break;
    
  case STRAIGHT:
    r_str = "straight";
    break;
    
  case THREE_OF_A_KIND:
    r_str = "three of a kind";
    break;
    
  case TWO_PAIR:
    r_str = "two pair";
    break;
    
  case PAIR:
    r_str = "pair";
    break;
    
  case NOTHIN:
    r_str = "nothin";
    break;
  }
  return r_str;
}

char value_letter(card_t c) {
  return 'x';
}


char suit_letter(card_t c) {
  return 'x';
  
}

void print_card(card_t c) {

}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  return temp;
}
