//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VCStreamInputAudio
{
    CDUnknownFunctionPointerType _sampleBufferDelegateCallback;	// 104 = 0x68
    void *_sampleBufferDelegateCallbackContext;	// 112 = 0x70
    struct os_unfair_lock_s _sampleBufferDelegateCallbackLock;	// 120 = 0x78
}

- (void)registerSampleBufferCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0000000000376c96
- (void)dealloc;	// IMP=0x0000000000376c0c
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;	// IMP=0x0000000000376b1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

