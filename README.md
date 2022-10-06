# csearch
Wanted to refamiliarize myself with C++ so I decide to port my [Go application](https://github.com/IanSapp128/Census-Search) to it. It is a utility that pulls up the API documentation for the census table you provide it. Supported tables are **Detailed Tables**, **Subject Tables**, and **Data Profiles** for ACS 5 year survey data. I use this application almost daily for my job and figured I'd share it.

I initially created this project as a Python script but startup time was pretty slow, so I wanted to try and make it with a compiled language. Currently works on Linux and Mac. I will add Windows functionality later when I am at a Windows machine and can test.

**Changes between versions**  
The Go version has both the ability to pass the table name as an argument to get an instant browser window and a prompt for the user to enter a table name if nothing is passed. This is good if you want to create a shortcut and throw it on your taskbar like I do. Passing an arg to it is meant to be a fast way to search in the terminal when you have it open. I plan on adding the same functionality to this version when I have some more time (next update)
