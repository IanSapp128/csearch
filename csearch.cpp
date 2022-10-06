#include <iostream>
using namespace std;

void launchBrowser(string url)
{
    #ifdef __linux__
    string combUrl = "xdg-open " + url; // Use xdf if Linux
    #elif __APPLE__ || __MACH__
    string combUrl = "open " + url; // Use open if Mac
    #endif
    const char *c = combUrl.c_str(); //Convert the passed string to a const char before passing into system command
    system(c);
}

int main(int argc, char** argv)
{
    #ifdef _WIN32
    cout << "Windows is not currently supported\n";
    return 0;
    #elif __linux__
    #elif __APPLE__ || __MACH__
    #else
    cout << "Unknown system type. Not supported.\n";
    return 0;
    #endif

    int argNums = argc;
    if (argc > 1) {
        string argVal = argv[1]; //Get the val for arg1

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

    } else {
        cout << "No argument passed\n";
    }

  return 0;
}