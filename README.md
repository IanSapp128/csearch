# csearch
Wanted to refamiliarize myself with C++ so I decide to port my [Go application](https://github.com/IanSapp128/Census-Search) to it. It is a utility that pulls up the API documentation for the census table you provide it. Supported tables are **Detailed Tables**, **Subject Tables**, and **Data Profiles** for ACS 5 year survey data. I use this application almost daily for my job and figured I'd share it.

I initially created this project as a Python script but startup time was pretty slow, so I wanted to try and make it with a compiled language. Currently works on Linux, Mac, and Windows.

Should now be feature complete with the original Go version. This will be the main project going forward if any changes are to be added. There is also now a [bash script](https://github.com/IanSapp128/csearch-bash) version for quick copy/pasting needs.