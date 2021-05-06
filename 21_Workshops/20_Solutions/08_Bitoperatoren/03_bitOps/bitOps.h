
//setzt das n‐te Bit auf “1”.
void setBitNInByte( unsigned char* data, unsigned char bitN);


//setzt das n‐te Bit auf “0”
void clearBitNInByte( unsigned char* data, unsigned char bitN );


//wechselt das n‐te Bit. Falls es «1» ist, dann wird es «0» gesetzt, oder umgekehrt.
void toggleBitNInByte( unsigned char* data, unsigned char bitN );


//falls das n‐te Bit gesetzt ist, gibt die Funktion «1» zurück, sonst «0».
unsigned char BitNIsSet(unsigned char data, unsigned char bitN);
