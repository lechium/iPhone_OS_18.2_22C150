//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABSPBAccountsSyncObject, ABSPBCountValidationObject, ABSProgressReporter, ABSSyncController, NDTActivity, NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_os_transaction;

@interface ABSSyncSession : NSObject
{
    _Bool _isFirstEnqueue;	// 8 = 0x8
    _Bool _isFirstApplyChange;	// 9 = 0x9
    int _changeCount;	// 12 = 0xc
    NSObject<OS_os_transaction> *_keepAliveTransaction;	// 16 = 0x10
    ABSSyncController *_syncController;	// 24 = 0x18
    NSString *_sessionEncoding;	// 32 = 0x20
    NSMutableDictionary *_options;	// 40 = 0x28
    long long _abortAfter;	// 48 = 0x30
    ABSPBCountValidationObject *_validationMessage;	// 56 = 0x38
    ABSPBAccountsSyncObject *_accountsMessage;	// 64 = 0x40
    NSMutableSet *_accountIdentifiers;	// 72 = 0x48
    NDTActivity *_activity;	// 80 = 0x50
    ABSProgressReporter *_progressReporter;	// 88 = 0x58
    double _start;	// 96 = 0x60
    unsigned long long _count;	// 104 = 0x68
    NSError *_capturedError;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000037e4f
@property(retain, nonatomic) NSError *capturedError; // @synthesize capturedError=_capturedError;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) double start; // @synthesize start=_start;
@property(retain, nonatomic) ABSProgressReporter *progressReporter; // @synthesize progressReporter=_progressReporter;
@property(retain, nonatomic) NDTActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSMutableSet *accountIdentifiers; // @synthesize accountIdentifiers=_accountIdentifiers;
@property(retain, nonatomic) ABSPBAccountsSyncObject *accountsMessage; // @synthesize accountsMessage=_accountsMessage;
@property(retain, nonatomic) ABSPBCountValidationObject *validationMessage; // @synthesize validationMessage=_validationMessage;
@property(nonatomic) long long abortAfter; // @synthesize abortAfter=_abortAfter;
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *sessionEncoding; // @synthesize sessionEncoding=_sessionEncoding;
@property(retain, nonatomic) ABSSyncController *syncController; // @synthesize syncController=_syncController;
- (void)terminate;	// IMP=0x0010000000037d18
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x0010000000037b81
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037524
- (void)resetDataStoreForSyncSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037333
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x001000000003732b
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0010000000037309
- (void)lateSetupForSession:(id)arg1;	// IMP=0x0010000000036e40
- (id)init;	// IMP=0x0010000000036dbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
