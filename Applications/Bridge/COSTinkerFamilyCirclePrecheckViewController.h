//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class FACircleStateController, NSString;
@protocol COSBuddyControllerDelegate;

@interface COSTinkerFamilyCirclePrecheckViewController : UIViewController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    FACircleStateController *_circleStateController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000138034
@property(retain, nonatomic) FACircleStateController *circleStateController; // @synthesize circleStateController=_circleStateController;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)holdActivityIdentifier;	// IMP=0x0010000000137fe9
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x0010000000137fe1
- (void)_fetchFamilyCircle;	// IMP=0x00100000001375d1
- (void)didPushWaitScreen;	// IMP=0x0010000000136f46
- (void)handleRepairFailureWithError:(id)arg1;	// IMP=0x0010000000136ce9
- (void)failPrecheckWithTitle:(id)arg1 body:(id)arg2 withPresentingController:(id)arg3;	// IMP=0x0010000000136b9e
- (id)localizedWaitScreenDescription;	// IMP=0x0010000000136b32
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000136b29
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000136b21
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000136b19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

