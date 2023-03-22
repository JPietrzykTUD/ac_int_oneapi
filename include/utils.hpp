#ifndef UTILS_HPP
#define UTILS_HPP

constexpr long operator""_KiB(unsigned long long const x){ 
    return 1024L*x; 
}

constexpr long operator""_MiB(unsigned long long const x){ 
    return 1024L*1024L*x; 
}

constexpr long operator""_GiB(unsigned long long const x){ 
    return 1024L*1024L*1024L*x; 
}

constexpr long operator""_KB(unsigned long long const x){ 
    return 1000*x; 
}

constexpr long operator""_MB(unsigned long long const x){ 
    return 1000L*1000L*x; 
}

constexpr long operator""_GB(unsigned long long const x){ 
    return 1000L*1000L*1000L*x; 
}

#endif