       ldr     r1,=0b10110101; number 1
       ldr     r2,=0b11001111; number 2
       ldr     r0,=0; counter
       ldr     r4,=0; temp register
       eor     r3,r1,r2;

Again  
       ands    r4,r3,#1;
       adds    r0,r0,r4;
       lsrs    r3,r3,#1;
       mov     r4,#0;
       cmp     r3,#0;
       bne     Again
