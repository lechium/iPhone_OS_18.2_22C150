//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPMediaPlayable-Protocol.h>

@protocol LPInProcessMediaPlayable <LPMediaPlayable>
@property(readonly, nonatomic) _Bool shouldUnmuteWhenUserAdjustsVolume;
@property(readonly, nonatomic) _Bool usesSharedAudioSession;
@property(readonly, nonatomic, getter=isFullScreen) _Bool fullScreen;
@property(readonly, nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic, getter=isActive) _Bool active;

@optional
@property(readonly, nonatomic) double unobscuredAreaFraction;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) unsigned long long lastInteractionTimestamp;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

- (_Bool)releaseDecodingResourcesIfInactive;
@end
