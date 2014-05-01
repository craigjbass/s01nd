main(t) {
  for( t = 0;;t+=1) {
	char val = (t^(t>>3|t<<13)^0x80)&(t>>7|t>>8);
	val = (val/2) + 128; //clip the sound
	putchar(val);
  }
}
