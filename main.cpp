//
// Created by stycks on 14/03/2021.
//
#include <iostream>
#include "snowman.hpp"

using namespace std;
using namespace ariel;

int main(){
    cout << snowman(22222222) << endl;/* Should print
    ___
   .....
  \(o.o)/
   (] [)
   (" ")
     */
    cout << snowman(33333333) << endl;   /* Should print:
   _
  /_\
 (O_O)
/(> <)\
 (___)
	*/
    cout << snowman(44444444) << endl;   /* Should print:
 ___
(_*_)
(- -)
(   )
(   )
	*/

    cout << snowman(43432214) << endl;   /* Should print:
  ___
 (_*_)
\(-_O)/
 ( : )
 (   )
	*/
    cout << snowman(13213244) << endl;   /* Should print:
 _===_
 (o_.)/
/(   )
 (   )

	*/
    return 0;
}