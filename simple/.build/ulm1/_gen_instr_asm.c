void
ulm_asm(uint32_t instr, char *s, size_t len)
{
    strncpy(s, "", len);
#define FMT_OPCODE ((instr) >> 24)
    switch (FMT_OPCODE) {
#undef FMT_OPCODE
        case 0x02: {
#define OP 	(((uint32_t) (instr) << 0) >> 24)
#define z 	(((uint32_t) (instr) << 8) >> 28)
#define y 	(((uint32_t) (instr) << 12) >> 28)
#define x 	(((uint32_t) (instr) << 16) >> 28)
            int64_t x_asmSuffix = x; 
#undef OP 
#undef z 
#undef y 
#undef x 
            snprintf(s, len, "halt %%%" PRId64 "", x_asmSuffix);
            } break;
        case 0x11: {
#define OP 	(((uint32_t) (instr) << 0) >> 24)
#define dest 	(((uint32_t) (instr) << 8) >> 28)
#define imm 	(((int32_t) (instr) << 12) >> 12)
            int64_t imm_asmSuffix = imm; int64_t dest_asmSuffix = dest; 
#undef OP 
#undef dest 
#undef imm 
            snprintf(s, len, "load %" PRId64 ", %%%" PRId64 "", imm_asmSuffix, dest_asmSuffix);
            } break;
        case 0x13: {
#define OP 	(((uint32_t) (instr) << 0) >> 24)
#define z 	(((uint32_t) (instr) << 8) >> 28)
#define y 	(((uint32_t) (instr) << 12) >> 28)
#define x 	(((uint32_t) (instr) << 16) >> 28)
            int64_t x_asmSuffix = x; int64_t y_asmSuffix = y; int64_t z_asmSuffix = z; 
#undef OP 
#undef z 
#undef y 
#undef x 
            snprintf(s, len, "add %%%" PRId64 ", %%%" PRId64 ", %%%" PRId64 "", x_asmSuffix, y_asmSuffix, z_asmSuffix);
            } break;
        case 0x17: {
#define OP 	(((uint32_t) (instr) << 0) >> 24)
#define z 	(((uint32_t) (instr) << 8) >> 28)
#define y 	(((uint32_t) (instr) << 12) >> 28)
#define x 	(((uint32_t) (instr) << 16) >> 28)
            int64_t x_asmSuffix = x; int64_t y_asmSuffix = y; int64_t z_asmSuffix = z; 
#undef OP 
#undef z 
#undef y 
#undef x 
            snprintf(s, len, "mul %%%" PRId64 ", %%%" PRId64 ", %%%" PRId64 "", x_asmSuffix, y_asmSuffix, z_asmSuffix);
            } break;
        case 0x14: {
#define OP 	(((uint32_t) (instr) << 0) >> 24)
#define z 	(((uint32_t) (instr) << 8) >> 28)
#define y 	(((uint32_t) (instr) << 12) >> 28)
#define x 	(((uint32_t) (instr) << 16) >> 28)
            int64_t x_asmSuffix = x; int64_t y_asmSuffix = y; int64_t z_asmSuffix = z; 
#undef OP 
#undef z 
#undef y 
#undef x 
            snprintf(s, len, "sub %%%" PRId64 ", %%%" PRId64 ", %%%" PRId64 "", x_asmSuffix, y_asmSuffix, z_asmSuffix);
            } break;
        case 0x18: {
#define OP 	(((uint32_t) (instr) << 0) >> 24)
#define z 	(((uint32_t) (instr) << 8) >> 28)
#define y 	(((uint32_t) (instr) << 12) >> 28)
#define x 	(((uint32_t) (instr) << 16) >> 28)
            int64_t x_asmSuffix = x; int64_t y_asmSuffix = y; int64_t z_asmSuffix = z; 
#undef OP 
#undef z 
#undef y 
#undef x 
            snprintf(s, len, "div %%%" PRId64 ", %%%" PRId64 ", %%%" PRId64 "", x_asmSuffix, y_asmSuffix, z_asmSuffix);
            } break;
        default:
            strncpy(s, "illegal instruction", len);
    }
}
