//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassShareTimeSchedule
{
}

+ (id)_propertySetters;	// IMP=0x004000000012f784
+ (id)_propertyValuesForObject:(id)arg1;	// IMP=0x001000000012f5a3
+ (id)_predicateForTimeConfigurationPID:(long long)arg1;	// IMP=0x001000000012f532
+ (id)_passShareTimeSchedulesWithQuery:(id)arg1;	// IMP=0x001000000012f1f4
+ (void)deletePassShareTimeSchedulesForTimeConfigurationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000012f15b
+ (id)passShareTimeSchedulesForTimeConfigurationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000012f0a8
+ (void)insertOrUpdatePassShareTimeSchedules:(id)arg1 forTimeConfigurationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000012eefd
+ (id)databaseTable;	// IMP=0x001000000012ee12
- (id)passShareTimeSchedule;	// IMP=0x004000000012f3c3
- (id)initWithPassShareTimeSchedule:(id)arg1 forTimeConfigurationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000012ee1f

@end
