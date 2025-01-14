//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapDataSubscriptionManager, MUScrollableStackView, MapDataSubscriptionInfo, ModalCardHeaderView, NSString, OfflineMapDetailsSectionController, OfflineMapDeviceDetailsSectionController, OfflineMapFooterActionsSectionController, OfflineMapPairedDeviceDetailsSectionController, UILabel;
@protocol OfflineMapsManagementActionCoordination;

@interface OfflineMapDetailsViewController
{
    MapDataSubscriptionInfo *_subscriptionInfo;	// 8 = 0x8
    id <OfflineMapsManagementActionCoordination> _delegate;	// 16 = 0x10
    ModalCardHeaderView *_titleHeaderView;	// 24 = 0x18
    MUScrollableStackView *_contentStackView;	// 32 = 0x20
    OfflineMapDetailsSectionController *_detailsSectionController;	// 40 = 0x28
    OfflineMapDeviceDetailsSectionController *_currentDeviceDetailsController;	// 48 = 0x30
    OfflineMapPairedDeviceDetailsSectionController *_activeWatchDetailsController;	// 56 = 0x38
    OfflineMapFooterActionsSectionController *_footerSectionController;	// 64 = 0x40
    UILabel *_legalDisclaimerLabel;	// 72 = 0x48
    GEOMapDataSubscriptionManager *_subscriptionManager;	// 80 = 0x50
}

+ (_Bool)wantsDefaultHeaderContentViews;	// IMP=0x0020000000c31820
- (void).cxx_destruct;	// IMP=0x0020000000c35664
@property(retain, nonatomic) GEOMapDataSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
@property(retain, nonatomic) UILabel *legalDisclaimerLabel; // @synthesize legalDisclaimerLabel=_legalDisclaimerLabel;
@property(retain, nonatomic) OfflineMapFooterActionsSectionController *footerSectionController; // @synthesize footerSectionController=_footerSectionController;
@property(retain, nonatomic) OfflineMapPairedDeviceDetailsSectionController *activeWatchDetailsController; // @synthesize activeWatchDetailsController=_activeWatchDetailsController;
@property(retain, nonatomic) OfflineMapDeviceDetailsSectionController *currentDeviceDetailsController; // @synthesize currentDeviceDetailsController=_currentDeviceDetailsController;
@property(retain, nonatomic) OfflineMapDetailsSectionController *detailsSectionController; // @synthesize detailsSectionController=_detailsSectionController;
@property(retain, nonatomic) MUScrollableStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) ModalCardHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(nonatomic) __weak id <OfflineMapsManagementActionCoordination> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MapDataSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
- (void)lastUpdatedDateForPairedDeviceDidChange:(id)arg1;	// IMP=0x0010000000c35495
- (void)lastUpdatedDateDidChange:(id)arg1;	// IMP=0x0010000000c3542c
- (void)subscriptionInfosDidChange:(id)arg1;	// IMP=0x0010000000c3541a
- (void)offlineMapDetailsActionSectionControllerDidSelectDownloadNowOnPairedDevice:(id)arg1;	// IMP=0x0010000000c35367
- (void)offlineMapDetailsActionSectionControllerDidSelectRemoveFromPairedDevice:(id)arg1;	// IMP=0x0010000000c34c6f
- (void)offlineMapDetailsActionSectionControllerDidSelectAddToPairedDevice:(id)arg1;	// IMP=0x0010000000c34aa9
- (void)offlineMapDetailsActionSectionControllerDidSelectPauseDownload:(id)arg1;	// IMP=0x0010000000c349fb
- (void)offlineMapDetailsActionSectionControllerDidSelectResizeMap:(id)arg1;	// IMP=0x0010000000c34992
- (void)offlineMapDetailsActionSectionControllerDidSelectRenameMap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c34907
- (void)offlineMapDetailsActionSectionControllerDidSelectDeleteMap:(id)arg1;	// IMP=0x0010000000c34055
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000c33d48
- (void)didDismissByGesture;	// IMP=0x0010000000c33d36
- (void)_updateCurrentSubscriptionInfo:(id)arg1;	// IMP=0x0010000000c337b1
- (void)_dismiss;	// IMP=0x0010000000c33774
- (void)_setupConstraints;	// IMP=0x0010000000c3310c
- (void)_updateActiveWatchSection:(_Bool)arg1;	// IMP=0x0010000000c32c1a
- (void)_setupViews;	// IMP=0x0010000000c31a01
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000c3198c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000c31917
- (void)viewDidLoad;	// IMP=0x0010000000c318c1
- (id)initWithSubscriptionInfo:(id)arg1;	// IMP=0x0010000000c31828

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

