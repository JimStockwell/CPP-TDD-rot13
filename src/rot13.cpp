// (c) 2020 Jim Stockwell
// This code is licensed under MIT license
// (see http://opensource.org/licenses/MIT for details)

#include <string>
using namespace std;

/* start and end are inclusive */
static int isBetween(char start, char end, char ofInterest) {
    return( ofInterest>=start && ofInterest<=end );
}

static char transform(char source) {
    const int move = 13;

    if(isBetween('a','m',source) || isBetween('A','M',source)) {
        return(source+move);
    } else if (isBetween('n','z',source) || isBetween('N','Z',source)) {
        return(source-move);
    } else {
        return(source);
    }
}
    
/* transforms source, placing it in dest, and returning a reference to dest (for convenience */ 
string& transform(string& source, string& dest) {
    dest.assign("");
    for (auto it=begin(source); it!=end(source); it++) {
        dest.append(1,transform(*it));
    }
    return(dest);
}



