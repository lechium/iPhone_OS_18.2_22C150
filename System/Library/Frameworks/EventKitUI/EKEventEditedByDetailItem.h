//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventEditedByDetailItem
{
    UITableViewCell *_cell;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a3f85
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a3e40
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a3d79
- (void)shortenCell:(id)arg1;	// IMP=0x00000000000a3cbe
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a397e
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x00000000000a391c
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x00000000000a37e4
- (void)reset;	// IMP=0x00000000000a37c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
