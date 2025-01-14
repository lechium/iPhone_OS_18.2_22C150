//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSProgressReporting-Protocol.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, NSDictionary, NSObject;
@protocol NSObject, OS_dispatch_queue;

@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;
@property(retain, nonatomic) id <NSObject> transaction;
@property(readonly, nonatomic) long long estimatedWeight;
- (void)removeOldData:(GEOActiveTileGroup *)arg1;
- (void)populateTileGroup:(GEOActiveTileGroup *)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(void (^)(NSError *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;

@optional
- (NSDictionary *)stateWithHints:(struct os_state_hints_s *)arg1;
@end

