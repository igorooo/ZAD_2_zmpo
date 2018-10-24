#include <iostream>
#include <cstdlib>
#include "CMenu.h"
#include "CCommand.h"
#include "CMenuCommand.h"
#include "CTABLE/AddObject.h"
#include "CTABLE/ArrayLength.h"
#include "CTABLE/RmObject.h"
#include "CTABLE/RmAll.h"
#include "CTABLE/SetObjName.h"
#include "CTABLE/AddClone.h"
#include "CTABLE/GetInfo.h"
#include "CTABLE/SetVal.h"
#include "CTABLE/Zad1.h"

int main() {

    Zad1 *ZAD_1 = new Zad1();

    ZAD_1->run();



    /*CMenu *menu1 = new CMenu("MENU1","menu1");
    CMenu *menu2 = new CMenu("MENU2","menu2");
    CMenu *menu3 = new CMenu("MENU3","menu3");

    menu1->add_CMenuItem(menu2);
    menu1->add_CMenuItem(menu3);

    CCommand *COM = new CCommand("testCCommand");

    CMenuCommand *CMCOM = new CMenuCommand("CMCOM","comm",COM);

    menu1->add_CMenuItem(CMCOM);


    menu1->run();

    vector <CTable*> TABLE;

    CMenu *MENU = new CMenu("ZADANIE 1","zad1");

    AddObject *ADD_OBJ = new AddObject(TABLE);
    ArrayLength *ARRAY_LENGTH = new ArrayLength(TABLE);
    RmObject *REMOVE_OBJECT = new RmObject(TABLE);
    RmAll *REMOVE_ALL = new RmAll(TABLE);
    SetObjName *SET_OBJ_NAME = new SetObjName(TABLE);
    AddClone *ADD_CLONE = new AddClone(TABLE);
    GetInfo *GET_INFO = new GetInfo(TABLE);
    SetVal *SET_VAL = new SetVal(TABLE);



    //CMenuCommand *ADDOBJ = new CMenuCommand("add object","1",ADD_OBJ);
   // CMenuCommand *ARRAYLENGTH = new CMenuCommand("check length of array","2",ARRAY_LENGTH);

    vector <CMenuCommand*> CMENU_COMMAND_ARRAY;

    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("add object","1",ADD_OBJ));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("check length of array","2",ARRAY_LENGTH));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("remove object","3",REMOVE_OBJECT));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("remove all","4",REMOVE_ALL));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("set object name","5",SET_OBJ_NAME));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("add clone","6",ADD_CLONE));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("get info","7",GET_INFO));
    CMENU_COMMAND_ARRAY.push_back(new CMenuCommand("set val","8",SET_VAL));


    for(int i = 0; i < CMENU_COMMAND_ARRAY.size(); i++)
        MENU->add_CMenuItem(CMENU_COMMAND_ARRAY[i]);



    MENU->run();

    cout<<TABLE.size()<<endl;

     */



    return 0;
}