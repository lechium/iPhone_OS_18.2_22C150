//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVPlayerControllerWebKitDelegate;

@interface NSObject (AVPlayerController_WebKitAdditions)
- (id)_avkit_playerControllerWebKitData;	// IMP=0x003000000016bcd4
@property(nonatomic, setter=avkit_setWebKitDelegate:) __weak id <AVPlayerControllerWebKitDelegate> avkit_webkitDelegate;
@property(nonatomic, setter=avkit_setWebKitSeekToTime:) double avkit_webkitSeekToTime;
@property(nonatomic, setter=avkit_setWebKitIsScrubbing:) _Bool avkit_webkitIsScrubbing;
- (_Bool)avkit_isAVPlayerControllerOrSubclass;	// IMP=0x003000000016ba34
@end

