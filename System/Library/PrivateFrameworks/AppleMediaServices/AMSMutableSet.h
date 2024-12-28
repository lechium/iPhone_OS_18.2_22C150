//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface AMSMutableSet : NSMutableSet
{
    NSMutableSet *_backingSet;	// 8 = 0x8
    CDUnknownBlockType _hashBlock;	// 16 = 0x10
}

+ (id)setWithHashBlock:(CDUnknownBlockType)arg1;	// IMP=0x006000000046cad4
- (void).cxx_destruct;	// IMP=0x000000000046d44d
@property(copy, nonatomic) CDUnknownBlockType hashBlock; // @synthesize hashBlock=_hashBlock;
- (id)_allObjectsFromBackingSet;	// IMP=0x000000000046d25e
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000046d11d
- (id)objectEnumerator;	// IMP=0x000000000046d0cd
- (id)member:(id)arg1;	// IMP=0x000000000046ce35
- (id)anyObject;	// IMP=0x000000000046cdda
- (id)allObjects;	// IMP=0x000000000046cdc8
- (unsigned long long)count;	// IMP=0x000000000046cdab
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000046cc81
- (void)addObject:(id)arg1;	// IMP=0x000000000046cbb9
- (id)initWithHashBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000046cb21

@end
