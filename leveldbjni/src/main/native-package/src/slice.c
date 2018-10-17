#include "leveldbjni.h"

void slice_set_data(Slice *lpSlice, const char *data) {
  lpSlice->data_ = data;
}

void slice_set_size(Slice *lpSlice, size_t size) {
  lpSlice->size_ = size;
}
