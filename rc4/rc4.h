#ifndef rc4_h
#define rc4_h
#include <rc4.h>

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class rc4 {
  public:
    // Constructor
        rc4(bool displayMsg=false);
    // Methods    
        static void rc4crypt(char const* key, char* data, size_t data_length);

  private:

};
#endif
