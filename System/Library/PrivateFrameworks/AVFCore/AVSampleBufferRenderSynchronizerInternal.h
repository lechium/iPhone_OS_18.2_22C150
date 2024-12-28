//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSampleBufferVideoRenderer, AVWeakReference, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRenderSynchronizerInternal : NSObject
{
    AVWeakReference *weakObserver;	// 8 = 0x8
    struct OpaqueCMTimebase *readOnlyTimebase;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *rateQueue;	// 24 = 0x18
    float rate;	// 32 = 0x20
    CDStruct_1b6d18a9 mostRecentlySetTime;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *rendererListQueue;	// 64 = 0x40
    NSMutableArray *renderers;	// 72 = 0x48
    NSMutableArray *timedRenderRemovals;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;	// 88 = 0x58
    struct OpaqueFigSampleBufferRenderSynchronizer *figSynchronizer;	// 96 = 0x60
    AVSampleBufferVideoRenderer *rendererTrackedBySTS;	// 104 = 0x68
    NSMutableDictionary *STSLabelSinks;	// 112 = 0x70
}

@end
