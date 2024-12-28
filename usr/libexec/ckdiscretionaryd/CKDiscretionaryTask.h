//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDOperationCallbackProxy, CKDiscretionaryClientConnection, CKDiscretionaryOptions, CKDiscretionarySchedulerTask, NDApplication, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface CKDiscretionaryTask : NSObject
{
    _Bool _isSpringBoardApp;	// 8 = 0x8
    _Bool _running;	// 9 = 0x9
    CKDOperationCallbackProxy *_callbackProxy;	// 16 = 0x10
    CKDiscretionaryClientConnection *_connection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    NSString *_operationID;	// 40 = 0x28
    CKDiscretionaryOptions *_options;	// 48 = 0x30
    CDUnknownBlockType _startHandler;	// 56 = 0x38
    CDUnknownBlockType _suspendHandler;	// 64 = 0x40
    NSObject<OS_os_transaction> *_transaction;	// 72 = 0x48
    NSString *_bundleID;	// 80 = 0x50
    NSString *_cloudDocsContainerID;	// 88 = 0x58
    NDApplication *_application;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_resourceTimer;	// 104 = 0x68
    Class _schedulerClass;	// 112 = 0x70
    CKDiscretionarySchedulerTask *_task;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000052bc
@property(retain, nonatomic) CKDiscretionarySchedulerTask *task; // @synthesize task=_task;
@property(retain, nonatomic) Class schedulerClass; // @synthesize schedulerClass=_schedulerClass;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *resourceTimer; // @synthesize resourceTimer=_resourceTimer;
- (void);	// IMP=0x0010000000005284
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NDApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSString *cloudDocsContainerID; // @synthesize cloudDocsContainerID=_cloudDocsContainerID;
@property(nonatomic) _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) CDUnknownBlockType suspendHandler; // @synthesize suspendHandler=_suspendHandler;
@property(copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(retain, nonatomic) CKDiscretionaryOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) __weak CKDiscretionaryClientConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) CKDOperationCallbackProxy *callbackProxy; // @synthesize callbackProxy=_callbackProxy;
- (void)complete;	// IMP=0x0010000000004f61
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000004cac
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x00100000000049f7
- (id)_schedulerTaskIdentifier;	// IMP=0x00100000000048f5
- (void)dealloc;	// IMP=0x00100000000045e1
- (id)initWithConnection:(id)arg1 operationID:(id)arg2 group:(id)arg3 bundleID:(id)arg4 isSpringBoardApp:(_Bool)arg5 requiresPastBuddy:(_Bool)arg6 options:(id)arg7 schedulerClass:(Class)arg8 startHandler:(CDUnknownBlockType)arg9 suspendHandler:(CDUnknownBlockType)arg10;	// IMP=0x0010000000003594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
