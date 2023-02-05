
#import <Core/SizableObject.h>
#import <Integer/UInt8.h>

@interface String: SizableObject

    // Puts a literal string inside of an allocated memory location which
    // is reserved for a string type. Size of the allocated block includes
    // the terminating byte for the string.
    //
    // String myStackString = [[String allocSize:16] init:"foo"];
    // String* myHeapString = [[String allocSize:16] init:]
    //
    // TODO: Remove duplication by abstracting (String)stack and (String*)heap types; keep in mind MST/MLD stack bit.
    - (InstanceType)init:(InstanceType*)preset;
    - (InstanceType)init:(StringLiteralType)preset;
    - (InstanceType*)init:(InstanceType*)preset;
    - (InstanceType*)init:(StringLiteralType)preset;

    // Size of the string in memory in O(n) time.
    - (UInt8)length;
@end
