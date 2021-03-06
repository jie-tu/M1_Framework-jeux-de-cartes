#include "StringCards.hpp"
#include <iostream> // cout

const string StringCards::cards = "๐ ๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐ฑ๐ฒ๐ณ๐ด๐ต๐ถ๐ท๐ธ๐น๐บ๐ป๐ผ๐ฝ๐พ๐ก๐ข๐ฃ๐ค๐ฅ๐ฆ๐ง๐จ๐ฉ๐ช๐ซ๐ฌ๐ญ๐ฎ๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐" ;

string StringCards::french_card(unsigned int i){
  if (i<0 || i>57){

    throw std::invalid_argument("StringCards::french_card() --> "+std::to_string(i)) ;
  }
  return cards.substr((i)*4,4);
}

string StringCards::color(unsigned int i){
  if (i==0) return "โฆ";
  if (i==1) return "โฅ";
  if (i==2) return "โ ";
  if (i==3) return "โฃ";
  else return "Indรฉfini";
}
