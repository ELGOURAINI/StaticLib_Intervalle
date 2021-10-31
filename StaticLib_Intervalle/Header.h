#pragma once
#pragma once

namespace math
{
	class Intervalle
	{
	private:
		char nom;
		double bornesup;
		double borneinf;
		bool Cleft;
		bool  Cright;

	public:
		Intervalle(char nom, double inf, double sup, bool CL, bool CR);
		//Intervalle(Intervalle& I);
		//void operator();
		//void operator()();
		double MAX() const;
		double MIN() const;
		bool Est_inclus(const Intervalle& I) const;
		void afficher() const;

	};
}


