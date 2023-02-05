
@interface UInt8: UIntLiteralType, ReferenceType

    // Addition of two UInt8 operands.
    - (InstanceType)+:(InstanceType)operand;
    - (InstanceType)+:(UIntLiteralType)operand;

    // Subtraction of two UInt8 operands.
    - (InstanceType)-:(InstanceType)operand;
    - (InstanceType)-:(UIntLiteralType)operand;
@end
