//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSObject, NSPersistentStoreCoordinator, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector, PFUbiquitySwitchboardEntry, PFUbiquityTransactionLog;
@protocol _PFUbiquityRecordImportOperationDelegate;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordImportOperation
{
    NSManagedObjectContext *_moc;	// 64 = 0x40
    NSPersistentStoreCoordinator *_psc;	// 72 = 0x48
    PFUbiquityTransactionLog *_transactionLog;	// 80 = 0x50
    PFUbiquitySwitchboardEntry *_entry;	// 88 = 0x58
    NSMutableSet *_insertedObjectIDs;	// 96 = 0x60
    NSMutableSet *_updatedObjectIDs;	// 104 = 0x68
    NSMutableSet *_deletedObjectIDs;	// 112 = 0x70
    PFUbiquityKnowledgeVector *_logScore;	// 120 = 0x78
    NSMutableDictionary *_resolvedConflicts;	// 128 = 0x80
    _Bool _lockedExistingCoord;	// 136 = 0x88
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;	// 144 = 0x90
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;	// 152 = 0x98
    PFUbiquityImportContext *_importContext;	// 160 = 0xa0
    _Bool _success;	// 168 = 0xa8
    _Bool _transactionDidRollback;	// 169 = 0xa9
    _Bool _wroteKV;	// 170 = 0xaa
    NSError *_operationError;	// 176 = 0xb0
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;	// 184 = 0xb8
}

- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;	// IMP=0x000000000027654e
@property(readonly, copy) NSString *description;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;	// IMP=0x00000000002760e1
- (void)main;	// IMP=0x0000000000272e04
- (id)retainedDelegate;	// IMP=0x00000000002702b5
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
- (void)cancel;	// IMP=0x000000000027011e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027010c
- (id)copy;	// IMP=0x00000000002700c8
- (void)dealloc;	// IMP=0x000000000026ffaa
- (id)init;	// IMP=0x000000000026fe14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

