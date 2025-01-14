//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OS_dispatch_queue, _TtC8MapsSync19MapsSyncDataSession;

@protocol _TtP8MapsSync21MapsSyncQueryProtocol_
@property(nonatomic, readonly) _Bool isReady;
- (_TtC8MapsSync19MapsSyncDataSession *)getSession;
- (void)sendNotification;
- (void)deleteAllObjectsWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchCountWithCompletion:(void (^)(long long, NSError *))arg1 queue:(OS_dispatch_queue *)arg2;
- (void)reloadContentsWithCompletion:(void (^)(NSArray *, NSError *))arg1 queue:(OS_dispatch_queue *)arg2;
@end

