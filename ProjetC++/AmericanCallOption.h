#pragma once
#include "AmericanOption.h"

class AmericanCallOption : public AmericanOption
{
	public:
		//Constructor for AmericanCallOption, uses the one from AmericanOption
		AmericanCallOption(double expiry, double strike);

		//Payoff method for an American Call option
		double payoff(double z) const override;

		//GetOptionType method for a Call option
		optionType GetOptionType() const override;
};
