ORG 0000H
LJMP MAIN
ORG 0003H
LJMP INT
ORG 0100H

MAIN: SETB EA
SETB EX0
SETB PX0
SETB IT0
LOOP1: MOV P1,#00H
LCALL DEL0
MOV P1,#0FFH
LCALL DEL0
AJMP LOOP1

INT: CLR EA
PUSH PSW
PUSH ACC
SETB EA
MOV R0, #2
SUB: MOV R1, #8
MOV A,#0FEH
LOOP2: MOV P1, A
LCALL DEL4
RL A
DJNZ R1, LOOP2
DJNZ R0, SUB
CLR EA
POP ACC
POP PSW
SETB EA
RETI

DEL0: MOV R7,#15
DEL1: MOV R6, #202
DEL2: MOV R5, #81
DEL3: DJNZ R5, DEL3
DJNZ R6, DEL2
DJNZ R7, DEL1
RET

DEL4: MOV R4,#15
DEL5: MOV R3, #202
DEL6: MOV R2, #81
DEL7: DJNZ R2, DEL7
DJNZ R3, DEL6
DJNZ R4, DEL5
RET

END

