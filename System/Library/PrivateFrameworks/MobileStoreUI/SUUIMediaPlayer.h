//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVController, MPAVItem, SUUIMediaPlayerItemStatus;

__attribute__((visibility("hidden")))
@interface SUUIMediaPlayer : NSObject
{
    _Bool _playing;	// 8 = 0x8
    float _rate;	// 12 = 0xc
    SUUIMediaPlayerItemStatus *_playerItem;	// 16 = 0x10
    MPAVController *_player;	// 24 = 0x18
    MPAVItem *_currentItem;	// 32 = 0x20
    id _periodicTimeObserver;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000048131
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) SUUIMediaPlayerItemStatus *playerItem; // @synthesize playerItem=_playerItem;

@end

