/* { dg-do compile } */
/* { dg-additional-options "-march=armv8.2-a+fp16" } */

int main ()
{
  return 0;
}

/* { dg-final { scan-assembler {\.arch armv8\.2-a\+crc\+fp16\n} { target { ! *-*-darwin* } } } } */
/* { dg-final { scan-assembler {\.arch armv8\.2-a\+fp16} { target *-*-darwin* } } } */

 /* fp16 not default, should be emitted.  */
