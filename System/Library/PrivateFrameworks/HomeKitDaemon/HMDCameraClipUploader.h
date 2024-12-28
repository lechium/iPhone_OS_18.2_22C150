//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZone, HMCameraClipEncryptionManager, NAFuture, NSDate, NSDictionary, NSMutableArray, NSObject, NSString, NSUUID;
@protocol HMDCameraClipUploaderDelegate, HMDCameraClipUploaderFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraClipUploader : HMFObject
{
    NSUUID *_clipUUID;	// 8 = 0x8
    id <HMDCameraClipUploaderDelegate> _delegate;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    double _targetFragmentDuration;	// 32 = 0x20
    long long _quality;	// 40 = 0x28
    HMBLocalZone *_localZone;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    NSString *_logIdentifier;	// 64 = 0x40
    HMCameraClipEncryptionManager *_encryptionManager;	// 72 = 0x48
    id <HMDCameraClipUploaderFactory> _factory;	// 80 = 0x50
    NSMutableArray *_operations;	// 88 = 0x58
    NAFuture *_didCreateClipFuture;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0010000000d5432b
- (void).cxx_destruct;	// IMP=0x0000000000d53f29
@property(retain) NAFuture *didCreateClipFuture; // @synthesize didCreateClipFuture=_didCreateClipFuture;
@property(readonly) NSMutableArray *operations; // @synthesize operations=_operations;
@property(readonly) id <HMDCameraClipUploaderFactory> factory; // @synthesize factory=_factory;
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) long long quality; // @synthesize quality=_quality;
@property(readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property __weak id <HMDCameraClipUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000d53c1b
- (_Bool)_isCancelledError:(id)arg1;	// IMP=0x0000000000d53b91
- (void)_handleFatalOperationFailureDueToError:(id)arg1;	// IMP=0x0000000000d53938
- (void)_startNextOperation;	// IMP=0x0000000000d537eb
- (void)_operationCompleted:(id)arg1 finalizeOnError:(_Bool)arg2 future:(id)arg3;	// IMP=0x0000000000d5353a
- (id)_addOperation:(id)arg1 finalizeClipOnError:(_Bool)arg2;	// IMP=0x0000000000d53285
- (id)_createClipWithSignificantEvent:(id)arg1;	// IMP=0x0000000000d530d9
- (id)_createClip;	// IMP=0x0000000000d52f52
- (_Bool)hasAddedCreateClipOperation;	// IMP=0x0000000000d52f1f
- (id)finish;	// IMP=0x0000000000d52e23
- (id)addVideoSegmentData:(id)arg1 duration:(double)arg2 timeOffsetWithinClip:(double)arg3 clipFinalizedBecauseMaxDurationExceeded:(_Bool)arg4;	// IMP=0x0000000000d52b12
- (id)addVideoInitData:(id)arg1;	// IMP=0x0000000000d52860
- (id)addNotificationForSignificantEvent:(id)arg1;	// IMP=0x0000000000d52546
- (id)createClip;	// IMP=0x0000000000d52357
@property(readonly, copy) NSDictionary *stateDump;
- (id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(id)arg5 workQueue:(id)arg6 logIdentifier:(id)arg7 encryptionManager:(id)arg8 factory:(id)arg9;	// IMP=0x0000000000d51f22
- (id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(id)arg5 workQueue:(id)arg6 logIdentifier:(id)arg7;	// IMP=0x0000000000d51e0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
