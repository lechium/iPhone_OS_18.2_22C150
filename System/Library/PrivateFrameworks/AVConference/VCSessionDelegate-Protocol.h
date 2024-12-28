//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>
#import <AVConference/VCRateAdaptationDelegate-Protocol.h>

@class NSDictionary, NSError, NSString, VCSession;

@protocol VCSessionDelegate <NSObject, VCRateAdaptationDelegate>
- (void)vcSessionShouldReconnect:(VCSession *)arg1;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didDetectError:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 participantDidStopReacting:(NSString *)arg2;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 reactionDidStart:(NSString *)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(NSString *)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoPausedDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioPausedDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteScreenEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 mixingDidChangeForMediaType:(unsigned int)arg3 mixingMediaType:(unsigned int)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteMediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 mediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4 didSucceed:(_Bool)arg5 error:(NSError *)arg6;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 screenEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 oneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;
@end
