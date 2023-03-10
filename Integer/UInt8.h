
@interface UInt8: IntLiteralType, ReferenceType

    // Addition of two UInt8 operands.
    - (UniversalType)+:(UniversalType)operand;
    - (UniversalType)+:(IntLiteralType)operand;

    // Subtraction of two UInt8 operands.
    - (UniversalType)-:(UniversalType)operand;
    - (UniversalType)-:(IntLiteralType)operand;
@end
