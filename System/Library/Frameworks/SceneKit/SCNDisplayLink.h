//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, SCNRecursiveLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    CADisplayLink *_caDisplayLink;	// 8 = 0x8
    _Atomic double _lastDisplayLinkTime;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_coalescingSource;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    CDUnknownBlockType _adaptativeFrameDuration;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    _Bool _paused;	// 56 = 0x38
    _Bool _invalidated;	// 57 = 0x39
    double _lastFrameTime;	// 64 = 0x40
    float _preferredFrameRate;	// 72 = 0x48
    SCNRecursiveLock *_runningLock;	// 80 = 0x50
    _Atomic int _queuedFrameCount;	// 88 = 0x58
}

- (_Bool)_isInvalidated;	// IMP=0x0000000000232305
- (void)setNeedsDisplay;	// IMP=0x00000000002322f1
- (void)invalidate;	// IMP=0x000000000023228f
- (void)_caDisplayLinkCallback;	// IMP=0x000000000023225d
- (void)_callbackWithTime:(double)arg1;	// IMP=0x00000000002320bf
- (int)queuedFrameCount;	// IMP=0x00000000002320b6
@property(nonatomic) float preferredFrameRate;
@property(copy, nonatomic) CDUnknownBlockType adaptativeFrameRate;
- (_Bool)setPaused:(_Bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;	// IMP=0x0000000000231efd
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;	// IMP=0x0000000000231dac
- (id)initWithQueue:(id)arg1 screen:(id)arg2 policy:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000231b34
- (id)init;	// IMP=0x0000000000231b26

@end

