//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, NSDate, NSString, TVPPlaybackState, VUIPlayer;
@protocol VUILivePostPlayController;

__attribute__((visibility("hidden")))
@interface VUIMultiviewPlaybackInfo : NSObject
{
    _Bool _playsFromStart;	// 8 = 0x8
    _Bool _pausedDueToInterruption;	// 9 = 0x9
    int _disabledAudioTrackId;	// 12 = 0xc
    VUIPlayer *_player;	// 16 = 0x10
    AVPlayerViewController *_playerViewController;	// 24 = 0x18
    long long _context;	// 32 = 0x20
    NSObject<VUILivePostPlayController> *_livePostPlayController;	// 40 = 0x28
    NSString *_broadcastLocale;	// 48 = 0x30
    NSDate *_resumeDate;	// 56 = 0x38
    TVPPlaybackState *_backgroundPlayerState;	// 64 = 0x40
    id _notificationToken;	// 72 = 0x48
}

+ (id)prospectivePlaybackInfo;	// IMP=0x00600000000ebdb1
- (void).cxx_destruct;	// IMP=0x00000000000ecfa1
@property(nonatomic) int disabledAudioTrackId; // @synthesize disabledAudioTrackId=_disabledAudioTrackId;
@property(retain, nonatomic) id notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) TVPPlaybackState *backgroundPlayerState; // @synthesize backgroundPlayerState=_backgroundPlayerState;
@property(retain, nonatomic) NSDate *resumeDate; // @synthesize resumeDate=_resumeDate;
@property(nonatomic) _Bool pausedDueToInterruption; // @synthesize pausedDueToInterruption=_pausedDueToInterruption;
@property(readonly, nonatomic) NSString *broadcastLocale; // @synthesize broadcastLocale=_broadcastLocale;
@property(readonly, nonatomic) _Bool playsFromStart; // @synthesize playsFromStart=_playsFromStart;
@property(retain, nonatomic) NSObject<VUILivePostPlayController> *livePostPlayController; // @synthesize livePostPlayController=_livePostPlayController;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) VUIPlayer *player; // @synthesize player=_player;
- (void)swapActiveAudioWithPlaybackInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ec89f
- (id)_audioTrackForPlayer:(id)arg1 withIdentifier:(int)arg2;	// IMP=0x00000000000ec6a1
- (id)_enabledAudioTrackForPlayer:(id)arg1;	// IMP=0x00000000000ec423
- (void)_waitForExternalPlaybackToEndForPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ec343
- (void)waitForExternalPlaybackToBecomeType:(long long)arg1 forPlayer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec051
- (_Bool)_audioContainsAirPlayRoute;	// IMP=0x00000000000ebe74
@property(readonly, nonatomic) _Bool isAtLiveEdge;
- (void)dealloc;	// IMP=0x00000000000ebd6f
- (id)initWithPlayer:(id)arg1 playerViewController:(id)arg2 playsFromStart:(_Bool)arg3 broadcastLocale:(id)arg4 livePostPlayController:(id)arg5;	// IMP=0x00000000000ebb84

@end
