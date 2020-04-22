#include <stdio.h>
#include "cstring.h"

int main() {
  string * new_string = cstring(NULL);

  append(new_string, "world");
  prepend(new_string, "hello ");

  rem(new_string, 0);

  string * subst = substrn(new_string, 1, 4);

  int i = find(subst, "lo");

  printf("%d\n", i);

  printf("%s\n", new_string->str);
  printf("%s\n", subst->str);

  delete_all();
}
