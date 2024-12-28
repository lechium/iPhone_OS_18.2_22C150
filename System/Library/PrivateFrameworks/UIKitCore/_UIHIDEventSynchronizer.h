//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSRunLoop, _UIHIDPath, _UIHIDPathCollection, _UIHIDPathSynchronizationFilter;

__attribute__((visibility("hidden")))
@interface _UIHIDEventSynchronizer : NSObject
{
    unsigned long long _strategy;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    CDUnknownBlockType _outputEventsHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSRunLoop *_runLoop;	// 40 = 0x28
    struct CGPoint _initialPosition;	// 48 = 0x30
    double _timestampOfInitialInputEvent;	// 64 = 0x40
    _UIHIDPath *_outputPath;	// 72 = 0x48
    _UIHIDPathCollection *_outputPathCollection;	// 80 = 0x50
    _UIHIDPathSynchronizationFilter *_pathFilter;	// 88 = 0x58
    long long _endingDeliveryPhase;	// 96 = 0x60
    CADisplayLink *_displayLink;	// 104 = 0x68
    int _offsetToNextCoalescableEventIndex;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000002d0212
- (void)_renderEvents:(id)arg1;	// IMP=0x00000000002cfed8
- (void)dealloc;	// IMP=0x00000000002cec0d

@end
