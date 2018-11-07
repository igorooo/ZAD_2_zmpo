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

/*

    CMenu *MAIN = new CMenu("Menu glowne","main");
    CMenu *MENU1 = new CMenu("Podmenu1","menu1");
    CMenu *MENU2 = new CMenu("Podmenu2","menu2");
    CMenu *MENU11 = new CMenu("Podmenu11","menu11");


    CCommand *COM = new CCommand("Ala ma kota");
    CCommand *COM2 = new CCommand("test");
    CCommand *COM3 = new CCommand();

    CMenuCommand *CMCOM1 = new CMenuCommand("Napisz Ala ma kota","ala",COM);
    CMenuCommand *CMCOM2 = new CMenuCommand("Uruchom przegladarke","internet");
    CMenuCommand *CMCOM3 = new CMenuCommand("Test","test",COM2);
    CMenuCommand *CMCOM4 = new CMenuCommand("Default command2","defcom",COM3);

    MAIN->add_CMenuItem(MENU1);
    MAIN->add_CMenuItem(MENU2);
    MAIN->add_CMenuItem(CMCOM1);
    MENU1->add_CMenuItem(CMCOM2);
    MENU1->add_CMenuItem(MENU11);
    MENU2->add_CMenuItem(CMCOM3);
    MENU2->add_CMenuItem(CMCOM4);


    MAIN->show_leafs();

    MAIN->run();

    /*

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