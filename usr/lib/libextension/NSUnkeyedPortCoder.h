//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDOStreamData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSUnkeyedPortCoder
{
    id sndPort;	// 16 = 0x10
    id rcvPort;	// 24 = 0x18
    NSDOStreamData *doStreamData;	// 32 = 0x20
    NSMutableArray *components;	// 40 = 0x28
    NSMutableArray *importedObjects;	// 48 = 0x30
    unsigned long long componentIndex;	// 56 = 0x38
    _Bool isBycopy;	// 64 = 0x40
    _Bool isByref;	// 65 = 0x41
    _Bool isValid;	// 66 = 0x42
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000080c5b3
+ (void)_enableLogging:(_Bool)arg1;	// IMP=0x006000000080c2f5
- (id)decodeRetainedObject;	// IMP=0x000000000080ed72
- (void)encodeByrefObject:(id)arg1;	// IMP=0x000000000080ed58
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x000000000080ed3e
- (void)encodeObject:(id)arg1 isBycopy:(_Bool)arg2 isByref:(_Bool)arg3;	// IMP=0x000000000080e942
- (void)decodeReturnValue:(id)arg1;	// IMP=0x000000000080e60a
- (void)encodeReturnValue:(id)arg1;	// IMP=0x000000000080e391
- (id)decodeInvocation;	// IMP=0x000000000080dcee
- (void)encodeInvocation:(id)arg1;	// IMP=0x000000000080d751
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;	// IMP=0x000000000080d728
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x000000000080cfa0
- (id)decodePortObject;	// IMP=0x000000000080cf6d
- (void)encodePortObject:(id)arg1;	// IMP=0x000000000080cf3c
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x000000000080ce8f
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000080cded
- (id)decodeDataObject;	// IMP=0x000000000080cbad
- (void)encodeDataObject:(id)arg1;	// IMP=0x000000000080c8d5
- (long long)versionForClassName:(id)arg1;	// IMP=0x000000000080c884
- (_Bool)isByref;	// IMP=0x000000000080c874
- (_Bool)isBycopy;	// IMP=0x000000000080c864
- (id)_proxyForLocalObject:(id)arg1;	// IMP=0x000000000080c800
- (id)connection;	// IMP=0x000000000080c7ce
- (void)importObject:(id)arg1;	// IMP=0x000000000080c781
- (id)importedObjects;	// IMP=0x000000000080c770
- (id)finishedComponents;	// IMP=0x000000000080c75e
- (id)components;	// IMP=0x000000000080c6f5
- (void)dealloc;	// IMP=0x000000000080c647
- (void)invalidate;	// IMP=0x000000000080c5c1
- (void)dispatch;	// IMP=0x000000000080c530
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;	// IMP=0x000000000080c301
- (id)debugDescription;	// IMP=0x000000000080c27b

@end
