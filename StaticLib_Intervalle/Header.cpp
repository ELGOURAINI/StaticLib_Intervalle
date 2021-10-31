#include "pch.h"
#include "Header.h"
#include <iostream>

using namespace math;
using namespace std;

math::Intervalle::Intervalle(char nom, double inf, double sup, bool CL, bool CR)
{
    this->nom = nom;
    this->borneinf = inf;
    this->bornesup = sup;
    this->Cleft = CL;
    this->Cright = CR;
}

/**math::Intervalle::Intervalle(Intervalle& I)
{
    I.bornesup = this->bornesup;
    I.borneinf = this->borneinf;
    I.Cleft = this->Cleft;
    I.Cright = this->Cright;
}**/


double math::Intervalle::MAX() const
{
    if (this->Cright == true)
    {
        cout << "le maximum de l'intervalle " << this->nom << " est :" << this->bornesup << endl;
    }
    else
    {
        cout << "l'intervalle est ouvert a droite , donc " << this->nom << " n'admet de maximum" << endl;
    }
    return this->bornesup;
}

double math::Intervalle::MIN() const
{
    if (this->Cleft == true)
    {
        cout << "le minimum de l'intervalle " << this->nom << " est :" << this->borneinf << endl;

    }
    else
    {
        cout << "l'intervalle est ouvert a gauche , donc " << this->nom << " n'admet de minimum" << endl;
    }
    return this->borneinf;
}

bool math::Intervalle::Est_inclus(const Intervalle& I) const
{
    if (this->Cleft == true)
    {
        if (this->Cright == true)
        {
            if (I.borneinf >= this->borneinf && I.borneinf < this->bornesup
                && I.bornesup <= this->bornesup && I.bornesup > this->borneinf
                )
                return true;
            return false;
        }
        else
        {
            if (I.borneinf >= this->borneinf && I.borneinf < this->bornesup
                && I.bornesup < this->bornesup && I.bornesup > this->borneinf
                )
                return true;
            return false;
        }
    }
    else
    {
        if (this->Cright == true)
        {
            if (I.borneinf > this->borneinf && I.borneinf < this->bornesup
                && I.bornesup <= this->bornesup && I.bornesup > this->borneinf
                )
                return true;
            return false;
        }
        else
        {
            if (I.borneinf > this->borneinf && I.borneinf < this->bornesup
                && I.bornesup < this->bornesup && I.bornesup > this->borneinf
                )
                return true;
            return false;
        }
    }
    return false;
}

void math::Intervalle::afficher() const
{
    if (this->Cleft == true)
    {
        if (this->Cright == true)
        {
            cout << this->nom << " = " << "[" << this->borneinf << "," << this->bornesup << "]" << endl;
        }
        else
        {
            cout << this->nom << " = " << "[" << this->borneinf << "," << this->bornesup << "[" << endl;
        }
    }
    else
    {
        if (this->Cright == true)
        {
            cout << this->nom << " = " << "]" << this->borneinf << "," << this->bornesup << "]" << endl;
        }
        else
        {
            cout << this->nom << " = " << "]" << this->borneinf << "," << this->bornesup << "[" << endl;
        }
    }
}

