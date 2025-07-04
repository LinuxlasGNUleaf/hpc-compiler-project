namespace S20_R {
    FormatFieldNode OP{"S20_R", "OP", 24, 8, FormatFieldNode::Unsigned};
    FormatFieldNode dest{"S20_R", "dest", 20, 4, FormatFieldNode::Unsigned};
    FormatFieldNode imm{"S20_R", "imm", 0, 20, FormatFieldNode::Signed};
} // namespace S20_R

namespace R_R_R {
    FormatFieldNode OP{"R_R_R", "OP", 24, 8, FormatFieldNode::Unsigned};
    FormatFieldNode z{"R_R_R", "z", 20, 4, FormatFieldNode::Unsigned};
    FormatFieldNode y{"R_R_R", "y", 16, 4, FormatFieldNode::Unsigned};
    FormatFieldNode x{"R_R_R", "x", 12, 4, FormatFieldNode::Unsigned};
} // namespace R_R_R

