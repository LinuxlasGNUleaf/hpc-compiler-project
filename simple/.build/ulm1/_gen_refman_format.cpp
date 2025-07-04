namespace ULM_FMT { namespace S20_R {
    auto OP = ulmdoc::declareBitField("OP", Expr::UNSIGNED, 8);
    auto dest = ulmdoc::declareBitField("dest", Expr::UNSIGNED, 4);
    auto imm = ulmdoc::declareBitField("imm", Expr::SIGNED, 20);
    auto ulm_instrFmt = ulmdoc::InstrFmt({OP, dest, imm});
}} // namespace ULM_FMT::S20_R

namespace ULM_FMT { namespace R_R_R {
    auto OP = ulmdoc::declareBitField("OP", Expr::UNSIGNED, 8);
    auto z = ulmdoc::declareBitField("z", Expr::UNSIGNED, 4);
    auto y = ulmdoc::declareBitField("y", Expr::UNSIGNED, 4);
    auto x = ulmdoc::declareBitField("x", Expr::UNSIGNED, 4);
    auto ulm_instrFmt = ulmdoc::InstrFmt({OP, z, y, x});
}} // namespace ULM_FMT::R_R_R

