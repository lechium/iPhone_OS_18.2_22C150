//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PLGuestAssetSyncEngine, PLManagedAsset, PLPhotoLibrary;

@protocol PLGuestAssetSyncEngineDelegate <NSObject>
- (void)guestAssetSyncManager:(PLGuestAssetSyncEngine *)arg1 isTransferingAsset:(PLManagedAsset *)arg2 toLibrary:(PLPhotoLibrary *)arg3 completion:(void (^)(NSError *))arg4;
- (_Bool)guestAssetSyncManagerShouldCancel:(PLGuestAssetSyncEngine *)arg1;
@end

