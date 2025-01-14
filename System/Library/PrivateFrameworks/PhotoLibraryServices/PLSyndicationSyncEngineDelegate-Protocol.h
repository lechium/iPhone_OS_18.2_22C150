//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, PLPhotoLibrary, PLSyndicationSyncEngine;

@protocol PLSyndicationSyncEngineDelegate <NSObject>
- (_Bool)syncManager:(PLSyndicationSyncEngine *)arg1 shouldContinueWithLibrary:(PLPhotoLibrary *)arg2;
- (void)executeQueryForSyncManager:(PLSyndicationSyncEngine *)arg1 type:(long long)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 batchHandler:(void (^)(NSArray *, _Bool *))arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)executeQueryForSyncManager:(PLSyndicationSyncEngine *)arg1 type:(long long)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 itemHandler:(void (^)(CSSearchableItem *, _Bool *))arg5 completionHandler:(void (^)(NSError *))arg6;
@end

