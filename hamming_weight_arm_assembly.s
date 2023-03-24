       mov     r0, #0 ; r0 is counter register
       ldr     r1,=0b10101100;

       ands    r0, r1, #1 
Again  

       lsrs    r1, r1, #1
       ands    r4, r1, #1 
       adds    r0, r0, r4 
       movs    r4,#0
       cmp     r1, #0 
       bne     Again 