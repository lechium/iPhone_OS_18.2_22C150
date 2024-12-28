//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplay, CADisplayLink, NSTimer;

__attribute__((visibility("hidden")))
@interface SKDisplayLink : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    id _client;	// 16 = 0x10
    CADisplayLink *_caDisplayLink;	// 24 = 0x18
    CADisplay *_display;	// 32 = 0x20
    _Bool _paused;	// 40 = 0x28
    _Bool _callbackAlreadyInProgress;	// 41 = 0x29
    double _previousFrameTime;	// 48 = 0x30
    float _preferredFramesPerSecond;	// 56 = 0x38
    CDUnknownBlockType _block;	// 64 = 0x40
    float _averageFrameTime;	// 72 = 0x48
    long long _frameCount;	// 80 = 0x50
    double _frameCountBeginTime;	// 88 = 0x58
}

+ (id)displayLinkWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;	// IMP=0x006000000007b59b
- (void).cxx_destruct;	// IMP=0x000000000007bc11
- (void)_caDisplayLinkCallback;	// IMP=0x000000000007bba7
- (void)dealloc;	// IMP=0x000000000007bb34
- (void)_callbackForNextFrame:(double)arg1;	// IMP=0x000000000007b94b
- (void)invalidate;	// IMP=0x000000000007b939
- (void)_teardown;	// IMP=0x000000000007b8e6
- (void)_setup;	// IMP=0x000000000007b7a6
@property(retain, nonatomic) CADisplay *display;
@property(nonatomic) long long preferredFramesPerSecond;
@property(nonatomic, getter=isPaused) _Bool paused;
- (id)init;	// IMP=0x000000000007b58d
- (id)initWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;	// IMP=0x000000000007b477
- (void)_setCallbackAlreadyInProgress:(_Bool)arg1;	// IMP=0x000000000007b46e
- (_Bool)_callbackAlreadyInProgress;	// IMP=0x000000000007b465

@end
