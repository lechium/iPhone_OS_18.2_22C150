//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (_PASDistilledString)
+ (id)_pas_distilledStringClasses;	// IMP=0x00100000000390c6
+ (id)_pas_proxyStringByConcatenatingStrings:(id)arg1;	// IMP=0x001000000003cd8a
+ (id)_pas_stringWithDataNoCopy:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(_Bool)arg3;	// IMP=0x001000000003cd6e
+ (id)_pas_stringWithDataNoCopy:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(_Bool)arg3 isExternalRepresentation:(_Bool)arg4;	// IMP=0x001000000003cd48
+ (id)_pas_stringWithConsumedAllocaDescrNoCopy:(CDStruct_9b25d3c8)arg1 bufferSize:(unsigned long long)arg2 encoding:(unsigned long long)arg3 nullTerminated:(_Bool)arg4 isExternalRepresentation:(_Bool)arg5;	// IMP=0x001000000003cc38
- (id)_pas_revivedString;	// IMP=0x0010000000038fc9
- (id)_pas_distilledString;	// IMP=0x0010000000038bf0
- (const char *)_pas_fastUTF8StringPtrWithOptions:(unsigned long long)arg1 encodedLength:(unsigned long long *)arg2;	// IMP=0x001000000003c3c4
- (_Bool)_pas_retainsConmingledBackingStore;	// IMP=0x001000000003c382
- (void)_pas_setRetainsConmingledBackingStore:(_Bool)arg1;	// IMP=0x001000000003c33b
- (id)_pas_stringBackedByUTF8CString;	// IMP=0x001000000003c01a
- (id)_pas_proxyArrayOfSubstringsWithRanges:(id)arg1;	// IMP=0x001000000003bf00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
