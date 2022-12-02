#include <curses.h>
#include <iostream>
#include <math.h>
#include "variable.h"

using namespace std;
using namespace n_s_var;

#define z 3

#define do_square(x) (x)*(x)

#define modul(x) abs(x)

#define square_root(x) sqrt(x)
#define MAX(x,y,z)  ((do_square(x) + y + z) > (x*y*z)) ? do_square(x) + y + z : (x*y*z)
#define MIN(x,y,z)  ((do_square(x) + do_square(y + z)) > (x*y)) ? (x*y) : (do_square(x) + do_square(y + z))
#define cout_str(str) cout << str << endl << endl;
#define cout_var(str) cout << str;
#define cout_rezult(str, w) cout << str << w << endl;

int main(void)
{
        cout_var("x = ");
        cin >> x;

        cout_var("y = ");
        cin >> y;
    
#if(z < 5 && z > 0)
        w = MAX(x,y,z);
#else
    
        w = MIN(x,y,z);
#endif
    
        cout_rezult("w = ", w);
    
    return 0;
}
