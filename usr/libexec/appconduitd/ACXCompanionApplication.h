//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppConduit/ACXSyncedApplication.h>

@interface ACXCompanionApplication : ACXSyncedApplication
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001274c
- (id)serializeAsRemoteApplication;	// IMP=0x0000000000012c6e
- (id)serialize;	// IMP=0x0010000000012c30
- (id)initWithSerializedDictionary:(id)arg1;	// IMP=0x0010000000012c01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000012bb3
- (id)initForTesting;	// IMP=0x0010000000012b84
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x0010000000012b55
- (id)initWithApplicationRecord:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x00100000000127e1
- (id)init;	// IMP=0x00100000000127b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000012783
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000012754

@end
