//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject
{
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;	// 8 = 0x8
}

+ (id)localIdentifierFromRecord:(id)arg1;	// IMP=0x002000000004805d
+ (id)propertyIDKey;	// IMP=0x0010000000048015
- (void).cxx_destruct;	// IMP=0x0020000000048143
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (id)zoneName;	// IMP=0x0010000000047fcd
- (id)identifier;	// IMP=0x0010000000047f8a
- (id)recordType;	// IMP=0x0010000000047f42
- (id)configuredRecordFromAttributes;	// IMP=0x0010000000047eae
- (void)incrementEditGeneration;	// IMP=0x0010000000047da2
@property(copy, nonatomic) CKRecord *systemFields; // @dynamic systemFields;
- (_Bool)hasValidSalt;	// IMP=0x0010000000047214
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x00100000000470b4
- (_Bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(_Bool)arg2;	// IMP=0x0010000000046dc6
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x001000000004690f
- (id)mutableCopy;	// IMP=0x00100000000468e1

// Remaining properties
@property(copy, nonatomic) NSData *ckSystemFields; // @dynamic ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) _Bool deletedFlag; // @dynamic deletedFlag;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long editGeneration; // @dynamic editGeneration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSString *saltedHashedID; // @dynamic saltedHashedID;
@property(readonly) Class superclass;
@property(nonatomic) long long syncGeneration; // @dynamic syncGeneration;

@end

