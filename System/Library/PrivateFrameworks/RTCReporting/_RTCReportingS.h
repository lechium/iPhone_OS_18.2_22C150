//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol RTCReportingMessageSentNotifier;

@interface _RTCReportingS : NSObject
{
    MISSING_TYPE *messageLoggingBlock;	// 8 = 0x8
    MISSING_TYPE *messageSentDelegate;	// 24 = 0x18
    MISSING_TYPE *lock;	// 32 = 0x20
    MISSING_TYPE *session;	// 40 = 0x28
    MISSING_TYPE *configured;	// 48 = 0x30
    MISSING_TYPE *connectionManager;	// 56 = 0x38
    MISSING_TYPE *generatedSessionID;	// 64 = 0x40
    MISSING_TYPE *sessionInfo;	// 80 = 0x50
    MISSING_TYPE *userInfo;	// 88 = 0x58
    MISSING_TYPE *deprecatedPeriodic;	// 96 = 0x60
    MISSING_TYPE *legacyAVCSupport;	// 104 = 0x68
    MISSING_TYPE *earlyCachedEvents;	// 112 = 0x70
    MISSING_TYPE *completelyDisabled;	// 120 = 0x78
    MISSING_TYPE *extraFields;	// 128 = 0x80
    MISSING_TYPE *terminated;	// 136 = 0x88
    MISSING_TYPE *sentEventCount;	// 144 = 0x90
}

+ (id)_privacyLogs:(id *)arg1;	// IMP=0x0060000000016831
+ (void)updateEarlyCacheLimitWithNewLimit:(long long)arg1;	// IMP=0x00600000000162f5
+ (_Bool)closeEphemeralSessiontWithSessionId:(id)arg1;	// IMP=0x00600000000150e9
+ (id)createEphemeralSessionWithSessionInfo:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x006000000001504a
+ (id)newHierarchyTokenFromParentToken:(id)arg1;	// IMP=0x0060000000015006
+ (_Bool)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id *)arg6;	// IMP=0x0060000000014b2c
+ (void)regeneratePersistentIdentifierForDNU:(_Bool)arg1;	// IMP=0x00600000000147c1
+ (id)getPersistentIdentifierForDNU:(_Bool)arg1;	// IMP=0x0060000000014789
- (void).cxx_destruct;	// IMP=0x00000000000164eb
- (id)init;	// IMP=0x00000000000168ec
- (void)dealloc;	// IMP=0x00000000000164ce
- (void)terminateSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015fcb
- (_Bool)setDigestKey:(id)arg1 algorithm:(int)arg2;	// IMP=0x000000000001588d
- (_Bool)uploadDataArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000157e8
- (_Bool)uploadFileWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001570d
- (_Bool)serverSupportsFileUpload;	// IMP=0x00000000000156fb
- (void)unregisterPeriodTaskForModule:(unsigned int)arg1;	// IMP=0x00000000000156cd
- (_Bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(_Bool)arg2 needToReport:(_Bool)arg3 serviceBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001560c
- (void)stopLogTimer;	// IMP=0x00000000000154b7
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;	// IMP=0x0000000000015444
- (void)updateSharedDataForKey:(id)arg1 value:(id)arg2;	// IMP=0x00000000000152e8
- (void)updateSharedDataWithDictionary:(id)arg1;	// IMP=0x00000000000151c9
- (void)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000146fe
- (void)flushMessages;	// IMP=0x0000000000014334
- (_Bool)sendMessageWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014161
- (_Bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000012848
- (id)getReportingSessionID;	// IMP=0x00000000000124b6
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012383
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000117bb
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e359
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;	// IMP=0x000000000000df77
@property(nonatomic) __weak id <RTCReportingMessageSentNotifier> messageSentDelegate; // @synthesize messageSentDelegate;
@property(nonatomic, copy) CDUnknownBlockType messageLoggingBlock;

@end
