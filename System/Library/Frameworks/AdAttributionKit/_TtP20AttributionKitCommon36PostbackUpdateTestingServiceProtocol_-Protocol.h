//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP20AttributionKitCommon36PostbackUpdateTestingServiceProtocol_
- (void)clearBiomeWithClearEvent:(NSString *)arg1 reply:(void (^)(NSData *))arg2;
- (void)submitPurchaseEventWithEventData:(NSData *)arg1 reply:(void (^)(NSData *))arg2;
- (void)submitConversionEventWithEventData:(NSData *)arg1 reply:(void (^)(NSData *))arg2;
- (void)fetchReengagementTokensWithReply:(void (^)(NSData *))arg1;
- (void)getSnoutStoriesWithReply:(void (^)(NSData *))arg1;
- (void)updateConversionValue:(NSData *)arg1 reply:(void (^)(NSData *))arg2;
@end

