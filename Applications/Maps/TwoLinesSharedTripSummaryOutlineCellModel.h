//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SharedTripSummary, UICollectionViewCellRegistration;

@interface TwoLinesSharedTripSummaryOutlineCellModel
{
    NSArray *_accessoryModels;	// 40 = 0x28
    SharedTripSummary *_sharedTripSummary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000e82b52
@property(readonly, nonatomic) SharedTripSummary *sharedTripSummary; // @synthesize sharedTripSummary=_sharedTripSummary;
- (id)accessoryModels;	// IMP=0x0010000000e82b2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000e82a01
@property(readonly) unsigned long long hash;
- (id)initWithSharedTripSummary:(id)arg1 accessoryModels:(id)arg2 backgroundModel:(id)arg3;	// IMP=0x0010000000e8282a
@property(readonly, nonatomic) id homeDragAndDropObject;
@property(readonly, nonatomic) id homeActionObject;

// Remaining properties
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UICollectionViewCellRegistration",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
