//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class NSString;

@interface UICollectionView (MapsFocusDodging)
- (void)_maps_reloadDataWithoutFocus;	// IMP=0x002000000030ec47
- (void)_maps_commitUpdates;	// IMP=0x001000000036dd2b
- (struct CGRect)_maps_rectForRowAtIndexPath:(id)arg1;	// IMP=0x001000000036dc7d
- (struct CGRect)_maps_rectForHeaderInSection:(long long)arg1;	// IMP=0x001000000036dba9
- (long long)_maps_numberOfRowsInSection:(long long)arg1;	// IMP=0x001000000036db97
@property(readonly, nonatomic) long long _maps_numberOfSections;
@property(readonly, nonatomic) struct CGSize _maps_contentSize;
- (void)_maps_scrollContentToOriginalPosition;	// IMP=0x0010000000d4c39d
- (_Bool)_maps_shouldShowTopHairline;	// IMP=0x0010000000d4c18f
- (long long)_maps_indexOfFirstNonEmptySection;	// IMP=0x0010000000d4bf53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

