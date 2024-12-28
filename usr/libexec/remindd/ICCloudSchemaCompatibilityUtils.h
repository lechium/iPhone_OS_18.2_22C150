//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICCloudSchemaCompatibilityUtils : NSObject
{
}

+ (long long)persistenceCloudSchemaVersionWithAccountIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x004000000006209e
+ (_Bool)_isCloudSchemaCatchUpSyncNeededForExistingCloudObject:(id)arg1 persistenceCloudSchemaVersion:(long long)arg2 outIncompatiblePropertyKeys:(id *)arg3;	// IMP=0x0010000000061a79
+ (id)incompatiblePropertyKeysForCloudObject:(id)arg1 persistenceCloudSchemaVersion:(long long)arg2;	// IMP=0x00100000000619dc
+ (_Bool)isCloudSchemaCatchUpSyncNeededForExistingCloudObject:(id)arg1 persistenceCloudSchemaVersion:(long long)arg2;	// IMP=0x00100000000619c7
+ (_Bool)cloudSchemaCatchUpSyncDidCompleteWithAccountIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x001000000006167b
+ (_Bool)isCloudSchemaCatchUpSyncNeededForAccountIdentifier:(id)arg1 context:(id)arg2 outPersistenceCloudSchemaVersion:(long long *)arg3;	// IMP=0x0010000000061569

@end
