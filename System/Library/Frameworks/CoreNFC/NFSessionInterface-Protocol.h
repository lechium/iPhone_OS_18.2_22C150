//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol NFSessionInterface
- (oneway void)activateWithToken:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)createHandoffTokenWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (oneway void)prioritizeSessionWithCompletion:(void (^)(void))arg1;
- (oneway void)endSession:(void (^)(void))arg1;
@end

