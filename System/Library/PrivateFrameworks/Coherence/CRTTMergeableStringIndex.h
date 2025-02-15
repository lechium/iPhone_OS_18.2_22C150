//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CRTTMergeableStringIndex : NSObject
{
    long long _renameGeneration;	// 8 = 0x8
    long long _maxCounter;	// 16 = 0x10
    unsigned long long _affinity;	// 24 = 0x18
    struct TopoID _index;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000041b7
@property(readonly, nonatomic) struct TopoID index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long affinity; // @synthesize affinity=_affinity;
@property(readonly, nonatomic) long long maxCounter; // @synthesize maxCounter=_maxCounter;
@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
- (id)description;	// IMP=0x000000000000401d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003d7f
- (id)_objCRenameSequence;	// IMP=0x0000000000003cf5
- (id)timestamp;	// IMP=0x0000000000003ce7
- (id)renamed:(id)arg1;	// IMP=0x0000000000003b37
- (id)finalizedInContext:(id)arg1;	// IMP=0x0000000000003a31
- (_Bool)needToFinalizeTimestamps;	// IMP=0x00000000000039e1
- (void)dealloc;	// IMP=0x00000000000038e1
- (id)initWithTimestamp:(id)arg1 affinity:(unsigned long long)arg2 renameGeneration:(long long)arg3;	// IMP=0x00000000000037ac
- (id)initWithTopoID:(struct TopoID)arg1 affinity:(unsigned long long)arg2 renameGeneration:(long long)arg3 maxCounter:(long long)arg4;	// IMP=0x00000000000036d0

@end

