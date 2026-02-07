#include "string.h"

int str_contains(char *base, char *text) {
  int base_len = strlen(base);
  int text_len = strlen(text);

  int y = 0;
  int counter = 0;

  for(int i = 0; i < base_len; i++) {
    if(base[i] == text[y]) {
      y++;
      counter++;
    }
  }

  if(counter != text_len) {
    return 1;
  }

  return 0;
}
