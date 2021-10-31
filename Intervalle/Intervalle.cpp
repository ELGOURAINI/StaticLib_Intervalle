#include "pch.h"
#include "Header.h"
#include <iostream>

using namespace math;
using namespace std;
int main()
{
    //création d'un intervalle
    Intervalle I('I', 2, 6, false, false);
    Intervalle J('J', 3, 5, true, true);
    I.afficher();

    //le max d'un intervalle
    int max = I.MAX();

    //le max d'un intervalle
    int min = I.MIN();

    //verification si un intervelle est inclus dans autre
    if (I.Est_inclus(J) == true)
    {
        cout << "J est inclus dans I" << endl;
    }
    else
    {
        cout << "J est n'est pas inclus dans I" << endl;
    }


}

