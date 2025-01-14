//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditReplacement
{
    NSArray *_originalObjects;	// 8 = 0x8
    NSArray *_originalImmutableObjects;	// 16 = 0x10
    NSArray *_replacementObjects;	// 24 = 0x18
    NSArray *_replacementImmutableObjects;	// 32 = 0x20
    NSIndexSet *_indexesOfReplacedObjects;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007a8d7
@property(readonly, nonatomic) NSIndexSet *indexesOfReplacedObjects; // @synthesize indexesOfReplacedObjects=_indexesOfReplacedObjects;
@property(readonly, nonatomic) NSArray *replacementImmutableObjects; // @synthesize replacementImmutableObjects=_replacementImmutableObjects;
@property(readonly, nonatomic) NSArray *replacementObjects; // @synthesize replacementObjects=_replacementObjects;
@property(readonly, nonatomic) NSArray *originalImmutableObjects; // @synthesize originalImmutableObjects=_originalImmutableObjects;
@property(readonly, nonatomic) NSArray *originalObjects; // @synthesize originalObjects=_originalObjects;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a28a
@property(readonly, copy) NSString *description;
- (id)initWithOriginalObjects:(id)arg1 replacementObjects:(id)arg2 indexes:(id)arg3;	// IMP=0x000000000007a08d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

