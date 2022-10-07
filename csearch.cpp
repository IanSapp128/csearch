#include <iostream>
using namespace std;

void launchBrowser(string url)
{
    #ifdef __linux__
    string combUrl = "xdg-open " + url; // Use xdf-open if Linux
    #elif __APPLE__ || __MACH__
    string combUrl = "open " + url; // Use open if Mac
    #elif _WIN32
    string combUrl = "start " + url; // start if Windows
    #endif
    const char *c = combUrl.c_str(); //Convert the passed string to a const char before passing into system command
    system(c);
}

int main(int argc, char** argv)
{
    #ifdef _WIN32
    #elif __linux__ // Skip error check if the script runs on Mac or Linux
    #elif __APPLE__ || __MACH__
    #else
    cout << "Unknown system type. Not supported.\n";
    return 0;
    #endif

    int argNums = argc;
    string argVal;

    if (argc > 1) {
        argVal = argv[1]; //Get the val for arg1

    } else {
        cout << "Enter table name: "; //If no arg passed, prompt for table name
        cin >> argVal;
    }

    if (argVal[0] == 'B') {
        string URL = "https://api.census.gov/data/2020/acs/acs5/groups/" + argVal + ".html";
        launchBrowser(URL);
    } else if (argVal[0] == 'S'){
        string URL = "https://api.census.gov/data/2020/acs/acs5/subject/groups/" + argVal + ".html";
        launchBrowser(URL);
    } else if (argVal[0] == 'D'){
        string URL = "https://api.census.gov/data/2020/acs/acs5/profile/groups/" + argVal + ".html";
        launchBrowser(URL); 
    } else{
        cout<<"Not supported. Table name must begin with B, D, or S.\n";
    }

  return 0;
}