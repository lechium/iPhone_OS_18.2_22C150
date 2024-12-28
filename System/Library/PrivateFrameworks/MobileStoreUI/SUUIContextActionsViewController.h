//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, NSString, SUUIContextActionsConfiguration, SUUIContextActionsPresentationController, UIGestureRecognizer, UIInterfaceActionGroupView, UIStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SUUIContextActionsViewController : UIViewController
{
    _Bool _orbPresentation;	// 8 = 0x8
    _Bool _appliedSystemRecognizer;	// 9 = 0x9
    UIGestureRecognizer *_systemProvidedGestureRecognzier;	// 16 = 0x10
    SUUIContextActionsPresentationController *_transitionPresentationController;	// 24 = 0x18
    SUUIContextActionsConfiguration *_configuration;	// 32 = 0x20
    NSMutableArray *_constraints;	// 40 = 0x28
    UIInterfaceActionGroupView *_contextActionView;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    UIVisualEffectView *_backgroundView;	// 64 = 0x40
    UIInterfaceActionGroupView *_scrollableActionGroupView;	// 72 = 0x48
    struct CGPoint _gestureRecognizerInitialLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000114b41
@property(nonatomic, getter=hasAppliedSystemRecognizer) _Bool appliedSystemRecognizer; // @synthesize appliedSystemRecognizer=_appliedSystemRecognizer;
@property(nonatomic) struct CGPoint gestureRecognizerInitialLocation; // @synthesize gestureRecognizerInitialLocation=_gestureRecognizerInitialLocation;
@property(retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView; // @synthesize scrollableActionGroupView=_scrollableActionGroupView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIInterfaceActionGroupView *contextActionView; // @synthesize contextActionView=_contextActionView;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) SUUIContextActionsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SUUIContextActionsPresentationController *transitionPresentationController; // @synthesize transitionPresentationController=_transitionPresentationController;
@property(retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier; // @synthesize systemProvidedGestureRecognzier=_systemProvidedGestureRecognzier;
@property(nonatomic, getter=isOrbPresentation) _Bool orbPresentation; // @synthesize orbPresentation=_orbPresentation;
- (void)animateTransition:(id)arg1;	// IMP=0x000000000011482f
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000114821
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000011480f
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000001147da
- (id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000001146fd
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000114607
- (void)_reloadViewsConfiguration;	// IMP=0x0000000000112baa
- (void)_applySystemRecognizer;	// IMP=0x0000000000112ac5
- (void)systemProvidedGestureRecognzierTriggered:(id)arg1;	// IMP=0x000000000011297e
- (void)viewTapped:(id)arg1;	// IMP=0x0000000000112965
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000112474
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001122ad
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001121be
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000011217d
- (void)viewDidLoad;	// IMP=0x0000000000111f49
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000111e96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000111e27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
