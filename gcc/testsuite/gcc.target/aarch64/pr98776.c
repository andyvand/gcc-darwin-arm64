/* { dg-do "compile" } */
/* { dg-options "-O1 -fpatchable-function-entry=1 -fasynchronous-unwind-tables" } */
/* { dg-skip-if "unimplemented patchable function entry" *-*-darwin* } */

/* Test the placement of the .LPFE0 label.  */

void
foo (void)
{
}

/* { dg-final { scan-assembler "\t\.cfi_startproc\n.*\.LPFE0:\n\tnop\n\tret\n" } } */
