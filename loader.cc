#include <bfd.h>
#include "loader.h"

//load and parse binary file specified by name 
int load_binary(std::string &fname, Binary *bin, Binary::BinaryType type) {
    return load_binary_bfd(fname, bin, type); //coming soon
}

//unloads the binary by releasing the dynamically allocated components 
void unload_binary(Binary *bin) { 
    size_t i;
    Section *sec;

    for(i=0; i < bin->sections.size(); i++) {
        sec = &bin->sections[i];
        if(sec->bytes) {
            free(sec->bytes);
        }
    }
}

//section 4.3.1 and listing 4-4