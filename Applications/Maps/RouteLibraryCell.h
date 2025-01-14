//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class GEOComposedGeometryRoutePersistentData, MURouteSnapshotKey, MapDataSubscriptionInfo, MapsFadingLabel, MapsThemeMultiPartLabel, NSArray, NSLayoutConstraint, NSString, RouteLibraryOfflineDownloadStateView, UIAction, UIButton, UIImageView, UILabel, UIMenu, UIView;
@protocol RouteLibraryCellDelegate;

@interface RouteLibraryCell : UITableViewCell
{
    UIImageView *_snapshotImageView;	// 8 = 0x8
    UIImageView *_placeholderImageView;	// 16 = 0x10
    UIImageView *_transportTypeImageView;	// 24 = 0x18
    UIView *_textContainerView;	// 32 = 0x20
    UIView *_transportTypeContainerView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_addressLabel;	// 56 = 0x38
    MapsThemeMultiPartLabel *_descriptionLabel;	// 64 = 0x40
    MapsFadingLabel *_notesLabel;	// 72 = 0x48
    UIButton *_moreButton;	// 80 = 0x50
    NSLayoutConstraint *_moreButtonBottomConstraint;	// 88 = 0x58
    UIButton *_menuButton;	// 96 = 0x60
    MURouteSnapshotKey *_cacheKey;	// 104 = 0x68
    UIMenu *_menu;	// 112 = 0x70
    UIAction *_downloadAction;	// 120 = 0x78
    RouteLibraryOfflineDownloadStateView *_offlineDownloadStateView;	// 128 = 0x80
    NSArray *_noOfflineDownloadConstraints;	// 136 = 0x88
    NSArray *_offlineDownloadConstraints;	// 144 = 0x90
    GEOComposedGeometryRoutePersistentData *_routeData;	// 152 = 0x98
    id <RouteLibraryCellDelegate> _delegate;	// 160 = 0xa0
    MapDataSubscriptionInfo *_offlineSubscription;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000005eadab
@property(retain, nonatomic) MapDataSubscriptionInfo *offlineSubscription; // @synthesize offlineSubscription=_offlineSubscription;
@property(readonly, nonatomic) __weak id <RouteLibraryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GEOComposedGeometryRoutePersistentData *routeData; // @synthesize routeData=_routeData;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x00100000005ead4b
- (void)fadingLabelTruncationChanged:(id)arg1;	// IMP=0x00100000005ead0d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000005eacc3
- (void)_pressedDownload;	// IMP=0x00100000005eac6c
- (void)_pressedMore;	// IMP=0x00100000005eac15
- (void)_pressedDirections;	// IMP=0x00100000005eabbe
- (void)_pressedEdit;	// IMP=0x00100000005eab67
- (void)_pressedDelete;	// IMP=0x00100000005eab10
- (id)_greyScaleImageIfNeeded:(id)arg1;	// IMP=0x00100000005eaa6b
- (void)_setImageForSnapshot:(id)arg1;	// IMP=0x00100000005ea9bd
- (void)setSnapshotWithRouteData:(id)arg1 scale:(double)arg2 userInterfaceStyle:(long long)arg3;	// IMP=0x00100000005ea738
- (void)setRouteData:(id)arg1 delegate:(id)arg2 userInterfaceStyle:(long long)arg3 inWidth:(double)arg4;	// IMP=0x00100000005ea19d
- (void)prepareForReuse;	// IMP=0x00100000005ea100
- (void)_refreshOfflineSubscription;	// IMP=0x00100000005ea001
- (void)dealloc;	// IMP=0x00100000005e9b48
- (void)_updateMenu;	// IMP=0x00100000005e92fd
- (void)_updateMoreButton;	// IMP=0x00100000005e92bc
- (void)_userInterfaceStyleDidChange;	// IMP=0x00100000005e92aa
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000005e67ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

