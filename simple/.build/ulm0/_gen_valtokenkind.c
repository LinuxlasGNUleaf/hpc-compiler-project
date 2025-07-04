const char *
valTokenKind(enum TokenKind kind)
{
    switch (kind) {
        case EOI:
            return "end of file";
        case BAD_TOKEN:
            return "bad token";
        case EOL:
            return "end of line";
        case IDENT:
            return "identifier";
        case COLON:
            return ":";
        case KLAMMERAFFE:
            return "@";
        case DOLLAR:
            return "$";
        case PERCENT:
            return "%";
        case LATTENZAUN:
            return "#";
        case COMMA:
            return ",";
        case LANGLE:
            return "<";
        case RANGLE:
            return ">";
        case LBRACE:
            return "{";
        case RBRACE:
            return "}";
        case LPAREN:
            return "(";
        case RPAREN:
            return ")";
        case LBRACKET:
            return "[";
        case RBRACKET:
            return "]";
        case BACKSLASH:
            return "\\";
        case DECIMAL_LITERAL:
            return "decimal literal";
        case HEXADECIMAL_LITERAL:
            return "hexadecimal literal";
        case CODE:
            return "code line";
        case NUM_TOKENKIND: /* cause internal error */;
            ;
    }
    fprintf(stderr, "in 'valTokenKind': internal error\n");
    abort();
    return 0;
}
