
# QCPUC Foundation

> A standard library for an Objective C flavour compiled by [QCPU CLI](https://github.com/QSmally/QCPU-CLi).

## Compiler types

* `InstanceType` (uppermost class allocated on the stack)
* `InstanceType*` (uppermost class allocated on the heap)
* `TransparentType` (universal type, either `InstanceType` or `InstanceType*`)
* Literals:
    - `StringLiteralType` (`"foo"`)
    - `UIntLiteralType` (`24`)
* `ReferenceType` (usermode pointer)
