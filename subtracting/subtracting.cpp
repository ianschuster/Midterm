// subtracting.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "subtracting.h"
#include <iostream>
#include <boost/locale.hpp>
#include "../CoreLibrary/CoreLibrary.h"

using namespace std;
using namespace boost::locale;

Subtraction::Subtraction()
{
}

void Subtraction::SubtractNumbers(int a, int b, MathEngine& mathInstance) {
	mathInstance.useMathEngine();
	
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("C:\\Users\\schla\\Desktop\\5th_Year_Class\\Spring\\SoftwareArchitecture\\Midterm\\subtracting");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

	std::cout << translate("Numbers are subtracted") << std::endl;
}