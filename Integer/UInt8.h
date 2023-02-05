
@interface UInt8: UIntLiteralType, ReferenceType

    // Addition of two UInt8 operands.
    - (TransparentType)+:(TransparentType)operand;
    - (TransparentType)+:(UIntLiteralType)operand;

    // Subtraction of two UInt8 operands.
    - (TransparentType)-:(TransparentType)operand;
    - (TransparentType)-:(UIntLiteralType)operand;
@end
