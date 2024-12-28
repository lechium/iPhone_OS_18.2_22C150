//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GPUToolsCapture/MTLEvent-Protocol.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLLateEvalEvent, MTLSharedEventSPI><MTLLateEvalEvent><MTLEvent;

@interface CaptureMTLLateEvalEvent : NSObject <MTLEvent>
{
    id <MTLSharedEventSPI><MTLLateEvalEvent><MTLEvent> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d138e
- (void)dealloc;	// IMP=0x00000000000d128a
@property unsigned long long signaledValue;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (id)IOSurfaceSharedEvent;	// IMP=0x00000000000d0fbd
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000d0f66
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000d0f55
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000d0e94
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000d0e34
- (id)originalObject;	// IMP=0x00000000000d0e26
- (_Bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;	// IMP=0x00000000000d0c9a
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d0bd2
- (id)newSharedEventHandle;	// IMP=0x00000000000d0ada
@property(readonly) id <MTLLateEvalEvent> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x00000000000d09ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
