#include "VetMed_utils.h"

char *retreive_str(const char *const *str_table, int index) {
    strncpy_P(str_buffer, (char *) pgm_read_byte_near(&(str_table[index])), STR_BUFFER_LEN);
    str_buffer[STR_BUFFER_LEN - 1] = '\0';
    return (char *) &str_buffer;
}
