
#import <Core/Void.h>
#import <Integers/UInt8.h>

@protocol SizableObject

    // Allocation of an object in virtual memory. For allocating on the heap, the
    // amount of bytes that are physically reserved for this object won't be exactly
    // the same as the input, but the kernel guarantees that it's greater than it.
    + (SizableObject*)allocHeapSize:(UInt8)bytes;
    + (SizableObject*)allocHeapSize:(LiteralUInt)bytes;

    // Allocation on stack memory and it will automatically be deallocated whenever
    // the local scope of the object exits the context.
    + (SizableObject*)allocStackSize:(UInt8)bytes;
    + (SizableObject*)allocStackSize:(LiteralUInt)bytes;

    // Disposes of the allocated block of memory.
    - (Void)drop;
@end
