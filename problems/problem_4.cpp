#include <string>
#include <sstream>


std :: string problemSolution4(const std::string &macAddress) {
    // write your code here
    if (macAddress == "FF:FF:FF:FF:FF:FF"){
        return "Broadcast";
    }
    else if ((macAddress[1] >= 'A') % 2 != 0 && (macAddress[1] >= '0') % 2 == 0){
        return "Multicast";
    }
    else {
        return "Unicast";
    }


    // make use of control flow statements
    // return result;
}

