#ifndef LAV_H_
#define LAV_H_

#include <vector>
#include "../utilities/utilities.h"
using std::vector;
using std::string;

class Lav {

public:
    /*Retrieve relevant descriptions for a query image*/
    vector<utilities::CaptionArray> describeImg(const utilities::DataArray& queryItem, vector<utilities::DataArray>& candidataSet);
    double oovRate = 0;
};


#endif