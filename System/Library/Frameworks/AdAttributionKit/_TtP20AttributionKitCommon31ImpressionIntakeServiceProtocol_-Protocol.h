//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL;

@protocol _TtP20AttributionKitCommon31ImpressionIntakeServiceProtocol_
- (void)processReengagementWithAdvertisedItemID:(unsigned long long)arg1 intakeRequestData:(NSData *)arg2 reengagementURL:(NSURL *)arg3 reply:(void (^)(NSData *))arg4;
- (void)recordImpressionWithAdvertisedItemID:(unsigned long long)arg1 intakeRequestData:(NSData *)arg2 reply:(void (^)(NSData *))arg3;
@end
