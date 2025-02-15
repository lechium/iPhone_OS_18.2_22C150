//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, RideBookingOutlineController;

@interface RideBookingDisabledApplicationsOutlineSection
{
    _Bool _shouldShowEnableAppsCell;	// 16 = 0x10
    RideBookingOutlineController *_parentDataSource;	// 24 = 0x18
    NSArray *_disabledApplicationsStatuses;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000007b45fb
@property(nonatomic) _Bool shouldShowEnableAppsCell; // @synthesize shouldShowEnableAppsCell=_shouldShowEnableAppsCell;
@property(retain, nonatomic) NSArray *disabledApplicationsStatuses; // @synthesize disabledApplicationsStatuses=_disabledApplicationsStatuses;
@property(nonatomic) __weak RideBookingOutlineController *parentDataSource; // @synthesize parentDataSource=_parentDataSource;
- (void)ridesharingEnableAllAppsTableViewCellDidPerformEnableCommand:(id)arg1;	// IMP=0x00100000007b4319
- (void)ridesharingAppLargeIconTableViewCell:(id)arg1 didSelectActionButton:(id)arg2;	// IMP=0x00100000007b4035
- (void)configureWithRideBookingRideOptionState:(id)arg1;	// IMP=0x00100000007b3d0b
- (long long)numberOfSections;	// IMP=0x00100000007b3cc0
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00100000007b3c5e
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00100000007b3960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

