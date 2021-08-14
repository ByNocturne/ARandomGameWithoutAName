// System Combat

#include <iostream>
using namespace std;

int main() {
    
    // Xp gain
    int xp = 0;
    int xpToUp = 100;

    while((xp < xpToUp)){                                               

        xp += 20;
        cout << "Your xp is: " << xp << " / " << xpToUp << endl;

    }

    // UP para o lvl 2
    int personLife = 100;
    const float constUpLvl = 0.3;
    short personLvl = 1;    

    if( xp == xpToUp) {

        xpToUp = xp + 100;
        personLife + personLvl * (0.3 * personLife);
        cout << "Your lvl is " << personLvl + 1 << " now!" << endl;

    }   

    // Xp gain
    while((xp < xpToUp)){                                               

        xp += 20;
        cout << "Your xp is: " << xp << " / " << xpToUp << endl;

    }

    return 0;

}