//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDatabase, NSRecursiveLock;
@protocol OS_dispatch_source;

@interface IDSDMessageStore : NSObject
{
    NSRecursiveLock *_recursiveLock;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_databaseCloseTimer;	// 16 = 0x10
    double _databaseLastUpdateTime;	// 24 = 0x18
    unsigned int _dataProtectionClass;	// 32 = 0x20
    IDSDatabase *_database;	// 40 = 0x28
}

+ (void)checkpointAndVacuumDBWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x0040000000394a62
+ (void)updateExpirationForIncomingMessageWithGUID:(id)arg1 expirationDate:(long long)arg2;	// IMP=0x00100000003948da
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(_Bool)arg5 messageType:(long long)arg6 success:(_Bool *)arg7;	// IMP=0x00100000003945ef
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4;	// IMP=0x0010000000394383
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3;	// IMP=0x0010000000394125
+ (id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1;	// IMP=0x0010000000393f12
+ (id)allExpiredOutgoingMessages:(long long)arg1;	// IMP=0x0010000000393cff
+ (id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2;	// IMP=0x0010000000393aee
+ (id)allOutgoingMessagesByGUID:(id)arg1;	// IMP=0x0010000000393900
+ (void)deleteAllMessagesWithAccountGUID:(id)arg1;	// IMP=0x00100000003938fa
+ (id)largestEnquedMessagesAccountUUIDOverThreshold:(long long)arg1;	// IMP=0x00100000003938f2
+ (id)largestPayloadSizeAccountUUID;	// IMP=0x0010000000393648
+ (_Bool)databaseSizeBiggerThanThreshold:(long long)arg1;	// IMP=0x00100000003934cf
+ (void)markOutgoingMessagesAsUnsentForDestination:(id)arg1;	// IMP=0x0010000000393352
+ (void)markOutgoingMessagesAsUnsentIncludingClassD:(_Bool)arg1;	// IMP=0x00100000003931b9
+ (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3;	// IMP=0x0010000000392f71
+ (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(_Bool)arg3 localDestinationDeviceID:(id)arg4;	// IMP=0x0010000000392d1a
+ (id)incomingExpiredRestrictedMessages:(double)arg1 success:(_Bool *)arg2;	// IMP=0x0010000000392af5
+ (id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(_Bool *)arg3;	// IMP=0x0010000000392ad4
+ (id)incomingMessagesUpToLimit:(unsigned long long)arg1 controlCategory:(unsigned int)arg2 messageTransportType:(unsigned char)arg3 success:(_Bool *)arg4;	// IMP=0x0010000000392857
+ (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2;	// IMP=0x0010000000392647
+ (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x0010000000392520
+ (id)deleteExpiredIncomingRestrictedMessagesOlderThan:(double)arg1;	// IMP=0x0010000000392346
+ (void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2;	// IMP=0x00100000003921cc
+ (void)clearStatementCache;	// IMP=0x0010000000391fa1
+ (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x0010000000391e24
+ (void)deletePostponedMessages;	// IMP=0x001000000039136f
+ (id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3;	// IMP=0x0010000000391127
+ (id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1;	// IMP=0x0010000000390f14
+ (void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2;	// IMP=0x0010000000390d78
+ (void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0010000000390bdc
+ (id)unsentUrgentAccountUUIDsWithDataProtectionClass:(unsigned int)arg1 withMessageTypes:(id)arg2;	// IMP=0x0010000000390b31
+ (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withMessageTypes:(id)arg4;	// IMP=0x0010000000390a78
+ (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x00100000003909d8
+ (id)sharedInstanceForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000390974
+ (id)sharedInstance;	// IMP=0x001000000039091f
- (void).cxx_destruct;	// IMP=0x002000000039d990
@property(readonly, retain, nonatomic) IDSDatabase *database; // @synthesize database=_database;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x001000000039d7cc
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x001000000039d60a
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000039d47d
- (void)deleteDatabase;	// IMP=0x001000000039d430
- (void)closeDatabase;	// IMP=0x001000000039d3af
- (void)_setDatabaseCloseTimer;	// IMP=0x001000000039d1d1
- (void)_clearDatabaseCloseTimer;	// IMP=0x001000000039d180
- (void)__closeDatabase;	// IMP=0x001000000039d0b9
- (void)updateExpirationForIncomingMessageWithGUID:(id)arg1 expirationDate:(long long)arg2;	// IMP=0x001000000039cf77
- (id)deleteExpiredIncomingRestrictedMessagesOlderThan:(double)arg1;	// IMP=0x001000000039cdc8
- (void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2;	// IMP=0x001000000039ccd2
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x001000000039cbaa
- (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 classDDatabase:(id)arg3;	// IMP=0x001000000039c84e
- (void)deletePostponedMessages:(id)arg1 classDDatabase:(id)arg2;	// IMP=0x001000000039c748
- (void)markAllOutgoingMessagesAsUnsentForLocalDestination:(id)arg1;	// IMP=0x001000000039c631
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x001000000039c564
- (void)markOutgoingMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x001000000039c423
- (void)storeOutgoingMessageWithSendParameters:(id)arg1 guid:(id)arg2 canSend:(_Bool)arg3 canBypassSimilarMessages:(_Bool)arg4 fromQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000039ad27
- (void)checkpointAndVacuumDB;	// IMP=0x001000000039ac55
- (int)internalMigrationVersionOnDatabase;	// IMP=0x001000000039ab1e
- (void)updateInternalMigrationVersionOnDatabaseWithValue:(int)arg1;	// IMP=0x001000000039aa44
- (void)deleteAllMessagesWithAccountGUID:(id)arg1;	// IMP=0x001000000039a91c
- (id)largestEnquedMessagesAmountAccountUUID;	// IMP=0x001000000039a7ac
- (id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3;	// IMP=0x001000000039a57f
- (id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1;	// IMP=0x001000000039a3c4
- (void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2;	// IMP=0x001000000039a1f6
- (void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x001000000039a019
- (id)duetIdentifiersOverrideForAccountWithGUID:(id)arg1 priority:(long long)arg2;	// IMP=0x0010000000399c1a
- (id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5;	// IMP=0x0010000000399be6
- (id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5 messageTypes:(id)arg6;	// IMP=0x0010000000399ba4
- (id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(_Bool)arg5 requireDuet:(_Bool)arg6 localDestinationDeviceID:(id)arg7 messageTypes:(id)arg8;	// IMP=0x0010000000399895
- (id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(_Bool)arg5 requireDuet:(_Bool)arg6 localDestinationDeviceID:(id)arg7;	// IMP=0x001000000039959a
- (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(_Bool)arg3 localDestinationDeviceID:(id)arg4;	// IMP=0x001000000039956c
- (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3;	// IMP=0x0010000000399541
- (id)unsentUrgentAccountUUIDsForMessageTypes:(id)arg1;	// IMP=0x0010000000399384
- (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 messageTypes:(id)arg3;	// IMP=0x001000000039919f
- (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2;	// IMP=0x001000000039900a
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(_Bool)arg5 messageType:(long long)arg6 success:(_Bool *)arg7;	// IMP=0x0010000000398d6c
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 hardLimit:(long long)arg4;	// IMP=0x0010000000398afd
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3;	// IMP=0x0010000000398858
- (id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1;	// IMP=0x00100000003986da
- (id)allExpiredOutgoingMessages:(long long)arg1;	// IMP=0x001000000039851f
- (id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2;	// IMP=0x00100000003982e6
- (id)allOutgoingMessagesByGUID:(id)arg1;	// IMP=0x00100000003980ef
- (id)largestPayloadSizeAccountUUID;	// IMP=0x0010000000397f7f
- (long long)databaseSizeInMB;	// IMP=0x0010000000397e34
- (id)_createOutgoingMessageRecordsFromSQLRecords:(struct __CFArray *)arg1 includeMessagePayloads:(_Bool)arg2;	// IMP=0x00100000003964a3
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 dedupBehavior:(unsigned char)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x001000000039647f
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 isLocal:(_Bool)arg6 dedupBehavior:(unsigned char)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x001000000039644e
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 isLocal:(_Bool)arg6 controlCategory:(unsigned int)arg7 dedupBehavior:(unsigned char)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x0010000000395e23
- (id)_incomingMessageIdentifierForMessageUUID:(id)arg1 messagePayload:(id)arg2;	// IMP=0x0010000000395d72
- (id)incomingExpiredRestrictedMessages:(double)arg1 success:(_Bool *)arg2;	// IMP=0x00100000003957ee
- (id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(_Bool *)arg3;	// IMP=0x00100000003957d4
- (id)incomingMessagesUpToLimit:(unsigned long long)arg1 controlCategory:(unsigned int)arg2 messageTransportType:(unsigned char)arg3 success:(_Bool *)arg4;	// IMP=0x0010000000395200
@property(readonly, nonatomic) unsigned int dataProtectionClass;
- (void)_performInitialHousekeeping;	// IMP=0x00100000003950f7
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000394b48
- (id)initWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000394aea
- (id)init;	// IMP=0x0010000000394ad6
- (void)clearStatementCache;	// IMP=0x00100000003920ff

@end
