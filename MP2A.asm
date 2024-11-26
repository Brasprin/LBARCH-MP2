section .data

   

section .text
global asmCalculateDistance


asmCalculateDistance:
      
        subss xmm0, xmm1    ; (x1 - x2)
        subss xmm2, xmm3    ; (y1 - y2)
        
        movss xmm1, xmm0
        mulss xmm0, xmm1    ; (x1 - x2)^2
        
        movss xmm3, xmm2
        mulss xmm2, xmm3    ; (y1 - y2)^2
        
        
        addss xmm0, xmm2    ; ((x1 - x2)^2) +((y1 - y2)^2)
        
        sqrtss xmm0, xmm0   ; sqrt(((x1 - x2)^2) +((y1 - y2)^2))

        
        xor rax,rax
        ret
        
