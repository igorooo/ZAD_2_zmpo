#include <iostream>
#include <cstdlib>
#include "CMenu.h"
#include "CCommand.h"
#include "CMenuCommand.h"
#include "CTABLE/AddObject.h"


int main() {

    /*CMenu *menu1 = new CMenu("MENU1","menu1");
    CMenu *menu2 = new CMenu("MENU2","menu2");
    CMenu *menu3 = new CMenu("MENU3","menu3");

    menu1->add_CMenuItem(menu2);
    menu1->add_CMenuItem(menu3);

    CCommand *COM = new CCommand("testCCommand");

    CMenuCommand *CMCOM = new CMenuCommand("CMCOM","comm",COM);

    menu1->add_CMenuItem(CMCOM);


    menu1->run(); */

    vector <CTable*> TABLE;

    CMenu *MENU = new CMenu("ZADANIE 1","zad1");

    AddObject *ADD_OBJ = new AddObject(TABLE);

    CMenuCommand *ADDOBJ = new CMenuCommand("add object","1",ADD_OBJ);

    MENU->add_CMenuItem(ADDOBJ);

    MENU->run();



    return 0;
}