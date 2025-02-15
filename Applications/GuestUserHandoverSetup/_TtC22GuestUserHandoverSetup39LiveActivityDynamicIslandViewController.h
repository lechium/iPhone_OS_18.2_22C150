//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSString, NSURL, UIView;
@protocol SBUISystemApertureAccessoryView, SBUISystemApertureElement;

@interface _TtC22GuestUserHandoverSetup39LiveActivityDynamicIslandViewController : UIViewController
{
    MISSING_TYPE *liveActivityModel;	// 8 = 0x8
    MISSING_TYPE *leadingAccessoryView;	// 16 = 0x10
    MISSING_TYPE *trailingAccessoryView;	// 24 = 0x18
    MISSING_TYPE *minimalAccessoryView;	// 32 = 0x20
    MISSING_TYPE *labelAccessoryView;	// 40 = 0x28
    MISSING_TYPE *tapGestureInterceptorView;	// 48 = 0x30
    MISSING_TYPE *endGuestUserModeButton;	// 56 = 0x38
    MISSING_TYPE *activeConstraints;	// 64 = 0x40
    MISSING_TYPE *associatedAppBundleIdentifier;	// 72 = 0x48
    MISSING_TYPE *launchURL;	// 20306 = 0x4f52
    MISSING_TYPE *contentRole;	// 0 = 0x0
    MISSING_TYPE *preferredLayoutMode;	// 0 = 0x0
    MISSING_TYPE *maximumLayoutMode;	// 0 = 0x0
    MISSING_TYPE *presentationBehaviors;	// 0 = 0x0
    MISSING_TYPE *activeLayoutMode;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000131c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000013160
- (void)launchAppGestureDetectedWithSender:(id)arg1;	// IMP=0x0010000000013100
- (void)endGuestUserModeButtonTapped;	// IMP=0x00100000000130d0
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000130a0
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg1;	// IMP=0x0010000000011890
- (void)viewDidLoad;	// IMP=0x0010000000011430
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000010f90
@property(nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode;
@property(nonatomic, readonly) unsigned long long presentationBehaviors; // @synthesize presentationBehaviors;
@property(nonatomic, readonly) long long maximumLayoutMode; // @synthesize maximumLayoutMode;
@property(nonatomic, readonly) long long preferredLayoutMode; // @synthesize preferredLayoutMode;
@property(nonatomic, readonly) long long contentRole; // @synthesize contentRole;
@property(nonatomic, readonly) NSURL *launchURL;
@property(nonatomic, readonly) NSString *associatedAppBundleIdentifier;

@end

