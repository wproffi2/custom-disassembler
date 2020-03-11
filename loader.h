#include LOADER_H
#define LOADER_H

#include <stdint.h>
#include <string>
#include <vector>

//define classes
class Symbol;

class Symbol {
    /*
    exposes only the function symbols for binaries 
    */
    public:
        enum SymbolType {
            SYM_TYPE_UKN = 0,
            SYM_TYPE_FUNC = 1
        };

        Symbol() : type(SYM_TYPE_UKN), name(), addr(0) {}
        SymbolType type;
        std::string name;
        uint64_t addr;
};