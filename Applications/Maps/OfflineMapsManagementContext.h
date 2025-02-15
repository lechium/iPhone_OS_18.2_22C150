//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeViewController, NSString, OfflineMapDetailsViewController, OfflineMapsManagementExpiredViewController, OfflineMapsManagementSearchAutocompleteViewController, OfflineMapsManagementViewController, PlaceCardItem, StatusBarBackgroundViewStyle, UIView;
@protocol StatusBarSupplementaryView;

@interface OfflineMapsManagementContext : NSObject
{
    OfflineMapsManagementViewController *_offlineMapsManagementViewController;	// 8 = 0x8
    OfflineMapsManagementExpiredViewController *_expiredMapsManagementViewController;	// 16 = 0x10
    OfflineMapsManagementSearchAutocompleteViewController *_searchViewController;	// 24 = 0x18
    OfflineMapDetailsViewController *_detailsViewController;	// 32 = 0x20
    ChromeViewController *_chromeViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000e81903
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

- (void)showPairedDeviceDiskSpaceDialogWithRequiredDiskSpace:(long long)arg1;	// IMP=0x0010000000e81842
- (void)setSyncToWatch:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e81460
- (void)presentOfflineMapRegionSelectorForSubscriptionInfo:(id)arg1;	// IMP=0x0010000000e812de
- (void)presentOfflineMapRegionSelectorForRegion:(id)arg1 name:(id)arg2;	// IMP=0x0010000000e81130
- (id)renameOfflineMapControllerForDefaultText:(id)arg1 saveHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000e80c25
- (void)presentRenameOfflineMapForSubscriptionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e80892
- (void)closeOfflineMapDetails;	// IMP=0x0010000000e80822
- (void)startUpdatingOfflineSubscriptions;	// IMP=0x0010000000e8006e
- (void)restoreExpiredSubscriptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e7fc58
- (void)resumeDownloadingForSubscriptionInfo:(id)arg1;	// IMP=0x0010000000e7f941
- (void)presentOfflineMapDetailsForSubscriptionInfo:(id)arg1;	// IMP=0x0010000000e7f888
- (void)closeAddNewMapSearchAutocomplete;	// IMP=0x0010000000e7f818
- (void)presentAddNewMapSearchAutocomplete;	// IMP=0x0010000000e7f713
- (void)closeExpiredMapsManagement;	// IMP=0x0010000000e7f6a3
- (void)presentExpiredMapsManagement;	// IMP=0x0010000000e7f61a
- (void)dismiss;	// IMP=0x0010000000e7f4f7
- (void)closeOfflineMapsManagement;	// IMP=0x0010000000e7f4e5
- (void)leaveStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000e7f4a1
- (void)enterStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000e7f45d
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000e7f29b
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)desiredCards;	// IMP=0x0010000000e7f1fa
- (id)init;	// IMP=0x0010000000e7f17f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PlaceCardItem *placeCardItemForLookAroundButton;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"PlaceCardItem",?,R,N

@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"StatusBarBackgroundViewStyle",?,R,N

@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<StatusBarSupplementaryView>",?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

