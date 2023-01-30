
@interface String: SizableObject

    // Puts a literal string inside of an allocated memory location which
    // is reserved for a string type. Size of the allocated block includes
    // the terminating byte for the string.
    // String* stackString = [[String allocStackSize:16] init:"foo"];
    - (String*)init:(LiteralString)preset;
@end
