//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, UIView, UIViewController;
@protocol BNPresentableContext, SBUISystemApertureAccessoryView, SBUISystemApertureElement, SBUISystemApertureElementProviding;

@interface _TtC13MediaRemoteUI42SuggestedRouteSystemApertureViewController
{
    MISSING_TYPE *cancellables;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_customView;	// 0 = 0x0
    MISSING_TYPE *presentableContext;	// 0 = 0x0
    MISSING_TYPE *providesHostedContent;	// 0 = 0x0
    MISSING_TYPE *presentableBehavior;	// 0 = 0x0
    MISSING_TYPE *activeLayoutMode;	// 0 = 0x0
    MISSING_TYPE *associatedAppBundleIdentifier;	// 25 = 0x19
    MISSING_TYPE *associatedScenePersistenceIdentifier;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *elementIdentifier;	// 0 = 0x0
    MISSING_TYPE *contentRole;	// 0 = 0x0
    MISSING_TYPE *maximumLayoutMode;	// 278528 = 0x44000
    MISSING_TYPE *preferredLayoutMode;	// 0 = 0x0
    MISSING_TYPE *preferredCustomLayout;	// 278528 = 0x44000
    MISSING_TYPE *presentationBehaviors;	// 5 = 0x5
    MISSING_TYPE *preventsAutomaticDismissal;	// 24 = 0x18
    MISSING_TYPE *leadingView;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *trailingView;	// 0 = 0x0
    MISSING_TYPE *minimalView;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *preferredHeightForBottomSafeArea;	// 0 = 0x0
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000001c5a0
- (void).cxx_destruct;	// IMP=0x004000000001c950
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001c860
@property(nonatomic, readonly) id <SBUISystemApertureElementProviding> systemApertureElementProvider;
@property(nonatomic) double preferredHeightForBottomSafeArea; // @synthesize preferredHeightForBottomSafeArea;
@property(nonatomic, readonly) id <SBUISystemApertureElement> systemApertureElement;
@property(nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView; // @synthesize minimalView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView; // @synthesize trailingView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView; // @synthesize leadingView;
@property(nonatomic, readonly) _Bool preventsAutomaticDismissal; // @synthesize preventsAutomaticDismissal;
@property(nonatomic, readonly) unsigned long long presentationBehaviors; // @synthesize presentationBehaviors;
@property(nonatomic, readonly) long long preferredCustomLayout; // @synthesize preferredCustomLayout;
@property(nonatomic, readonly) long long preferredLayoutMode; // @synthesize preferredLayoutMode;
@property(nonatomic, readonly) long long maximumLayoutMode; // @synthesize maximumLayoutMode;
@property(nonatomic, readonly) long long contentRole; // @synthesize contentRole;
@property(nonatomic, readonly) NSString *elementIdentifier;
@property(nonatomic, readonly) NSString *associatedScenePersistenceIdentifier;
@property(nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode;
@property(nonatomic, readonly) long long presentableBehavior; // @synthesize presentableBehavior;
@property(nonatomic, readonly) _Bool providesHostedContent; // @synthesize providesHostedContent;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext; // @synthesize presentableContext;
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000001c590
- (void)viewDidLoad;	// IMP=0x001000000001c560
- (void)loadView;	// IMP=0x001000000001c160

@end

