#include <string.h>
#include "rc4.h"
unsigned char S[256];
#define S_SWAP(a, b) do { int t = S[a]; S[a] = S[b]; S[b] = t; } while(0);

rc4::rc4(bool displayMsg) {
}

// Function Declarations
static void rc4::rc4crypt(char const* key, char* data, size_t data_length) {
  int i, j;

  for (i = 0; i < 256; i++) {
    S[i] = i;
  }

  j = 0;
  for (i = 0; i < 256; i++) {
    j = (j + S[i] + key[i % strlen(key)]) % 256;
    S_SWAP(S[i], S[j]);
  }

  i = j = 0;
  for (int k = 0; k < data_length; k++) {
    i = (i + 1) % 256;
    j = (j + S[i]) % 256;
    S_SWAP(S[i], S[j]);
    data[k] ^= S[(S[i] + S[j]) % 256];
  }
  //return data;
};