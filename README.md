# rc4crypto
RC4 Encryption Test for Arduino

I've tested this on ATMega328p but not much on anything else, although will probably work on a Mega2650 just fine.

Probably not a good idea to rely on RC4 for anything cryptographic but especially not when it's "own rolled". I think I've understood how to implement this correctly, however I would only advise using it as a collision avoidance and data integrity thing, rather than anything else :)
