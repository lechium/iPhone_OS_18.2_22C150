//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKTimeScopeControl.h"

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface _HKTimeScopeControlBar : HKTimeScopeControl
{
    UISegmentedControl *_segments;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000193c20
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000193b61
- (void)_segmentValueChanged:(id)arg1;	// IMP=0x0000000000193b4a
- (void)setSelectedTimeScope:(long long)arg1;	// IMP=0x0000000000193b11
- (long long)selectedTimeScope;	// IMP=0x0000000000193ad5
- (void)layoutSubviews;	// IMP=0x00000000001939c3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001939b5
- (void)_rebuildSegments;	// IMP=0x000000000019351a
- (double)minimumWidth;	// IMP=0x00000000001934fd
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2;	// IMP=0x0000000000193449

@end
