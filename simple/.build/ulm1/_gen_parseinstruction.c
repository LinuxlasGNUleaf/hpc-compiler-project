static bool
parse_like_halt(uint32_t opCode1)
{
    // key: %<expr>\n{0,0,1}
    struct Expr *expr[4] = { 0, 0, 0, 0, };
    expr[0] = expr[0]; // prevent warning if unused
    expected(PERCENT); commentAddCurrentToken(); getToken();
    if (!(expr[1] = parseExpression())) {
        error("expression expected\n");
        return false;
    }
    commentAddExpr(expr[1]);
    expected(EOL); commentAddCurrentToken(); getToken();
    cgAppendInstr(opCode1, expr[0], expr[0], expr[1]);
    return true;
}

static bool
parse_like_load(uint32_t opCode1)
{
    // key: <expr>,%<expr>\n{2,1}
    struct Expr *expr[3] = { 0, 0, 0, };
    expr[0] = expr[0]; // prevent warning if unused
    if (!(expr[1] = parseExpression())) {
        error("expression expected\n");
        return false;
    }
    commentAddExpr(expr[1]);
    expected(COMMA); commentAddCurrentToken(); getToken();
    expected(PERCENT); commentAddCurrentToken(); getToken();
    if (!(expr[2] = parseExpression())) {
        error("expression expected\n");
        return false;
    }
    commentAddExpr(expr[2]);
    expected(EOL); commentAddCurrentToken(); getToken();
    cgAppendInstr(opCode1, expr[2], expr[1]);
    return true;
}

static bool
parse_like_add(uint32_t opCode1)
{
    // key: %<expr>,%<expr>,%<expr>\n{3,2,1}
    struct Expr *expr[4] = { 0, 0, 0, 0, };
    expr[0] = expr[0]; // prevent warning if unused
    expected(PERCENT); commentAddCurrentToken(); getToken();
    if (!(expr[1] = parseExpression())) {
        error("expression expected\n");
        return false;
    }
    commentAddExpr(expr[1]);
    expected(COMMA); commentAddCurrentToken(); getToken();
    expected(PERCENT); commentAddCurrentToken(); getToken();
    if (!(expr[2] = parseExpression())) {
        error("expression expected\n");
        return false;
    }
    commentAddExpr(expr[2]);
    expected(COMMA); commentAddCurrentToken(); getToken();
    expected(PERCENT); commentAddCurrentToken(); getToken();
    if (!(expr[3] = parseExpression())) {
        error("expression expected\n");
        return false;
    }
    commentAddExpr(expr[3]);
    expected(EOL); commentAddCurrentToken(); getToken();
    cgAppendInstr(opCode1, expr[3], expr[2], expr[1]);
    return true;
}

bool
parseInstruction(void)
{
    bool ok = false;
    if (MNEMONIC_FIRST == MNEMONIC_END || token.kind < MNEMONIC_FIRST || token.kind >= MNEMONIC_END) {
        return false;
    }
    commentClear(); commentAddCurrentToken();
    enum TokenKind mnem = token.kind; getToken();
    switch(mnem) {
        case HALT:
            ok = parse_like_halt(0x02);
            break;
        case LOAD:
            ok = parse_like_load(0x11);
            break;
        case ADD:
            ok = parse_like_add(0x13);
            break;
        case MUL:
            ok = parse_like_add(0x17);
            break;
        case SUB:
            ok = parse_like_add(0x14);
            break;
        case DIV:
            ok = parse_like_add(0x18);
            break;
        default:
            assert(0);
    }
    cgAppendComment(commentGetCStr());
    return ok;
}
