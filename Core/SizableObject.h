
#import <Core/Void.h>
#import <Core/Object.h>
#import <Integers/UInt8.h>

@interface SizableObject: Object

    // Allocation on stack memory and it will automatically be deallocated whenever
    // the local scope of the object exits the context.
    + (InstanceType)allocSize:(UInt8)bytes;
    + (InstanceType)allocSize:(UIntLiteralType)bytes;

    // Allocation of an object in virtual memory. For allocating on the heap, the
    // amount of bytes that are physically reserved for this object won't be exactly
    // the same as the input, but the kernel guarantees that it's greater than it.
    + (InstanceType*)allocSize:(UInt8)bytes;
    + (InstanceType*)allocSize:(UIntLiteralType)bytes;
@end
