//
// Created by stycks on 14/03/2021.
//
#include <iostream>
#include "snowman.hpp"

using namespace std;
using namespace ariel;

int main(){
    cout << snowman(11114411) << endl;   /* Should print:
_===_
(.,.)
( : )
( : )
	*/
    cout << snowman(33232124) << endl;   /* Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
    return 0;
}