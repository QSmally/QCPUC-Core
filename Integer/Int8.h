
@interface Int8: IntLiteralType, ReferenceType

    // Addition of two Int8 operands.
    - (UniversalType)+:(UniversalType)operand;
    - (UniversalType)+:(IntLiteralType)operand;

    // Subtraction of two Int8 operands.
    - (UniversalType)-:(UniversalType)operand;
    - (UniversalType)-:(IntLiteralType)operand;
@end
