main(t) {
  int i = 0;
  for( t = 0;;t+=1) {
        i = t>>((t>>7)|t>>i);
	char val = ((t>>3|t<<7|t>>i)^0x80);	
	val = (val/2) + 128; //clip the sound
	putchar(val);
  }
}
