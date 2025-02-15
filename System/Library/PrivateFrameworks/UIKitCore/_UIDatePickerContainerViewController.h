//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerContainerViewController : UIViewController
{
    CDUnknownBlockType _pendingKeyboardAdjustment;	// 440 = 0x1b8
    double _keyboardAdjustmentOffset;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x000000000190221f
@property(nonatomic) double keyboardAdjustmentOffset; // @synthesize keyboardAdjustmentOffset=_keyboardAdjustmentOffset;
@property(copy, nonatomic) CDUnknownBlockType pendingKeyboardAdjustment; // @synthesize pendingKeyboardAdjustment=_pendingKeyboardAdjustment;
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000001902094
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x000000000190204f
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000001901f11
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000001901e2f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000001901dc3
- (void)didChangeKeyboardAvoidanceAdjustmentDeferral;	// IMP=0x0000000001901d3d
- (void)keyboardFrameWillChange:(id)arg1;	// IMP=0x00000000019015ef
- (void)_didReceiveEscapeKey:(id)arg1;	// IMP=0x00000000019015ad
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000019015a5
- (_Bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;	// IMP=0x000000000190159d
- (void)dealloc;	// IMP=0x000000000190151b
- (id)initWithPresentation:(id)arg1;	// IMP=0x00000000019013e3
@property(readonly, nonatomic) _UIDatePickerOverlayPresentation *presentation;
- (id)keyCommands;	// IMP=0x00000000019012f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

