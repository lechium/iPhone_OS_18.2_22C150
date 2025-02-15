//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSContiguousActionPerformer, AMSURLAction, AMSURLRequestProperties, AMSURLSession, NSData, NSError, NSMutableData, NSMutableSet, NSSet, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSURLTaskInfo : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
    NSMutableSet *_retryIdentifiers;	// 16 = 0x10
    _Bool _performingBlockWithDataAccess;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSURLSessionTaskMetrics *_metrics;	// 48 = 0x30
    unsigned long long _previousAuthorizationCredentialSource;	// 56 = 0x38
    AMSURLRequestProperties *_properties;	// 64 = 0x40
    AMSURLAction *_receivedAction;	// 72 = 0x48
    NSURLResponse *_response;	// 80 = 0x50
    long long _retryCount;	// 88 = 0x58
    AMSURLSession *_session;	// 96 = 0x60
    NSURLResponse *_originalResponse;	// 104 = 0x68
    unsigned long long _signpostID;	// 112 = 0x70
    NSURLSessionTask *_task;	// 120 = 0x78
    struct os_unfair_recursive_lock_s _taskLock;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_taskQueue;	// 136 = 0x88
    AMSContiguousActionPerformer *_contiguousActionPerformer;	// 144 = 0x90
}

+ (id)sharedTaskQueue;	// IMP=0x0040000000536ff7
+ (id)sharedTaskStore;	// IMP=0x0040000000536fa2
+ (void)removeTaskInfoForTask:(id)arg1;	// IMP=0x0040000000535ecc
+ (id)createTaskInfoForTask:(id)arg1;	// IMP=0x0040000000535c87
+ (id)taskInfoForTask:(id)arg1;	// IMP=0x0040000000535aa7
- (void).cxx_destruct;	// IMP=0x00000000005370d8
@property(readonly, nonatomic) AMSContiguousActionPerformer *contiguousActionPerformer; // @synthesize contiguousActionPerformer=_contiguousActionPerformer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) struct os_unfair_recursive_lock_s taskLock; // @synthesize taskLock=_taskLock;
@property(readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(retain, nonatomic) NSURLResponse *originalResponse; // @synthesize originalResponse=_originalResponse;
- (void)setAccount:(id)arg1;	// IMP=0x0000000000536ebc
- (void)_performDataAccessUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000536e0b
- (void)finishContiguousAsyncActionWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000536dbf
- (void)continueContiguousAsyncActionWithIdentifier:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000536d48
- (unsigned long long)startContiguousAsyncActionWithInitialDataBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000536be8
- (unsigned long long)startContiguousAsyncActionWithInitialBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000536b7a
- (void)performSyncBlockWithExclusiveAccess:(CDUnknownBlockType)arg1;	// IMP=0x0000000000536a55
- (void)performSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005369bd
- (void)performAsyncBlockWithData:(CDUnknownBlockType)arg1;	// IMP=0x00000000005368dd
- (void)performAsyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000536874
- (void)migrateFromTaskInfo:(id)arg1;	// IMP=0x0000000000536735
- (id)createMetricsContextForDecodedObject:(id)arg1;	// IMP=0x0000000000536697
- (void)assertIsOnPrivateQueue;	// IMP=0x0000000000536662
- (void)assertHasExclusiveAccess;	// IMP=0x000000000053661f
- (void)appendData:(id)arg1;	// IMP=0x0000000000536598
- (void)addRetryIdentifier:(id)arg1;	// IMP=0x000000000053653c
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSURLAction *receivedAction; // @synthesize receivedAction=_receivedAction;
@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned long long previousAuthorizationCredentialSource; // @synthesize previousAuthorizationCredentialSource=_previousAuthorizationCredentialSource;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSSet *retryIdentifiers;
@property(readonly, nonatomic) NSData *data;
- (id)initWithTask:(id)arg1;	// IMP=0x0000000000535960

@end

