//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDEntityEncoder.h"

__attribute__((visibility("hidden")))
@interface _HDFitnessFriendWorkoutEntityEncoder : HDEntityEncoder
{
}

- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;	// IMP=0x000000000056e175
- (id)createBareObjectWithRow:(struct HDSQLiteRow *)arg1;	// IMP=0x000000000056e14c
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;	// IMP=0x000000000056dddf
- (id)orderedProperties;	// IMP=0x000000000002942b

@end

