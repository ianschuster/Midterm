#include "framework.h"
#include "UI.h"
#include "../app/app.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

UI::UI()
{
}

int UI::startUI()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("C:\\Users\\schla\\Desktop\\5th_Year_Class\\Spring\\SoftwareArchitecture\\Midterm\\UI");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    std::cout << translate("UI starting up") << std::endl;

    App appInstance;

    appInstance.startApp();

    return 0;
}