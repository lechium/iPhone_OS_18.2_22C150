//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12NewsArticles28ArticleViewerAppStateMonitor : NSObject
{
    MISSING_TYPE *onForegroundClosures;	// 8 = 0x8
    MISSING_TYPE *onEnterBackgroundClosures;	// 16 = 0x10
    MISSING_TYPE *onWindowForegroundClosures;	// 24 = 0x18
    MISSING_TYPE *onWindowBackgroundClosures;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000170770
- (id)init;	// IMP=0x00000000001706d0
- (void)performOnApplicationWindowDidBecomeBackground:(CDUnknownBlockType)arg1;	// IMP=0x0000000000170ce0
- (void)performOnApplicationWindowDidBecomeForeground:(CDUnknownBlockType)arg1;	// IMP=0x0000000000170b80
- (void)performOnApplicationDidEnterBackground:(CDUnknownBlockType)arg1;	// IMP=0x0000000000170a20
- (void)performOnApplicationDidBecomeActive:(CDUnknownBlockType)arg1;	// IMP=0x0000000000170a00
- (void)performOnApplicationWillEnterForeground:(CDUnknownBlockType)arg1;	// IMP=0x00000000001708a0

@end
