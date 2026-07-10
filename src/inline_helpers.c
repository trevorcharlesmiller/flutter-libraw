#include <libraw.h>

// This native function does the pointer lookup inside C so Dart doesn't guess offsets
char* get_thumbnail_pointer(libraw_data_t* ptr) {
    return ptr->thumbnail.thumb;
}

unsigned int get_thumbnail_length(libraw_data_t* ptr) {
    return ptr->thumbnail.tlength;
}

