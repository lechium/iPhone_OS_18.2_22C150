//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface ICDPlaybackPositionDatabaseContext : NSObject
{
    unsigned long long _lastSyncedEntityRevision;	// 8 = 0x8
    unsigned long long _transactionEntityRevision;	// 16 = 0x10
    NSString *_lastSyncedDomainVersion;	// 24 = 0x18
    NSMutableSet *_ubiquitousIdentifiersToSync;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000c3bc5
@property(readonly, nonatomic) NSMutableSet *ubiquitousIdentifiersToSync; // @synthesize ubiquitousIdentifiersToSync=_ubiquitousIdentifiersToSync;
@property(readonly, copy, nonatomic) NSString *lastSyncedDomainVersion; // @synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion;
@property(readonly, nonatomic) unsigned long long transactionEntityRevision; // @synthesize transactionEntityRevision=_transactionEntityRevision;
@property(readonly, nonatomic) unsigned long long lastSyncedEntityRevision; // @synthesize lastSyncedEntityRevision=_lastSyncedEntityRevision;
- (id)initWithLibrary:(id)arg1;	// IMP=0x00100000000c3acc

@end
