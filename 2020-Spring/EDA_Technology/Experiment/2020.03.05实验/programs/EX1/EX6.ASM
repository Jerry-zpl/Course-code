ORG  0100H
MOV 40H, #15H
MOV R2, #36H
MOV A, #89H
ADD A, 40H
ADD A, R2
MOV 50H, A
SUBB A, 40H
MOV 60H, A
MOV 15H, #75H
MOV 33H, #31H
MOV A, 15H
MOV B, 33H
MUL AB
MOV 30H, A
MOV 31H, B
MOV A, 15H
MOV B, 33H
DIV AB
MOV 41H, A
MOV 40H, B
END