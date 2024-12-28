//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (IMAdditions)
- (long long)pf_indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0020000000003fa0
- (id)mt_uniqueOrdered;	// IMP=0x002000000001baf5
- (id)mt_uniqued;	// IMP=0x002000000001bad9
- (id)mt_allObjectsExcludingIndexes:(id)arg1;	// IMP=0x002000000001b9fa
- (id)mt_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000001b8d6
- (id)arrayByRemovingObject:(id)arg1;	// IMP=0x002000000001b856
- (id)filter:(CDUnknownBlockType)arg1 compactMap:(CDUnknownBlockType)arg2;	// IMP=0x002000000001b66a
- (id)mt_filter:(CDUnknownBlockType)arg1;	// IMP=0x002000000001b4c1
- (id)mt_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000001b303
- (void)concurrentMapWithStrideSize:(unsigned long long)arg1 on:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000041d7e
- (unsigned long long)strideCountForSize:(unsigned long long)arg1;	// IMP=0x0020000000041d48
- (id)subarrayForStrideIndex:(unsigned long long)arg1 withStrideSize:(unsigned long long)arg2;	// IMP=0x0020000000041ccd
- (id)im_jsonSerializableValue;	// IMP=0x0020000000053a7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
