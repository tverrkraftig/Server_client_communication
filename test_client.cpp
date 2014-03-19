
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>

#include <jansson.h>
#include <curl/curl.h>

#include "server_communication.h"

using namespace std;

int myID=5;

int main(int argc, char *argv[]){
    printf("\n");
    //
    map<string,double> debug_map;
    debug_map["test1"]=8.9;
    debug_map["test2"]=5678.456;

    string command1="command_one";
    string command2="command two";

    server_set_myID(myID);
    server_send_data(debug_map);
    server_get_data(myID);
    server_send_command(command1,myID);
    server_send_command(command2,myID);
    server_get_commands(myID);
    return 0;
}