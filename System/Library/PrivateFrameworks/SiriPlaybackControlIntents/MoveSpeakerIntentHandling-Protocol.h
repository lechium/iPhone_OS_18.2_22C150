//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class MoveSpeakerIntent;

@protocol MoveSpeakerIntentHandling <NSObject>
- (void)resolveDestinationsForMoveSpeaker:(MoveSpeakerIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveSourceForMoveSpeaker:(MoveSpeakerIntent *)arg1 withCompletion:(void (^)(MoveSpeakerSourceResolutionResult *))arg2;
- (void)handleMoveSpeaker:(MoveSpeakerIntent *)arg1 completion:(void (^)(MoveSpeakerIntentResponse *))arg2;

@optional
- (void)confirmMoveSpeaker:(MoveSpeakerIntent *)arg1 completion:(void (^)(MoveSpeakerIntentResponse *))arg2;
@end

