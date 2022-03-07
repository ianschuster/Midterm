
#include "framework.h"
#include "CoreLibrary.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

// This is the constructor of a class that has been exported.
MathEngine::MathEngine()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    std::cout << translate("Math engine booted up") << std::endl;
}

void MathEngine::useMathEngine()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("C:\\Users\\schla\\Desktop\\5th_Year_Class\\Spring\\SoftwareArchitecture\\Midterm\\CoreLibrary");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    std::cout << translate("Math engine being used") << std::endl;
}
