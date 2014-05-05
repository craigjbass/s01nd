main(t) {
  for( t = 0;;t+=1) {
        unsigned int val = (((t*(t>>5|t>>9)&t>>13))+((t>>5)&0x80));
	putchar( (val/2)+128 );
	
  }
}
