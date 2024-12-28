//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsDaemonPlugin/NSObject-Protocol.h>

@class HDDatabaseMigrator, NSArray, NSString;

@protocol HDHealthMedicationsPluginDatabaseSchema <NSObject>
@property(readonly, copy, nonatomic) NSArray *databaseEntities;
@property(readonly, nonatomic) long long currentSchemaVersion;
- (void)registerMigrationStepsWithMigrator:(HDDatabaseMigrator *)arg1 schemaName:(NSString *)arg2;
@end
