main(t) {
  for( t = 0;;t+=1)
	putchar(t*(t>>7|t>>3|t>>19)&0x80);
}
