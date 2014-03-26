
#ifndef JSON_PROCESSING
/* code */

//includes
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#include <string>
#include <iostream>
#include <ostream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

//functions
static char* json_request(const char *url);
static size_t write_response(void *ptr, size_t size, size_t nmemb, void *stream);
void json_post(char* url, char* json_string);

int json_connect();

void json_send_data(map<string,double> mymap);
map<string,double> json_get_data(int id);
void json_send_command(string cmd,int id);
vector<string> json_get_commands(int id);

//void debug_print_vector(vector<string> myvector);

//void json_set_myID(int id);
//int json_get_myID();

#endif