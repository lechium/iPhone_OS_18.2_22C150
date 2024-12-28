//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicKitInternal/NSObject-Protocol.h>

@class NSString;
@protocol MusicKit_SoftLinking_MPCPlayerCommandRequest, MusicKit_SoftLinking_MPCPlayerSeekCommand, MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat;

@protocol MusicKit_SoftLinking_MPCPlayerResponseItem <NSObject>
@property(readonly, nonatomic) id <MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> musicKit_playerResponseItem_nowPlayingAudioFormat;
@property(readonly, nonatomic) _Bool musicKit_playerResponseItem_isLoading;
@property(readonly, nonatomic) _Bool musicKit_playerResponseItem_isPlaceholder;
@property(readonly, nonatomic) _Bool musicKit_playerResponseItem_isLiveContent;
@property(readonly, nonatomic) float musicKit_playerResponseItem_defaultRate;
@property(readonly, nonatomic) float musicKit_playerResponseItem_rate;
@property(readonly, nonatomic) double musicKit_playerResponseItem_elapsedTime;
@property(readonly, nonatomic) double musicKit_playerResponseItem_duration;
@property(readonly, nonatomic) double musicKit_playerResponseItem_endTime;
@property(readonly, nonatomic) double musicKit_playerResponseItem_startTime;
@property(readonly, nonatomic) id musicKit_playerResponseItem_underlyingModelObject;
@property(readonly, copy, nonatomic) NSString *musicKit_playerResponseItem_contentItemIdentifier;
- (id <MusicKit_SoftLinking_MPCPlayerCommandRequest>)musicKit_playerResponseItem_removeCommandRequest;
- (id <MusicKit_SoftLinking_MPCPlayerSeekCommand>)musicKit_playerResponseItem_seekCommand;
@end
