ORG 0100H
MOV PSW, #08H
MOV R0, #01H
MOV R1, #02H
MOV R2, #03H
MOV R3, #04H
MOV R4, #05H
MOV R5, #06H
MOV R6, #07H
MOV R7, #08H
MOV 30H, #31H
MOV 31H, #32H
MOV 32H, #33H
MOV 33H, #34H
MOV 34H, #35H
MOV 35H, #36H
MOV 36H, #37H
MOV 37H, #38H
PUSH 30H
PUSH 31H
PUSH 32H
PUSH 33H
PUSH 34H
PUSH 35H
PUSH 36H
PUSH 37H
POP 40H
POP 41H
POP 42H
POP 43H
POP 44H
POP 45H
POP 46H
POP 47H
MOV SP, #0FH
POP 57H
POP 56H
POP 55H
POP 54H
POP 53H
POP 52H
POP 51H
POP 50H
MOV SP, #60H
PUSH 40H
PUSH 41H
PUSH 42H
PUSH 43H
PUSH 44H
PUSH 45H
PUSH 46H
PUSH 47H
POP 48H
POP 49H
POP 4AH
POP 4BH
POP 4CH
POP 4DH
POP 4EH
POP 4FH
END