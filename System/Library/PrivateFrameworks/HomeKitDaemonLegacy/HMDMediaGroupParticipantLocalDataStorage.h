//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaGroupsAggregatorBackupReceiver, HMMediaDestination, HMMediaDestinationControllerData, NSObject, NSString, NSUUID, NSUserDefaults;
@protocol HMDFeaturesDataSource, HMDMediaGroupParticipantLocalDataStorageDataSource, HMDMediaGroupParticipantLocalDataStorageDelegate, HMEEventForwarder, HMELastEventStoreReadHandle, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupParticipantLocalDataStorage : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    id <HMDMediaGroupParticipantLocalDataStorageDataSource> _dataSource;	// 16 = 0x10
    id <HMDMediaGroupParticipantLocalDataStorageDelegate> _delegate;	// 24 = 0x18
    HMDMediaGroupsAggregatorBackupReceiver *_groupsBackupReceiver;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    NSUserDefaults *_userDefaults;	// 48 = 0x30
    id <HMEEventForwarder> _eventForwarder;	// 56 = 0x38
    id <HMELastEventStoreReadHandle> _eventStoreReadHandle;	// 64 = 0x40
    id <HMDFeaturesDataSource> _featuresDataSource;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0010000000b50313
- (void).cxx_destruct;	// IMP=0x0000000000b50160
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle; // @synthesize eventStoreReadHandle=_eventStoreReadHandle;
@property(readonly) id <HMEEventForwarder> eventForwarder; // @synthesize eventForwarder=_eventForwarder;
@property(readonly) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) HMDMediaGroupsAggregatorBackupReceiver *groupsBackupReceiver; // @synthesize groupsBackupReceiver=_groupsBackupReceiver;
@property __weak id <HMDMediaGroupParticipantLocalDataStorageDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaGroupParticipantLocalDataStorageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000b50032
- (void)didReceiveBackupData:(id)arg1 forBackupReceiver:(id)arg2;	// IMP=0x0000000000b50020
- (void)updateBackupGroupData:(id)arg1;	// IMP=0x0000000000b4fc04
- (void)updateDestinationSupportOptions:(unsigned long long)arg1;	// IMP=0x0000000000b4f96b
- (void)updateAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000b4f6ed
- (void)updateMediaDestination:(id)arg1;	// IMP=0x0000000000b4f441
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x0000000000b4f1c3
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)arg1;	// IMP=0x0000000000b4ef2a
- (void)notifyDidChangeDestinationIdentifier:(id)arg1 forDestinationControllerIdentifier:(id)arg2;	// IMP=0x0000000000b4edc8
- (void)updateDestinationControllerDestinationIdentifier:(id)arg1;	// IMP=0x0000000000b4eb12
- (void)updateDestinationControllerData:(id)arg1;	// IMP=0x0000000000b4e866
- (void)updateParticipantData:(id)arg1;	// IMP=0x0000000000b4e6f4
- (id)eventSource;	// IMP=0x0000000000b4e5bc
- (id)topicName;	// IMP=0x0000000000b4e484
- (void)publishCachedObject;	// IMP=0x0000000000b4e0ab
- (void)publishCachedObjectIfNeeded;	// IMP=0x0000000000b4dec7
- (_Bool)hasDataToPublishInParticipantData:(id)arg1;	// IMP=0x0000000000b4de00
@property(readonly, copy) HMMediaDestination *destination;
@property(readonly, copy) HMMediaDestinationControllerData *destinationControllerData;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)arg1;	// IMP=0x0000000000b4db1e
- (id)migratedParticipantData:(id)arg1 withDestinationSupportOptions:(unsigned long long)arg2;	// IMP=0x0000000000b4d861
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)arg1;	// IMP=0x0000000000b4d7d2
- (id)createDefaultParticipantData;	// IMP=0x0000000000b4d79e
- (id)participantData;	// IMP=0x0000000000b4d6e4
- (id)lastCachedEventParticipantData;	// IMP=0x0000000000b4d41b
- (id)protoParticipantData;	// IMP=0x0000000000b4d382
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000b4d22a
- (id)initWithIdentifier:(id)arg1 backUpReciever:(id)arg2 userDefaults:(id)arg3 eventForwarder:(id)arg4 eventStoreReadHandle:(id)arg5 featuresDataSource:(id)arg6;	// IMP=0x0000000000b4d029
- (id)initWithIdentifier:(id)arg1 backUpReciever:(id)arg2 userDefaults:(id)arg3 eventForwarder:(id)arg4 eventStoreReadHandle:(id)arg5;	// IMP=0x0000000000b4cf42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

