//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PSRootController, PSSpecifier, _TtC12GameCenterUI18BaseSplitPresenter;

@interface _TtC12GameCenterUI26JetDashboardViewController
{
    MISSING_TYPE *dashboardPresenter;	// 208 = 0xd0
    MISSING_TYPE *launchContext;	// 216 = 0xd8
    MISSING_TYPE *retryAfterAuthentication;	// 217 = 0xd9
    MISSING_TYPE *request;	// 224 = 0xe0
    MISSING_TYPE *clippingLayer;	// 232 = 0xe8
    MISSING_TYPE *badgeablePhotoView;	// 240 = 0xf0
    MISSING_TYPE *navigationBarBadgeablePhotoView;	// 248 = 0xf8
    MISSING_TYPE *profileBadgeCount;	// 256 = 0x100
    MISSING_TYPE *_rootController;	// 264 = 0x108
    MISSING_TYPE *_specifier;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000210ee8
- (void)donePressed:(id)arg1;	// IMP=0x0000000000210dcb
- (void)didSelectPlayerAvatarView:(id)arg1;	// IMP=0x0000000000210d29
@property(nonatomic, retain) PSSpecifier *_specifier; // @synthesize _specifier;
@property(nonatomic, retain) PSRootController *_rootController; // @synthesize _rootController;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000210a1a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000020e369
- (void)viewDidLayoutSubviews;	// IMP=0x000000000020db14
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000020d425
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x000000000020d33f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000020d2b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000020d218
- (void)viewDidLoad;	// IMP=0x000000000020cebe
@property(nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020bead
- (void)loadMoreWithContinuationToken:(id)arg1;	// IMP=0x0000000000210fa4

@end
