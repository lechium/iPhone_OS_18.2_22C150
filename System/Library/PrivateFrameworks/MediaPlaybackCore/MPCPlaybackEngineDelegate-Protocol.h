//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVItem, MPCPlaybackEngine, MPCSharedListeningEvent, MPPropertySet, NSError;

@protocol MPCPlaybackEngineDelegate <NSObject>

@optional
- (void)engine:(MPCPlaybackEngine *)arg1 didEndSharedListeningSessionWithError:(NSError *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didReceiveSharedListeningEvent:(MPCSharedListeningEvent *)arg2;
- (MPPropertySet *)requestedPropertySetForEngine:(MPCPlaybackEngine *)arg1;
- (void)engine:(MPCPlaybackEngine *)arg1 requiresAuthorizationToPlayItem:(MPAVItem *)arg2 reason:(long long)arg3 authorizationHandler:(void (^)(_Bool, NSError *))arg4;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToPlayItem:(MPAVItem *)arg2 withError:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToPlayFirstItem:(MPAVItem *)arg2 withError:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToActivateWithError:(NSError *)arg2 resolution:(void (^)(_Bool))arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 prepareForActivationWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didPauseForLeaseEndWithError:(NSError *)arg2;
- (void)engineDidPauseForLeaseEnd:(MPCPlaybackEngine *)arg1;
@end

