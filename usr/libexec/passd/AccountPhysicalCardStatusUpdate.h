//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPhysicalCardStatusUpdate
{
}

+ (id)_propertySettersForAccountPhysicalCardStatusUpdate;	// IMP=0x004000000043a189
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x001000000043a118
+ (id)databaseTable;	// IMP=0x001000000043a10b
+ (void)deletePhysicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000439fe2
+ (id)insertPhysicalCardStatusUpdate:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000439c64
+ (id)physicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000439a4d
- (_Bool)deleteFromDatabase;	// IMP=0x004000000043a07b
- (id)physicalCardStatusUpdate;	// IMP=0x0010000000439df4

@end

