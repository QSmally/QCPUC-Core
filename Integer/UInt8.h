
@interface UInt8: UIntLiteralType, ReferenceType

    // Addition of two UInt8 operands.
    - (UniversalType)+:(UniversalType)operand;
    - (UniversalType)+:(UIntLiteralType)operand;

    // Subtraction of two UInt8 operands.
    - (UniversalType)-:(UniversalType)operand;
    - (UniversalType)-:(UIntLiteralType)operand;
@end
