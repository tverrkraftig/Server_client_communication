#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
/*
int connect();

int disconnect();

map <int,string> server_get_client_list();

void server_send_status(map<string,string> status);

map<string,string> server_get_status(int id);

*/
void server_send_data(map<string,double> data);

map <string,double> server_get_data(int id);

void server_send_command(string command,int id);

vector<string> server_get_commands(int id);



void server_set_myID(int id);

int server_get_myID();



class connectException;
class disconnectException;
class sendException;
class getException;
class jsonException;
