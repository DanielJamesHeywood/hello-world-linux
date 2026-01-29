.text
.align 2

.global write
write:
    mov x8, #64
    svc #0x80
    ret

.global exit
exit:
    mov x8, #93
    svc #0x80