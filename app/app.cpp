// app.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "app.h"
#include "../multiplication/Multiplication.h"
#include "../adding/adding.h"
#include "../division/division.h"
#include "../subtracting/subtracting.h"
#include "../CoreLibrary/CoreLibrary.h"
#include <boost/locale.hpp>
#include <iostream>

using namespace std;
using namespace boost::locale;

App::App()
{
}

int App::startApp()
{

    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("C:\\Users\\schla\\Desktop\\5th_Year_Class\\Spring\\SoftwareArchitecture\\Midterm\\app");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    std::cout << translate("App firing up") << std::endl;

    MathEngine mathInstance;
    Division divider;
    Addition adder;
    Subtraction subtractor;
    Multiplication multiplier;

    int a = 1;
    int b = 2;

    adder.AddNumbers(a, b, mathInstance);
    divider.DivideNumbers(a, b, mathInstance);
    subtractor.SubtractNumbers(a, b, mathInstance);
    multiplier.MultiplyNumbers(a, b, mathInstance);

    return 0;
}