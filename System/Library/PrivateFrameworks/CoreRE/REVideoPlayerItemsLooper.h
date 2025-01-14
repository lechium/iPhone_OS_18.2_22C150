//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVQueuePlayer, NSArray;

__attribute__((visibility("hidden")))
@interface REVideoPlayerItemsLooper : NSObject
{
    AVQueuePlayer *_player;	// 8 = 0x8
    NSArray *_loopedAssets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003adb97
@property(copy, nonatomic) NSArray *loopedAssets; // @synthesize loopedAssets=_loopedAssets;
@property(retain, nonatomic) AVQueuePlayer *player; // @synthesize player=_player;
- (void)playerItemAtEnd:(id)arg1;	// IMP=0x00000000003adaec
- (void)observeLastAndEnqueueAssetItems;	// IMP=0x00000000003ad991
- (void)enqueueAssetItems;	// IMP=0x00000000003ad779
- (void)dealloc;	// IMP=0x00000000003ad6c6
- (id)initWithPlayer:(id)arg1 assets:(id)arg2;	// IMP=0x00000000003ad5e3

@end

