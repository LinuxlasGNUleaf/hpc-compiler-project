    if (ch == '.') {
        nextCh();
        if (ch == 'a') {
            nextCh();
            if (ch == 'l') {
                nextCh();
                if (ch == 'i') {
                    nextCh();
                    if (ch == 'g') {
                        nextCh();
                        if (ch == 'n') {
                            nextCh();
                            copyCStrToStr(&token.val, ".align");
                            token.kind = DOT_ALIGN;
                            return token.kind;
                        }
                    }
                }
            }
        }
        if (ch == 'b') {
            nextCh();
            if (ch == 's') {
                nextCh();
                if (ch == 's') {
                    nextCh();
                    copyCStrToStr(&token.val, ".bss");
                    token.kind = DOT_BSS;
                    return token.kind;
                }
            }
            if (ch == 'y') {
                nextCh();
                if (ch == 't') {
                    nextCh();
                    if (ch == 'e') {
                        nextCh();
                        copyCStrToStr(&token.val, ".byte");
                        token.kind = DOT_BYTE;
                        return token.kind;
                    }
                }
            }
        }
        if (ch == 'd') {
            nextCh();
            if (ch == 'a') {
                nextCh();
                if (ch == 't') {
                    nextCh();
                    if (ch == 'a') {
                        nextCh();
                        copyCStrToStr(&token.val, ".data");
                        token.kind = DOT_DATA;
                        return token.kind;
                    }
                }
            }
        }
        if (ch == 'e') {
            nextCh();
            if (ch == 'q') {
                nextCh();
                if (ch == 'u') {
                    nextCh();
                    copyCStrToStr(&token.val, ".equ");
                    token.kind = DOT_EQU;
                    return token.kind;
                }
            }
        }
        if (ch == 'g') {
            nextCh();
            if (ch == 'l') {
                nextCh();
                if (ch == 'o') {
                    nextCh();
                    if (ch == 'b') {
                        nextCh();
                        if (ch == 'a') {
                            nextCh();
                            if (ch == 'l') {
                                nextCh();
                                copyCStrToStr(&token.val, ".global");
                                token.kind = DOT_GLOBAL;
                                return token.kind;
                            }
                        }
                        if (ch == 'l') {
                            nextCh();
                            copyCStrToStr(&token.val, ".globl");
                            token.kind = DOT_GLOBL;
                            return token.kind;
                        }
                    }
                }
            }
        }
        if (ch == 'l') {
            nextCh();
            if (ch == 'o') {
                nextCh();
                if (ch == 'n') {
                    nextCh();
                    if (ch == 'g') {
                        nextCh();
                        copyCStrToStr(&token.val, ".long");
                        token.kind = DOT_LONG;
                        return token.kind;
                    }
                }
            }
        }
        if (ch == 'q') {
            nextCh();
            if (ch == 'u') {
                nextCh();
                if (ch == 'a') {
                    nextCh();
                    if (ch == 'd') {
                        nextCh();
                        copyCStrToStr(&token.val, ".quad");
                        token.kind = DOT_QUAD;
                        return token.kind;
                    }
                }
            }
        }
        if (ch == 's') {
            nextCh();
            if (ch == 'p') {
                nextCh();
                if (ch == 'a') {
                    nextCh();
                    if (ch == 'c') {
                        nextCh();
                        if (ch == 'e') {
                            nextCh();
                            copyCStrToStr(&token.val, ".space");
                            token.kind = DOT_SPACE;
                            return token.kind;
                        }
                    }
                }
            }
            if (ch == 't') {
                nextCh();
                if (ch == 'r') {
                    nextCh();
                    if (ch == 'i') {
                        nextCh();
                        if (ch == 'n') {
                            nextCh();
                            if (ch == 'g') {
                                nextCh();
                                copyCStrToStr(&token.val, ".string");
                                token.kind = DOT_STRING;
                                return token.kind;
                            }
                        }
                    }
                }
            }
        }
        if (ch == 't') {
            nextCh();
            if (ch == 'e') {
                nextCh();
                if (ch == 'x') {
                    nextCh();
                    if (ch == 't') {
                        nextCh();
                        copyCStrToStr(&token.val, ".text");
                        token.kind = DOT_TEXT;
                        return token.kind;
                    }
                }
            }
        }
        if (ch == 'w') {
            nextCh();
            if (ch == 'o') {
                nextCh();
                if (ch == 'r') {
                    nextCh();
                    if (ch == 'd') {
                        nextCh();
                        copyCStrToStr(&token.val, ".word");
                        token.kind = DOT_WORD;
                        return token.kind;
                    }
                }
            }
        }
    }
    if (ch == 'a') {
        nextCh();
        if (ch == 'd') {
            nextCh();
            if (ch == 'd') {
                nextCh();
                copyCStrToStr(&token.val, "add");
                token.kind = ADD;
                return token.kind;
            }
        }
    }
    if (ch == 'd') {
        nextCh();
        if (ch == 'i') {
            nextCh();
            if (ch == 'v') {
                nextCh();
                copyCStrToStr(&token.val, "div");
                token.kind = DIV;
                return token.kind;
            }
        }
    }
    if (ch == 'h') {
        nextCh();
        if (ch == 'a') {
            nextCh();
            if (ch == 'l') {
                nextCh();
                if (ch == 't') {
                    nextCh();
                    copyCStrToStr(&token.val, "halt");
                    token.kind = HALT;
                    return token.kind;
                }
            }
        }
    }
    if (ch == 'l') {
        nextCh();
        if (ch == 'o') {
            nextCh();
            if (ch == 'a') {
                nextCh();
                if (ch == 'd') {
                    nextCh();
                    copyCStrToStr(&token.val, "load");
                    token.kind = LOAD;
                    return token.kind;
                }
            }
        }
    }
    if (ch == 'm') {
        nextCh();
        if (ch == 'u') {
            nextCh();
            if (ch == 'l') {
                nextCh();
                copyCStrToStr(&token.val, "mul");
                token.kind = MUL;
                return token.kind;
            }
        }
    }
    if (ch == 's') {
        nextCh();
        if (ch == 'u') {
            nextCh();
            if (ch == 'b') {
                nextCh();
                copyCStrToStr(&token.val, "sub");
                token.kind = SUB;
                return token.kind;
            }
        }
    }
    appendCharToStr(&token.val, ch);
    nextCh();
