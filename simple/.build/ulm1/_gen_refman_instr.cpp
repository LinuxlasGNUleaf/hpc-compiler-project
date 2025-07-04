    {
        using namespace ULM_FMT::R_R_R;
        ulmDoc.setActiveKey("halt");
        ulmDoc.addAsmNotation();
        ulmDoc.addUnescapedDescription("halt %x");
        ulmDoc.addFormat();
        ulmDoc.addDescription(ulm_instrFmt.tikz(0x02));
        ulmDoc.addEffect();
        ulm_halt(ulm_regVal(x));
    }
    {
        using namespace ULM_FMT::S20_R;
        ulmDoc.setActiveKey("load");
        ulmDoc.addAsmNotation();
        ulmDoc.addUnescapedDescription("load imm, %dest");
        ulmDoc.addPurpose();
        ulmDoc.addUnescapedDescription("   Load sign extended immediate value into destination register.\n");
        ulmDoc.addFormat();
        ulmDoc.addDescription(ulm_instrFmt.tikz(0x11));
        ulmDoc.addEffect();
        ulm_setReg(imm, dest);
    }
    {
        using namespace ULM_FMT::R_R_R;
        ulmDoc.setActiveKey("add");
        ulmDoc.addAsmNotation();
        ulmDoc.addUnescapedDescription("add %x, %y, %z");
        ulmDoc.addPurpose();
        ulmDoc.addUnescapedDescription("   Adds register \\texttt{%x} to register and stores the result in\n   register \\texttt{%z}.\n");
        ulmDoc.addFormat();
        ulmDoc.addDescription(ulm_instrFmt.tikz(0x13));
        ulmDoc.addEffect();
        ulm_add64(ulm_regVal(x), ulm_regVal(y), z);
    }
    {
        using namespace ULM_FMT::R_R_R;
        ulmDoc.setActiveKey("mul");
        ulmDoc.addAsmNotation();
        ulmDoc.addUnescapedDescription("mul %x, %y, %z");
        ulmDoc.addFormat();
        ulmDoc.addDescription(ulm_instrFmt.tikz(0x17));
        ulmDoc.addEffect();
        ulm_mul64(ulm_regVal(x), ulm_regVal(y), z);
    }
    {
        using namespace ULM_FMT::R_R_R;
        ulmDoc.setActiveKey("sub");
        ulmDoc.addAsmNotation();
        ulmDoc.addUnescapedDescription("sub %x, %y, %z");
        ulmDoc.addFormat();
        ulmDoc.addDescription(ulm_instrFmt.tikz(0x14));
        ulmDoc.addEffect();
        ulm_sub64(ulm_regVal(x), ulm_regVal(y), z);
    }
    {
        using namespace ULM_FMT::R_R_R;
        ulmDoc.setActiveKey("div");
        ulmDoc.addAsmNotation();
        ulmDoc.addUnescapedDescription("div %x, %y, %z");
        ulmDoc.addFormat();
        ulmDoc.addDescription(ulm_instrFmt.tikz(0x18));
        ulmDoc.addEffect();
        ulm_idiv64(ulm_regVal(x), ulm_regVal(y), z);
    }
