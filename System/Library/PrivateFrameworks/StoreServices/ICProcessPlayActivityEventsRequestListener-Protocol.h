//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ICProcessPlayActivityEventsRequestListener <NSObject>
- (void)completePendingPlayActivityEvents:(NSArray *)arg1 forSessionToken:(unsigned long long)arg2 result:(unsigned long long)arg3 withReplyBlock:(void (^)(NSError *))arg4;
- (void)insertPlayActivityEvents:(NSArray *)arg1 withReplyBlock:(void (^)(NSError *))arg2;
- (void)removePlayActivityEventsUptoRevision:(unsigned long long)arg1 withReplyBlock:(void (^)(NSError *))arg2;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(NSString *)arg1 storeAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(_Bool)arg3 withReplyBlock:(void (^)(NSArray *, unsigned long long, NSError *))arg4;
- (void)setRevision:(unsigned long long)arg1 revisionVersionToken:(NSString *)arg2 forEndpointIdentifier:(NSString *)arg3 withReplyBlock:(void (^)(NSError *))arg4;
- (void)flushPlayActivityEventsForEndPointIdentifier:(NSString *)arg1 withReplyBlock:(void (^)(NSError *))arg2;
@end

