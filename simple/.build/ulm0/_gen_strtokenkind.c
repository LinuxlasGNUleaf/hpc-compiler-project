const char *
strTokenKind(enum TokenKind kind)
{
    switch (kind) {
        case EOI:
            return "EOI";
        case BAD_TOKEN:
            return "BAD_TOKEN";
        case EOL:
            return "EOL";
        case IDENT:
            return "IDENT";
        case COLON:
            return "COLON";
        case KLAMMERAFFE:
            return "KLAMMERAFFE";
        case DOLLAR:
            return "DOLLAR";
        case PERCENT:
            return "PERCENT";
        case LATTENZAUN:
            return "LATTENZAUN";
        case COMMA:
            return "COMMA";
        case LANGLE:
            return "LANGLE";
        case RANGLE:
            return "RANGLE";
        case LBRACE:
            return "LBRACE";
        case RBRACE:
            return "RBRACE";
        case LPAREN:
            return "LPAREN";
        case RPAREN:
            return "RPAREN";
        case LBRACKET:
            return "LBRACKET";
        case RBRACKET:
            return "RBRACKET";
        case BACKSLASH:
            return "BACKSLASH";
        case DECIMAL_LITERAL:
            return "DECIMAL_LITERAL";
        case HEXADECIMAL_LITERAL:
            return "HEXADECIMAL_LITERAL";
        case CODE:
            return "CODE";
        case NUM_TOKENKIND: /* cause internal error */;
            ;
    }
    fprintf(stderr, "in 'strTokenKind': internal error\n");
    abort();
    return 0;
}
