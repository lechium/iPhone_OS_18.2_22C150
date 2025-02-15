//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKOverlayRoomFactorContext.h"

@class _ActivityCurrentValueView;

__attribute__((visibility("hidden")))
@interface _ActivityFactorContext : HKOverlayRoomFactorContext
{
    _ActivityCurrentValueView *_activityCurrentValueView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b4f7f
@property(nonatomic) __weak _ActivityCurrentValueView *activityCurrentValueView; // @synthesize activityCurrentValueView=_activityCurrentValueView;
- (id)_moveStringForSummary:(id)arg1;	// IMP=0x00000000002b4c2c
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002b41a5
- (_Bool)_isGraphViewReadyForContextUpdate:(id)arg1;	// IMP=0x00000000002b40f6
- (id)initWithPrimaryDisplayType:(id)arg1 factorDisplayType:(id)arg2 overlayChartController:(id)arg3 currentCalendarOverride:(id)arg4 applicationItems:(id)arg5 overlayMode:(long long)arg6 activityCurrentValueView:(id)arg7;	// IMP=0x00000000002b4058

@end

