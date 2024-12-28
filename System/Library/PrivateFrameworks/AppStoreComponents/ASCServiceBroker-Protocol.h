//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@protocol ASCAppOfferStateDelegate;

@protocol ASCServiceBroker <NSObject>
- (void)getUtilityServiceWithReplyHandler:(void (^)(id <ASCUtilityService>, NSError *))arg1;
- (void)getAppOfferStateServiceForDelegate:(id <ASCAppOfferStateDelegate>)arg1 withReplyHandler:(void (^)(id <ASCAppOfferStateService>, NSError *))arg2;
- (void)getMetricsServiceWithReplyHandler:(void (^)(id <ASCMetricsService>, NSError *))arg1;
- (void)getLockupFetcherServiceWithReplyHandler:(void (^)(id <ASCLockupFetcherService>, NSError *))arg1;
- (void)testConnectionWithReplyHandler:(void (^)(NSError *))arg1;
@end
