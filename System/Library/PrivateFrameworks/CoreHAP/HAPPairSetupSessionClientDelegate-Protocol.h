//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPPairSetupSessionDelegate-Protocol.h>

@class HAPPairSetupSession, NSString;

@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(void (^)(NSString *, NSError *))arg2;

@optional
- (_Bool)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(HAPPairSetupSession *)arg1;
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveProductData:(NSString *)arg2;
@end

