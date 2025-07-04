uint32_t
encodeInstr(enum CgSeg cgSeg, uint64_t addr, uint32_t opCode, va_list vl)
{
    uint32_t instr = 0;
    switch (opCode) {
            case 0x11:
            encodeOperand(&instr, 24, 8, opCode);
            encodeExprOperand(cgSeg, addr, &instr, 20, 4, UNSIGNED, va_arg(vl, struct Expr *));
            encodeExprOperand(cgSeg, addr, &instr, 0, 20, SIGNED, va_arg(vl, struct Expr *));
        break;
            case 0x02:
            case 0x13:
            case 0x17:
            case 0x14:
            case 0x18:
            encodeOperand(&instr, 24, 8, opCode);
            encodeExprOperand(cgSeg, addr, &instr, 20, 4, UNSIGNED, va_arg(vl, struct Expr *));
            encodeExprOperand(cgSeg, addr, &instr, 16, 4, UNSIGNED, va_arg(vl, struct Expr *));
            encodeExprOperand(cgSeg, addr, &instr, 12, 4, UNSIGNED, va_arg(vl, struct Expr *));
        break;
        default:;
    }

    return instr;
}
