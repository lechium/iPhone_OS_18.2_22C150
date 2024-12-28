//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class BNBannerSource, DRPasteAnnouncement, NSSet, NSString, PLPillView;
@protocol BNPresentableContext;

@interface _DRPasteAnnouncementViewController : UIViewController
{
    NSString *_requestID;	// 8 = 0x8
    PLPillView *_pillView;	// 16 = 0x10
    BNBannerSource *_bannerSource;	// 24 = 0x18
    double _announcementDuration;	// 32 = 0x20
    _Bool _isPasteDeniedAnnouncement;	// 40 = 0x28
    DRPasteAnnouncement *_announcement;	// 48 = 0x30
    CDUnknownBlockType _authorizationReplyBlock;	// 56 = 0x38
}

+ (_Bool)shouldCoalesce:(id)arg1;	// IMP=0x002000000000bb18
- (void).cxx_destruct;	// IMP=0x002000000000bfd1
@property(copy) CDUnknownBlockType authorizationReplyBlock; // @synthesize authorizationReplyBlock=_authorizationReplyBlock;
@property(retain) DRPasteAnnouncement *announcement; // @synthesize announcement=_announcement;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000000be6e
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000000bda0
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x001000000000bbcf
- (struct UIEdgeInsets)bannerContentOutsets;	// IMP=0x001000000000bada
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x001000000000ba70
@property(readonly, nonatomic) UIViewController *viewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,R,N

@property(readonly, copy, nonatomic) NSString *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000ba3d
- (void)viewDidLoad;	// IMP=0x001000000000b95b
- (id)authorizationDecisionView;	// IMP=0x001000000000b08d
- (void)dismissBanner;	// IMP=0x001000000000b039
- (void)denyPaste:(id)arg1;	// IMP=0x001000000000afd7
- (void)allowPaste:(id)arg1;	// IMP=0x001000000000af72
- (id)initForDeniedPasteWithBannerSource:(id)arg1;	// IMP=0x001000000000ae02
- (id)initWithAnnouncement:(id)arg1 reply:(CDUnknownBlockType)arg2 bannerSource:(id)arg3;	// IMP=0x001000000000a9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisDraggingDismissalEnabled

@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisDraggingInteractionEnabled

@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSSet *preferredBackgroundActivitiesToSuppress;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R,C,N

@property(readonly, nonatomic) long long presentableBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<BNPresentableContext>",?,W,N

@property(readonly, nonatomic) long long presentableType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisTouchOutsideDismissalEnabled


@end
