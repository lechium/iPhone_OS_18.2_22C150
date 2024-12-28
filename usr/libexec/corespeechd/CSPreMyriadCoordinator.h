//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSPreMyriadVoiceTriggerMetaData, NSDictionary, NSMutableDictionary, NSString;
@protocol CSSecondPassProgressProviding, CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSPreMyriadCoordinator : NSObject
{
    id <CSVoiceTriggerDelegate> _delegate;	// 8 = 0x8
    id <CSSecondPassProgressProviding> _builtInSeconPassProgressProvider;	// 16 = 0x10
    id <CSSecondPassProgressProviding> _remoraSecondPassProgressProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSDictionary *_pendingRemoraVoiceTriggerResult;	// 40 = 0x28
    NSString *_pendingRemoraVoiceTriggerDeviceId;	// 48 = 0x30
    CDUnknownBlockType _pendingRemoraVoiceTriggerCompletionBlk;	// 56 = 0x38
    unsigned long long _pendingRemoraVoiceTriggerDetectedTime;	// 64 = 0x40
    NSDictionary *_pendingBuiltInVoiceTriggerResult;	// 72 = 0x48
    CDUnknownBlockType _pendingBuiltInVoiceTriggerCompletionBlk;	// 80 = 0x50
    unsigned long long _pendingBuiltInVoiceTriggerDetectedTime;	// 88 = 0x58
    CSPreMyriadVoiceTriggerMetaData *_builtInVoiceTriggerMetaData;	// 96 = 0x60
    NSMutableDictionary *_accessoryVoiceTriggerMetaDataByDeviceId;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000013b13
@property(retain, nonatomic) NSMutableDictionary *accessoryVoiceTriggerMetaDataByDeviceId; // @synthesize accessoryVoiceTriggerMetaDataByDeviceId=_accessoryVoiceTriggerMetaDataByDeviceId;
@property(retain, nonatomic) CSPreMyriadVoiceTriggerMetaData *builtInVoiceTriggerMetaData; // @synthesize builtInVoiceTriggerMetaData=_builtInVoiceTriggerMetaData;
@property(nonatomic) unsigned long long pendingBuiltInVoiceTriggerDetectedTime; // @synthesize pendingBuiltInVoiceTriggerDetectedTime=_pendingBuiltInVoiceTriggerDetectedTime;
@property(copy, nonatomic) CDUnknownBlockType pendingBuiltInVoiceTriggerCompletionBlk; // @synthesize pendingBuiltInVoiceTriggerCompletionBlk=_pendingBuiltInVoiceTriggerCompletionBlk;
@property(retain, nonatomic) NSDictionary *pendingBuiltInVoiceTriggerResult; // @synthesize pendingBuiltInVoiceTriggerResult=_pendingBuiltInVoiceTriggerResult;
@property(nonatomic) unsigned long long pendingRemoraVoiceTriggerDetectedTime; // @synthesize pendingRemoraVoiceTriggerDetectedTime=_pendingRemoraVoiceTriggerDetectedTime;
@property(copy, nonatomic) CDUnknownBlockType pendingRemoraVoiceTriggerCompletionBlk; // @synthesize pendingRemoraVoiceTriggerCompletionBlk=_pendingRemoraVoiceTriggerCompletionBlk;
@property(retain, nonatomic) NSString *pendingRemoraVoiceTriggerDeviceId; // @synthesize pendingRemoraVoiceTriggerDeviceId=_pendingRemoraVoiceTriggerDeviceId;
@property(retain, nonatomic) NSDictionary *pendingRemoraVoiceTriggerResult; // @synthesize pendingRemoraVoiceTriggerResult=_pendingRemoraVoiceTriggerResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSSecondPassProgressProviding> remoraSecondPassProgressProvider; // @synthesize remoraSecondPassProgressProvider=_remoraSecondPassProgressProvider;
@property(nonatomic) __weak id <CSSecondPassProgressProviding> builtInSeconPassProgressProvider; // @synthesize builtInSeconPassProgressProvider=_builtInSeconPassProgressProvider;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)secondPassDidStartForClient:(unsigned long long)arg1 deviceId:(id)arg2 withFirstPassEstimate:(double)arg3;	// IMP=0x001000000001381f
- (void)secondPassDidStopForClient:(unsigned long long)arg1 deviceId:(id)arg2;	// IMP=0x00100000000136ac
- (void)voiceTriggerDidRejected:(id)arg1 deviceId:(id)arg2;	// IMP=0x00100000000135e4
- (void)raiseToSpeakDetected:(id)arg1;	// IMP=0x001000000001358a
- (void)voiceTriggerGotSuperVector:(id)arg1;	// IMP=0x0010000000013530
- (void)keywordDetectorDidDetectKeyword;	// IMP=0x00100000000134ff
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;	// IMP=0x00100000000134a5
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;	// IMP=0x00100000000133dd
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000013326
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001327a
- (_Bool)_isRemoraSecondPassRunning;	// IMP=0x00100000000131d7
- (void)_getHighestRemoraFirstPassGoodnessScore:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013090
- (_Bool)handlePendingBuiltInVoiceTriggerIfNeeded;	// IMP=0x0010000000012eb0
- (void)_clearPendingBuiltInVoiceTrigger;	// IMP=0x0010000000012db2
- (_Bool)handlePendingRemoraVoiceTriggerIfNeeded;	// IMP=0x0010000000012b78
- (void)_clearPendingRemoraVoiceTrigger;	// IMP=0x0010000000012a4d
- (_Bool)isRemoraVoiceTriggerEvent:(id)arg1;	// IMP=0x001000000001293c
- (_Bool)isBultInVoiceTriggerEvent:(id)arg1;	// IMP=0x001000000001282b
- (id)init;	// IMP=0x001000000001277d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
