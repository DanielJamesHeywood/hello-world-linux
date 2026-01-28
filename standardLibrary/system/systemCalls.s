.text
.align 2

.global write
write:
    mov x8, #64
    svc #0x80
    ret