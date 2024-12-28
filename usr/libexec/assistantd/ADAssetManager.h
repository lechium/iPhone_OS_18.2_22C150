//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDMClient, MorphunAssets, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SFEntitledAssetManager;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADAssetManager : NSObject
{
    NSString *_currentLanguageCode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_group;	// 32 = 0x20
    _Bool _supportsSiriUoD;	// 40 = 0x28
    _Bool _supportsSiriHybridUoD;	// 41 = 0x29
    NSMutableDictionary *_assetFetchIntervalBeginDates;	// 48 = 0x30
    NSDictionary *_speechAssetStatusForLocale;	// 56 = 0x38
    NSDictionary *_speechAssetTasksForLocale;	// 64 = 0x40
    SFEntitledAssetManager *_speechAssetManager;	// 72 = 0x48
    NSMutableDictionary *_nlAssetStatus;	// 80 = 0x50
    NSMutableDictionary *_nlRouterAssetStatus;	// 88 = 0x58
    NSDictionary *_attentionAssetStatus;	// 96 = 0x60
    id _attentionAssetManager;	// 104 = 0x68
    CDMClient *_cdmClient;	// 112 = 0x70
    MorphunAssets *_morphunAssetsManager;	// 120 = 0x78
    NSMutableSet *_availabilityObservers;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x0020000000258d92
- (void).cxx_destruct;	// IMP=0x002000000025751e
- (void)_setupOnDemandSubscriberIfNecessary;	// IMP=0x0010000000257518
- (void)dumpAssistantStateChunk:(CDUnknownBlockType)arg1;	// IMP=0x0010000000257410
- (void)_emitUODAssetPreparedEventWithLanguage:(id)arg1 elapsed:(unsigned int)arg2;	// IMP=0x00100000002569e2
- (void)_checkAssetsStatusForIntervalRecording;	// IMP=0x0010000000256793
- (void)_recordAssetsNeededForLanguage:(id)arg1 resetPrevious:(_Bool)arg2;	// IMP=0x00100000002565bf
- (_Bool)_shouldLogAssetsPreparedEvent;	// IMP=0x00100000002565b1
- (void)_subscribeToMorphunAssetStatusForLanguage:(id)arg1;	// IMP=0x0010000000256447
- (id)_fetchAssetStatusForLanguage:(id)arg1;	// IMP=0x0010000000255c7a
- (void)_registerAssetStatusTrackers;	// IMP=0x001000000025596a
- (void)_registerCDMStatusTracker;	// IMP=0x001000000025569e
- (void)assetsUnavailableWithType:(long long)arg1;	// IMP=0x001000000025553f
- (void)assetsAvailableForLocale:(id)arg1 withType:(long long)arg2;	// IMP=0x0010000000255396
- (void)attentionAssetStatus:(id)arg1;	// IMP=0x00100000002552d2
- (void)assetStatus:(id)arg1;	// IMP=0x001000000025520e
- (void)notifyObserversLanguageCodeChanged:(id)arg1;	// IMP=0x00100000002550fd
- (void)notifyObserversAssetAvailabilityChanged;	// IMP=0x0010000000255017
- (void)removeAvailabilityObserver:(id)arg1;	// IMP=0x0010000000254f58
- (void)addAvailabilityObserver:(id)arg1;	// IMP=0x0010000000254e99
- (void)languageCodeWasChangedTo:(id)arg1;	// IMP=0x0010000000254d4e
- (void)fetchAssetsAvailabilityForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000254a6b
- (id)assetsAvailableStatusForLanguage:(id)arg1;	// IMP=0x0010000000254855
- (id)initWithLanguageCode:(id)arg1 speechAssetManager:(id)arg2 cdmClient:(id)arg3 morphunAssetManager:(id)arg4 supportsSiriUoD:(_Bool)arg5 supportsSiriHybridUoD:(_Bool)arg6;	// IMP=0x00100000002545d4
- (id)init;	// IMP=0x001000000025452d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
