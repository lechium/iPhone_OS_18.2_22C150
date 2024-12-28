//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class LookAroundPuckView, MKHapticEngine, NSString;

@interface LookAroundPuckViewController : UIViewController
{
    _Bool _canEnterLookAroundPIP;	// 8 = 0x8
    double _pitch;	// 16 = 0x10
    long long _lookAroundAvailability;	// 24 = 0x18
    LookAroundPuckView *_puckView;	// 32 = 0x20
    MKHapticEngine *_hapticEngine;	// 40 = 0x28
    CDUnknownBlockType _didEnterLookAroundPIP;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000e87d61
@property(copy, nonatomic) CDUnknownBlockType didEnterLookAroundPIP; // @synthesize didEnterLookAroundPIP=_didEnterLookAroundPIP;
@property(nonatomic) _Bool canEnterLookAroundPIP; // @synthesize canEnterLookAroundPIP=_canEnterLookAroundPIP;
@property(retain, nonatomic) MKHapticEngine *hapticEngine; // @synthesize hapticEngine=_hapticEngine;
@property(retain, nonatomic) LookAroundPuckView *puckView; // @synthesize puckView=_puckView;
@property(nonatomic) long long lookAroundAvailability; // @synthesize lookAroundAvailability=_lookAroundAvailability;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
- (void)lookAroundPIPDataCoordinatorDidEndMovingLookAroundView:(id)arg1;	// IMP=0x0010000000e87b6a
- (void)lookAroundPIPDataCoordinatorIsMovingLookAroundView:(id)arg1;	// IMP=0x0010000000e87aab
- (void)lookAroundPIPDataCoordinatorDidSynchronizeMapView:(id)arg1;	// IMP=0x0010000000e8799f
- (void)lookAroundPIPDataCoordinatorDidPanLookAroundView:(id)arg1;	// IMP=0x0010000000e878e0
- (void)lookAroundPIPDataCoordinatorIsRotatingMapView:(id)arg1;	// IMP=0x0010000000e87821
- (void)lookAroundPIPDataCoordinatorDidEndPanningMapView:(id)arg1;	// IMP=0x0010000000e87722
- (void)lookAroundPIPDataCoordinatorIsPanningMapView:(id)arg1;	// IMP=0x0010000000e87626
- (void)lookAroundPIPDataCoordinatorDidStartPanningMapView:(id)arg1;	// IMP=0x0010000000e87527
- (void)lookAroundPIPDataCoordinatorDidChangeLookAroundAvailability:(id)arg1;	// IMP=0x0010000000e87421
- (void)lookAroundPIPDataCoordinatorWillExitLookAroundPIP:(id)arg1;	// IMP=0x0010000000e872c4
- (void)lookAroundPIPDataCoordinatorFailedToEnterLookArounPIP:(id)arg1;	// IMP=0x0010000000e8723e
- (void)lookAroundPIPDataCoordinatorDidEnterLookAroundPIP:(id)arg1;	// IMP=0x0010000000e87055
- (void)lookAroundPIPDataCoordinatorWillEnterLookArounPIP:(id)arg1;	// IMP=0x0010000000e86fd4
- (void)setCanEnterLookAroundPIP;	// IMP=0x0010000000e86f3d
@property(readonly, nonatomic, getter=isDimmed) _Bool dimmed;
- (void)viewDidLoad;	// IMP=0x0010000000e86aae
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000e86aa6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
