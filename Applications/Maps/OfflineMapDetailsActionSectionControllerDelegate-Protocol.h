//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MapDataSubscriptionInfo;

@protocol OfflineMapDetailsActionSectionControllerDelegate <NSObject>
- (void)offlineMapDetailsActionSectionControllerDidSelectDownloadNowOnPairedDevice:(MapDataSubscriptionInfo *)arg1;
- (void)offlineMapDetailsActionSectionControllerDidSelectRemoveFromPairedDevice:(MapDataSubscriptionInfo *)arg1;
- (void)offlineMapDetailsActionSectionControllerDidSelectAddToPairedDevice:(MapDataSubscriptionInfo *)arg1;
- (void)offlineMapDetailsActionSectionControllerDidSelectPauseDownload:(MapDataSubscriptionInfo *)arg1;
- (void)offlineMapDetailsActionSectionControllerDidSelectResizeMap:(MapDataSubscriptionInfo *)arg1;
- (void)offlineMapDetailsActionSectionControllerDidSelectRenameMap:(MapDataSubscriptionInfo *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)offlineMapDetailsActionSectionControllerDidSelectDeleteMap:(MapDataSubscriptionInfo *)arg1;
@end

