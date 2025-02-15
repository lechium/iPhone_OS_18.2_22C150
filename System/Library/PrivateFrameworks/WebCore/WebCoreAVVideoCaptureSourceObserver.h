//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVVideoCaptureSourceObserver : NSObject
{
    struct ThreadSafeWeakPtr<WebCore::AVVideoCaptureSource> m_captureSource;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000119b60
- (void).cxx_destruct;	// IMP=0x0000000000119ae0
- (void)endSessionInterrupted:(id)arg1;	// IMP=0x0000000000119990
- (void)beginSessionInterrupted:(id)arg1;	// IMP=0x0000000000119230
- (void)sessionRuntimeError:(id)arg1;	// IMP=0x00000000001186f0
- (void)deviceConnectedDidChange:(id)arg1;	// IMP=0x0000000000118580
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000118250
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;	// IMP=0x0000000000117830
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x0000000000117530
- (void)removeNotificationObservers;	// IMP=0x00000000001174f0
- (void)addNotificationObservers;	// IMP=0x0000000000117390
- (void)disconnect;	// IMP=0x00000000001172d0
- (id)initWithCaptureSource:(void *)arg1;	// IMP=0x0000000000117190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

