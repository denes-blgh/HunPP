#pragma once

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>

#define pls ;
#define ámen ;__COUNTER__;

#define és and
#define automatikus auto
#define automata auto
#define logikai bool
#define kitörni break
#define kitör break
#define törj break
#define ki
#define eset case
#define elfogni catch
#define elfog catch
#define fogd catch
#define fogj catch
#define el
#define karakter char
#define osztály class
#define állandó const
#define konstans const
#define folytatni continue
#define folytat continue
#define folytasd continue
#define folytass continue
#define alapértelmezett default
#define törölni delete
#define töröl delete
#define töröld delete
#define törölj delete
#define csinálni do
#define csinál do
#define csináld do
#define csinálj do
#define dupla double
#define különben else
#define egyébként else
#define amúgy else
#define felsorolás enum
#define nyílt explicit
#define hamis false
#define lebegő float
#define ciklus for
#define ismételni for
#define ismétel for
#define ismételd for
#define ismételj for
#define barát friend
#define odamenni goto
#define odamegy goto
#define menj goto
#define oda
#define ha if
#define egész int
#define hosszú long
#define változtatható mutable
#define módosítható mutable
#define névtér namespace
#define új new
#define nem not
#define nullamutató nullptr
#define nullmutató nullptr
#define zérómutató nullptr
#define operátor operator
#define kezelő operator
#define műveletijel operator
#define vagy or
#define magán private
#define privát private
#define védett protected
#define nyilvános public
#define publikus public
#define visszaadni return
#define visszaad return
#define adj return
#define add return
#define vissza
#define rövid short
#define előjeles signed
#define mérete sizeof
#define méret sizeof
#define statikus static
#define struktúra struct
#define váltani switch
#define vált switch
#define válts switch
#define váltsad switch
#define sablon template
#define ez this
#define dobni throw
#define dob throw
#define dobd throw
#define dobj throw
#define igaz true
#define megpróbálni try
#define megpróbál try
#define probálj try
#define próbáld try
#define meg
#define típusdefiníció typedef
#define típusmeghatározás typedef
#define típusnév typename
#define unió union
#define előjelmentes unsigned
#define nemnegatív unsigned
#define használni using
#define használ using
#define használd using
#define használj using
#define fel
#define virtuális virtual
#define üresség void
#define semmi void
#define amíg while
#define míg while
#define kizáróvagy xor

#define valamint
#define továbbá
#define a
#define az
#define hogy

#define hagyományos std
#define alapvető std
#define szabvány std

#define kinyit {
#define kinyitni {
#define nyisd {
#define nyiss {
#define ki
#define bezár }
#define bezárni }
#define zárd }
#define zárj }
#define be

#define huzal std::string
#define szöveg std::string

#define konzolki std::cout
#define konzolbe std::cin
#define beolvasni std::cin >>
#define beolvas std::cin >>
#define olvass std::cin >>
#define olvasd std::cin >>
#define be
#define kiírni std::cout <<
#define kiír std::cout <<
#define írd std::cout <<
#define írj std::cout <<
#define ki
#define azt
#define újsor << std::endl
#define enter << std::endl

#define legyen =

#define plusz +
#define mínusz -
#define szorozva *
#define osztva /
#define modulusz %

#define egyenlő ==
#define kisebb <
#define nagyobb >
#define kisebbegyenlő <=
#define nagyobbegyenlő >=
#define mint

#define huzallá(X) std::to_string(X)
#define fonállá(X) std::to_string(X)
#define szinusz(X) std::sin(X)
#define koszinusz(X) std::cos(X)
#define tangens(X) std::tan(X)
#define arkszinusz(X) std::asin(X)
#define arkkoszinusz(X) std::acos(X)
#define hatvány(X, Y) std::pow(X, Y)
#define logaritmus(X) std::log(X)
#define logaritmus10(X) std::log10(X)
#define négyzetgyök(X) std::sqrt(X)
#define abszolút(X) std::abs(X)

#define egészhuzalból(X) std::stoi(X)
#define egésztömbből(X) std::atoi(X)

#define nulla 0
#define egy 1
#define kettő 2
#define három 3
#define négy 4
#define öt 5
#define hat 6
#define hét 7
#define nyolc 8
#define kilenc 9
#define tíz 10

#define viszontlátásra } void count() { static_assert(__COUNTER__ >= 4, "Kerem legyen ahitatosabb, mert igy elobb fog a pokolra jutni, mint ebbol program lesz. Amen."); }

namespace hun { int fő (); }
void count();
int main () 
{
	hun::fő();
	count();
	//std::cout << C.next<__COUNTER__>();
	//static_assert(count >= 5, "Kérem legyen áhitatosabb, mert így előbb fog a pokolra jutni, mint ebből program lesz. Jól jegyezze meg, ember tervez, Isten végez. Ámen.");
}

namespace hun {