//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

@interface MapsAppTestGuidance
{
    NSTimer *_guidanceTimer;	// 8 = 0x8
    long long _swipeCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000945f2e
@property(readonly, nonatomic) long long swipeCount; // @synthesize swipeCount=_swipeCount;
- (_Bool)_testIsStepping;	// IMP=0x0010000000945e83
- (void)_runPlayWithTraySubtest;	// IMP=0x0010000000945cd4
- (unsigned long long)collapsedTrayLayout;	// IMP=0x0010000000945ccc
- (unsigned long long)expandedTrayLayout;	// IMP=0x0010000000945cc1
- (void)_endGuidanceNavOrSteppingMode;	// IMP=0x0010000000945bf6
- (void)_doAfterSubTestForShowingSign;	// IMP=0x0010000000945b81
- (void)_steppingSignDidChange;	// IMP=0x00100000009458b3
- (void)_gotoNextStepAfterDelay:(double)arg1;	// IMP=0x0010000000945658
- (void)willUpdateNavigationSign;	// IMP=0x001000000094554c
- (void)_guidanceOrSteppingDidShowFirstSign;	// IMP=0x00100000009452d5
- (id)_subTestNameForGoingToGuidanceStep:(long long)arg1 forSwipeCount:(long long)arg2;	// IMP=0x0010000000945288
- (void)_enterGuidanceNavOrSteppingMode;	// IMP=0x00100000009451a3
- (void)doAfterSubTestForDisplayingRoutes;	// IMP=0x0010000000945180
- (_Bool)runTest;	// IMP=0x0010000000944f80
- (void)cleanup:(_Bool)arg1;	// IMP=0x0010000000944f2e
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x0010000000944ea7

@end
