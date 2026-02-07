#include "seq.h"
#include "../../extensions/string/string.h"

Dna seq_dna(char *value) {
  if(str_contains(value, "T") == 0 && str_contains(value, "C") == 0 && str_contains(value, "A") && str_contains(value, "G")) {
    return value;
  }

  return "";
}

Rna seq_rna(char *value) {
  
}
