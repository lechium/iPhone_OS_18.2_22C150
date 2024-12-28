//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface AVDisplayLink : NSObject
{
    CDUnknownBlockType _linkFired;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    id _observer;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017c84c
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType linkFired; // @synthesize linkFired=_linkFired;
@property(readonly, nonatomic) double runningTime;
- (void)linkFired:(id)arg1;	// IMP=0x000000000017c6bf
- (void)invalidate;	// IMP=0x000000000017c656
- (void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000017c4e9

@end
