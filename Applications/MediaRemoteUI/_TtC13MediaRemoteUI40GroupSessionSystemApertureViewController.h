//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, UIView, UIViewController;
@protocol BNPresentableContext, SBUISystemApertureAccessoryView, SBUISystemApertureElement, SBUISystemApertureElementProviding;

@interface _TtC13MediaRemoteUI40GroupSessionSystemApertureViewController
{
    MISSING_TYPE *titleLabel;	// 80 = 0x50
    MISSING_TYPE *subtitleLabel;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_labelStack;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_routeIcon;	// 104 = 0x68
    MISSING_TYPE *trailingIcon;	// 112 = 0x70
    MISSING_TYPE *activeLayoutMode;	// 120 = 0x78
    MISSING_TYPE *presentableContext;	// 128 = 0x80
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000000067b0
- (void).cxx_destruct;	// IMP=0x00400000000068a0
@property(nonatomic) __weak id <BNPresentableContext> presentableContext; // @synthesize presentableContext;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000067a0
@property(nonatomic, readonly) id <SBUISystemApertureElementProviding> systemApertureElementProvider;
@property(nonatomic, readonly) double preferredHeightForBottomSafeArea;
@property(nonatomic, readonly) id <SBUISystemApertureElement> systemApertureElement;
@property(nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property(nonatomic, readonly) _Bool preventsAutomaticDismissal;
@property(nonatomic, readonly) unsigned long long presentationBehaviors;
@property(nonatomic, readonly) long long preferredCustomLayout;
@property(nonatomic, readonly) long long preferredLayoutMode;
@property(nonatomic, readonly) long long maximumLayoutMode;
@property(nonatomic, readonly) long long contentRole;
@property(nonatomic, readonly) NSString *elementIdentifier;
@property(nonatomic, readonly) NSString *associatedScenePersistenceIdentifier;
@property(nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode;
- (void)viewDidLoad;	// IMP=0x00100000000065f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000005b40

@end
