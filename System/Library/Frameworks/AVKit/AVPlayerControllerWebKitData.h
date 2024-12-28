//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerController;
@protocol AVPlayerControllerWebKitDelegate;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerWebKitData : NSObject
{
    AVPlayerController *_playerController;	// 8 = 0x8
    _Bool _scrubbing;	// 16 = 0x10
    id <AVPlayerControllerWebKitDelegate> _delegate;	// 24 = 0x18
    double _seekToTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016ba10
@property(nonatomic) double seekToTime; // @synthesize seekToTime=_seekToTime;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) __weak id <AVPlayerControllerWebKitDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPlayerController:(id)arg1;	// IMP=0x000000000016b82d

@end
