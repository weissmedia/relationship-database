#include <iostream>
#include <vector>

class prof {

private:

int num;
std::string name;
std::string uni;
int jahr;
std::string betreuer;
int doktorand;

public:

prof(int new_num, std::string new_name, std::string new_uni, int new_jahr, int new_betreuer, int new_doktorand);

std::string view_prof();







};