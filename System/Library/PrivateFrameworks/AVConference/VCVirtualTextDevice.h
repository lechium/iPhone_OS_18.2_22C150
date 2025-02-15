//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTextDevice : NSObject
{
    int _clientPid;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id _sendDelegate;	// 32 = 0x20
    id _mediaStreamDelegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;	// 48 = 0x30
    struct tagVCMediaStreamDelegateRealtimeInstanceVTable _mediaStreamDelegateFunctions;	// 56 = 0x38
}

@property(nonatomic) struct tagVCMediaStreamDelegateRealtimeInstanceVTable mediaStreamDelegateFunctions; // @synthesize mediaStreamDelegateFunctions=_mediaStreamDelegateFunctions;
- (void)didReceiveText:(id)arg1;	// IMP=0x0000000000358b90
- (void)sendText:(id)arg1;	// IMP=0x000000000035889d
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x00000000003585ab
- (id)setPause:(_Bool)arg1;	// IMP=0x0000000000358589
- (id)resume;	// IMP=0x00000000003582f5
- (id)pause;	// IMP=0x0000000000358061
- (id)stopWithError:(id)arg1;	// IMP=0x0000000000357e5e
- (id)stop;	// IMP=0x0000000000357e4a
- (id)start;	// IMP=0x0000000000357b8d
- (id)sendDelegate;	// IMP=0x0000000000357b7f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property(nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
- (void)dealloc;	// IMP=0x0000000000357a9d
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateFunctions:(const struct tagVCMediaStreamDelegateRealtimeInstanceVTable *)arg4 delegateQueue:(id)arg5;	// IMP=0x0000000000357858
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000357850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

