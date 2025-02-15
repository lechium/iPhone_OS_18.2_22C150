//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSArray, NSString;
@protocol COSSkippedMiniFlowControllerDelegate;

@interface COSSkippedMiniFlowController : UINavigationController
{
    id <COSSkippedMiniFlowControllerDelegate> _flowDelegate;	// 8 = 0x8
    NSArray *_skippedControllers;	// 16 = 0x10
    unsigned long long _controllerIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002a740
@property(nonatomic) unsigned long long controllerIndex; // @synthesize controllerIndex=_controllerIndex;
@property(retain, nonatomic) NSArray *skippedControllers; // @synthesize skippedControllers=_skippedControllers;
@property(nonatomic) __weak id <COSSkippedMiniFlowControllerDelegate> flowDelegate; // @synthesize flowDelegate=_flowDelegate;
- (void)miniFlowStepComplete:(id)arg1 nextControllerClass:(Class)arg2;	// IMP=0x001000000002a6ba
- (void)miniFlowStepComplete:(id)arg1;	// IMP=0x001000000002a6a8
- (id)setupFlowUserInfo;	// IMP=0x001000000002a601
- (id)activePairingDevice;	// IMP=0x001000000002a5f7
- (void)buddyControllerDone:(id)arg1;	// IMP=0x001000000002a43b
- (void)_didFinish;	// IMP=0x001000000002a2e6
- (void)doneButtonPressed;	// IMP=0x001000000002a241
- (void)viewDidLoad;	// IMP=0x001000000002a161
- (id)nextViewController;	// IMP=0x0010000000029fd4
- (id)currentController;	// IMP=0x0010000000029f16
- (id)initWithSkippedControllerClassNames:(id)arg1;	// IMP=0x0010000000029b3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAddedPasscode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

