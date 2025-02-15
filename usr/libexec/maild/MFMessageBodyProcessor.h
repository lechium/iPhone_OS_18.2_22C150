//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MailPersistentStorage, NSArray, NSDate, NSString;
@protocol MFAccountsProvider, MFActivityCondition, MFDeviceStorage, OS_os_activity;

@interface MFMessageBodyProcessor : NSObject
{
    NSString *_name;	// 8 = 0x8
    id <MFAccountsProvider> _accountsProvider;	// 16 = 0x10
    id <MFDeviceStorage> _deviceStorage;	// 24 = 0x18
    id <MFActivityCondition> _condition;	// 32 = 0x20
    NSObject<OS_os_activity> *_loggingActivity;	// 40 = 0x28
    NSArray *_excludedMailboxTypes;	// 48 = 0x30
    long long _lastFetchDateCutoff;	// 56 = 0x38
    long long _accountMailboxesBatchSize;	// 64 = 0x40
    long long _mailboxMessagesBatchSize;	// 72 = 0x48
    NSDate *_stopDate;	// 80 = 0x50
}

+ (id)powernapProcessor;	// IMP=0x002000000008e489
+ (void)initialize;	// IMP=0x001000000008e442
- (void).cxx_destruct;	// IMP=0x002000000008fc3f
@property(nonatomic) __weak NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property(nonatomic) long long mailboxMessagesBatchSize; // @synthesize mailboxMessagesBatchSize=_mailboxMessagesBatchSize;
@property(nonatomic) long long accountMailboxesBatchSize; // @synthesize accountMailboxesBatchSize=_accountMailboxesBatchSize;
@property(nonatomic) long long lastFetchDateCutoff; // @synthesize lastFetchDateCutoff=_lastFetchDateCutoff;
@property(copy, nonatomic) NSArray *excludedMailboxTypes; // @synthesize excludedMailboxTypes=_excludedMailboxTypes;
@property(readonly, nonatomic) NSObject<OS_os_activity> *loggingActivity; // @synthesize loggingActivity=_loggingActivity;
@property(readonly, nonatomic) id <MFActivityCondition> condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) id <MFDeviceStorage> deviceStorage; // @synthesize deviceStorage=_deviceStorage;
@property(readonly, nonatomic) id <MFAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_mailboxesToDownload;	// IMP=0x001000000008f49d
- (_Bool)_shouldContinueProcessing;	// IMP=0x001000000008f2bd
- (void)_runSynchronously;	// IMP=0x001000000008ee67
@property(readonly, nonatomic) MailPersistentStorage *persistentStorage;
- (_Bool)mailboxMessageBodyProcessorShouldContinueProcessing:(id)arg1;	// IMP=0x001000000008ee3c
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008ede5
- (_Bool)runSynchronouslyWithDuration:(long long)arg1;	// IMP=0x001000000008e82d
- (_Bool)runSynchronously;	// IMP=0x001000000008e814
- (id)initWithName:(id)arg1 accountsProvider:(id)arg2 deviceStorage:(id)arg3 condition:(id)arg4;	// IMP=0x001000000008e697

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

