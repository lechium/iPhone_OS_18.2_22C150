//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class PauseMediaIntent;

@protocol PauseMediaIntentHandling <NSObject>
- (void)resolveDevicesForPauseMedia:(PauseMediaIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handlePauseMedia:(PauseMediaIntent *)arg1 completion:(void (^)(PauseMediaIntentResponse *))arg2;

@optional
- (void)confirmPauseMedia:(PauseMediaIntent *)arg1 completion:(void (^)(PauseMediaIntentResponse *))arg2;
@end
