#define FMT_OPCODE ((ulm_instrReg) >> 24)
    switch (FMT_OPCODE) {
#undef FMT_OPCODE
        case 0x02:
            {
#define OP 	(((uint32_t) (ulm_instrReg) << 0) >> 24)
#define z 	(((uint32_t) (ulm_instrReg) << 8) >> 28)
#define y 	(((uint32_t) (ulm_instrReg) << 12) >> 28)
#define x 	(((uint32_t) (ulm_instrReg) << 16) >> 28)
                ulm_halt(ulm_regVal(x));
#undef OP 
#undef z 
#undef y 
#undef x 
            }
            break;
        case 0x11:
            {
#define OP 	(((uint32_t) (ulm_instrReg) << 0) >> 24)
#define dest 	(((uint32_t) (ulm_instrReg) << 8) >> 28)
#define imm 	(((int32_t) (ulm_instrReg) << 12) >> 12)
                ulm_setReg(imm, dest);
#undef OP 
#undef dest 
#undef imm 
            }
            break;
        case 0x13:
            {
#define OP 	(((uint32_t) (ulm_instrReg) << 0) >> 24)
#define z 	(((uint32_t) (ulm_instrReg) << 8) >> 28)
#define y 	(((uint32_t) (ulm_instrReg) << 12) >> 28)
#define x 	(((uint32_t) (ulm_instrReg) << 16) >> 28)
                ulm_add64(ulm_regVal(x), ulm_regVal(y), z);
#undef OP 
#undef z 
#undef y 
#undef x 
            }
            break;
        case 0x17:
            {
#define OP 	(((uint32_t) (ulm_instrReg) << 0) >> 24)
#define z 	(((uint32_t) (ulm_instrReg) << 8) >> 28)
#define y 	(((uint32_t) (ulm_instrReg) << 12) >> 28)
#define x 	(((uint32_t) (ulm_instrReg) << 16) >> 28)
                ulm_mul64(ulm_regVal(x), ulm_regVal(y), z);
#undef OP 
#undef z 
#undef y 
#undef x 
            }
            break;
        case 0x14:
            {
#define OP 	(((uint32_t) (ulm_instrReg) << 0) >> 24)
#define z 	(((uint32_t) (ulm_instrReg) << 8) >> 28)
#define y 	(((uint32_t) (ulm_instrReg) << 12) >> 28)
#define x 	(((uint32_t) (ulm_instrReg) << 16) >> 28)
                ulm_sub64(ulm_regVal(x), ulm_regVal(y), z);
#undef OP 
#undef z 
#undef y 
#undef x 
            }
            break;
        case 0x18:
            {
#define OP 	(((uint32_t) (ulm_instrReg) << 0) >> 24)
#define z 	(((uint32_t) (ulm_instrReg) << 8) >> 28)
#define y 	(((uint32_t) (ulm_instrReg) << 12) >> 28)
#define x 	(((uint32_t) (ulm_instrReg) << 16) >> 28)
                ulm_idiv64(ulm_regVal(x), ulm_regVal(y), z);
#undef OP 
#undef z 
#undef y 
#undef x 
            }
            break;
        default:
#define FMT_OPCODE ((ulm_instrReg) >> 24)
            illegalInstr(FMT_OPCODE);
#undef FMT_OPCODE
    }
