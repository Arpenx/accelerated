#include <stdexcept>
#include <algorithm>
#include "median.h"


double median(std::vector<double> vec)
{
    using namespace std;
    typedef vector<double>::size_type vec_sz;

    vec_sz size = vec.size();
    if(size == 0) 
        throw domain_error("median of an empty vector");
    
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;

    return
        size % 2 == 0 ?
        (vec[mid-1] + vec[mid]) / 2 :
        vec[mid];
}

