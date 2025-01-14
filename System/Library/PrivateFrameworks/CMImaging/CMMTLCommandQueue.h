//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMTLDevice, InterceptConfig, NSString;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CMMTLCommandQueue : NSObject
{
    CMMTLDevice *_cmDevice;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    InterceptConfig *_interceptConfig;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020c89
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000020bf8
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000020ba8
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000020b73
@property(readonly) id <MTLDevice> device;
- (id)commandBuffer;	// IMP=0x0000000000020b2d
- (id)commandBufferWithUnretainedReferences;	// IMP=0x0000000000020af2
- (id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2;	// IMP=0x000000000002094d
- (id)initWithCMMTLDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;	// IMP=0x00000000000207bf
- (id)initWithCMMTLDevice:(id)arg1;	// IMP=0x0000000000020637

// Remaining properties
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisStatEnabled

@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N,GgetStatLocations

@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N,GgetStatOptions

@property int backgroundTrackingPID;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) _Bool commitsWithQoS;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool executionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isOpenGLQueue;
@property(copy) NSString *label;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long qosLevel;
@property _Bool skipRender;
@property(readonly) Class superclass;

@end

