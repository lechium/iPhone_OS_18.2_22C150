//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiometricKit/BKFaceDetectOperation.h>

@class AWUnitTestPearlDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation
{
    NSObject<OS_dispatch_queue> *_awQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_awInitTimer;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_deadlineTimer;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_streamingTimer;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
    _Bool _finished;	// 41 = 0x29
    _Bool _errorState;	// 42 = 0x2a
    AWUnitTestPearlDevice *_unitTestDevice;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000029d3b
@property(nonatomic) __weak AWUnitTestPearlDevice *unitTestDevice; // @synthesize unitTestDevice=_unitTestDevice;
- (void)awSetFaceDetectError:(_Bool)arg1;	// IMP=0x0000000000029cb9
- (void)awSetFaceFound;	// IMP=0x0000000000029c67
- (void)cancel;	// IMP=0x0000000000029c15
- (void)awDeliverFaceFound;	// IMP=0x00000000000299b2
- (void)awFinishWithReason:(long long)arg1;	// IMP=0x00000000000296fa
- (void)startWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000295cd
- (void)awDeliverStreamingEvent;	// IMP=0x0000000000029309
- (void)setErrorState:(_Bool)arg1;	// IMP=0x00000000000292b4
- (_Bool)startStreamWithError:(id *)arg1;	// IMP=0x0000000000028eba
- (_Bool)startWithError:(id *)arg1;	// IMP=0x0000000000028bb9
- (long long)state;	// IMP=0x0000000000028b20
- (void)dealloc;	// IMP=0x0000000000028ab0
- (id)init;	// IMP=0x000000000002889d

@end

