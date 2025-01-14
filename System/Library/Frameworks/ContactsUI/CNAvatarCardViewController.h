//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNAvatarCardActionsView, CNAvatarCardController, CNContactActionsController, NSArray, NSLayoutConstraint, NSString, UIImage, UIView;
@protocol CNAvatarCardActionListController, CNAvatarCardActionListOrbSupport, CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController
{
    _Bool _visible;	// 8 = 0x8
    _Bool _hasHeader;	// 9 = 0x9
    _Bool _headerOnTop;	// 10 = 0xa
    CNAvatarCardController *_cardController;	// 16 = 0x10
    id <CNAvatarCardViewControllerDelegate> _delegate;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
    CNAvatarCardActionsView *_legacyContactActionsView;	// 40 = 0x28
    CNContactActionsController *_actionsController;	// 48 = 0x30
    NSLayoutConstraint *_actionsViewControllerHeightConstraint;	// 56 = 0x38
    UIView *_effectView;	// 64 = 0x40
    NSArray *_verticalConstraints;	// 72 = 0x48
    double _borderMargin;	// 80 = 0x50
    UIView *_headerContainerView;	// 88 = 0x58
    UIView *_actionsListView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001f9cbb
@property(retain, nonatomic) UIView *actionsListView; // @synthesize actionsListView=_actionsListView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) double borderMargin; // @synthesize borderMargin=_borderMargin;
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint; // @synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView; // @synthesize legacyContactActionsView=_legacyContactActionsView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool headerOnTop; // @synthesize headerOnTop=_headerOnTop;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x00000000001f9a5c
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x00000000001f9920
@property _Bool transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x00000000001f9276
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001f9262
- (id)viewControllerForCardActionsView:(id)arg1;	// IMP=0x00000000001f9196
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;	// IMP=0x00000000001f913d
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x00000000001f905d
- (void)refreshActions;	// IMP=0x00000000001f9020
- (void)_updatePreferredSize;	// IMP=0x00000000001f8e1f
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000001f8d53
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001f8cda
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001f8c70
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001f8bbb
- (void)updateActionsViewBackgroundColor;	// IMP=0x00000000001f8ab0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001f8a6f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001f89e6
- (void)updateActionsControllerHeightConstraint;	// IMP=0x00000000001f893c
- (void)didAddActionsViewToHierarchy;	// IMP=0x00000000001f8684
- (void)willAddActionsViewToHierarchy;	// IMP=0x00000000001f85e5
@property(readonly, nonatomic) id <CNAvatarCardActionListController> actionListController;
@property(readonly, nonatomic) id <CNAvatarCardActionListOrbSupport> actionListViewController;
- (id)viewForTouchContinuation;	// IMP=0x00000000001f84cf
- (id)actionsView;	// IMP=0x00000000001f840d
@property(nonatomic) _Bool bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
- (struct CGRect)_photoFrameInView:(id)arg1;	// IMP=0x00000000001f81c5
@property(nonatomic) _Bool dismissesBeforePerforming;
@property(nonatomic) _Bool actionsReversed;
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000001f7fb8
- (void)updateViewConstraints;	// IMP=0x00000000001f7d1d
- (void)viewDidLoad;	// IMP=0x00000000001f7038
- (void)dealloc;	// IMP=0x00000000001f6fc3
- (id)initWithContacts:(id)arg1;	// IMP=0x00000000001f6d05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N


@end

