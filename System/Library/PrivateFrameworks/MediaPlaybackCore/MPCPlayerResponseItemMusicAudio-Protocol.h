//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlayerAudioFormat, MPCPlayerAudioRoute, MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerResponseItemMusicAudio <NSObject>
@property(readonly, nonatomic) MPCPlayerAudioRoute *audioRoute;
@property(readonly, nonatomic) NSArray *alternateFormats;
@property(readonly, nonatomic) long long activeFormatJustification;
@property(readonly, nonatomic) unsigned long long preferredTiers;
@property(readonly, nonatomic) MPCPlayerAudioFormat *activeFormat;
@property(readonly, nonatomic) MPCPlayerAudioFormat *preferredFormat;
- (MPCPlayerCommandRequest *)switchToAlternativeFormat:(MPCPlayerAudioFormat *)arg1;
@end
