//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit38InCallControlsCollectionViewController : UIViewController
{
    MISSING_TYPE *updatedCapabilitiesWithParticipants;	// 8 = 0x8
    MISSING_TYPE *capabilitiesChecker;	// 16 = 0x10
    MISSING_TYPE *participants;	// 24 = 0x18
    MISSING_TYPE *features;	// 32 = 0x20
    MISSING_TYPE *isLegacy;	// 40 = 0x28
    MISSING_TYPE *menuHostViewController;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_featureFlags;	// 64 = 0x40
    MISSING_TYPE *activity;	// 72 = 0x48
    MISSING_TYPE *conversation;	// 112 = 0x70
    MISSING_TYPE *mode;	// 120 = 0x78
    MISSING_TYPE *gridLayoutStyle;	// 121 = 0x79
    MISSING_TYPE *isOnScreen;	// 122 = 0x7a
    MISSING_TYPE *controlsManager;	// 128 = 0x80
    MISSING_TYPE *remoteAudioPaused;	// 136 = 0x88
    MISSING_TYPE *participantsViewControllerDelegate;	// 144 = 0x90
    MISSING_TYPE *inCallControlsCollectionViewControllerDelegate;	// 160 = 0xa0
    MISSING_TYPE *collectionView;	// 176 = 0xb0
    MISSING_TYPE *dataSource;	// 184 = 0xb8
    MISSING_TYPE *shareLinkEnabled;	// 192 = 0xc0
    MISSING_TYPE *updateDataSourceNeedsRefreshParticipants;	// 193 = 0xc1
    MISSING_TYPE *updateDataSourceNeedsAnimatedDifferences;	// 194 = 0xc2
    MISSING_TYPE *updateDataSourceSubject;	// 200 = 0xc8
    MISSING_TYPE *updateDataSourceDebouncer;	// 208 = 0xd0
    MISSING_TYPE *sectionHeaderViewRegistration;	// 0 = 0x0
    MISSING_TYPE *activityCellRegistration;	// 0 = 0x0
    MISSING_TYPE *titleCellRegistration;	// 0 = 0x0
    MISSING_TYPE *statusCellRegistration;	// 0 = 0x0
    MISSING_TYPE *participantCellRegistration;	// 0 = 0x0
    MISSING_TYPE *addParticipantCellRegistration;	// 0 = 0x0
    MISSING_TYPE *shareLinkCellRegistration;	// 0 = 0x0
    MISSING_TYPE *ignoreLMIRequestsCellRegistration;	// 0 = 0x0
    MISSING_TYPE *toggleCaptionsCellRegistration;	// 0 = 0x0
    MISSING_TYPE *fallbackCellRegistration;	// 0 = 0x0
    MISSING_TYPE *openMessagesCellRegistration;	// 0 = 0x0
    MISSING_TYPE *blockUnknownCallerCellRegistration;	// 0 = 0x0
    MISSING_TYPE *reportUnknownCallerCellRegistration;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002eb180
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002eb12f
- (void)handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002e9967
- (void)blockStatusDidUpdate;	// IMP=0x00000000002e98cd
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000002e95cd
- (void)viewDidLoad;	// IMP=0x00000000002e95a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e7c7e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000002ed7bc

@end
