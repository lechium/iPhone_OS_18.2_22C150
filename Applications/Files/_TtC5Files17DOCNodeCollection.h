//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5Files17DOCNodeCollection : NSObject
{
    MISSING_TYPE *logPrefix;	// 8 = 0x8
    MISSING_TYPE *type;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 48 = 0x30
    MISSING_TYPE *isGathering;	// 64 = 0x40
    MISSING_TYPE *isGatheringObservation;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000e0ed0
- (id)init;	// IMP=0x00100000000e0e70
@property(nonatomic) _Bool isGathering; // @synthesize isGathering;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;	// IMP=0x00100000000e1b00
- (void)collectionDidFinishGathering:(id)arg1;	// IMP=0x00100000000e1a70
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;	// IMP=0x00100000000e19d0
- (void)collection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x00100000000e13b0
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x00100000000e1350

@end

