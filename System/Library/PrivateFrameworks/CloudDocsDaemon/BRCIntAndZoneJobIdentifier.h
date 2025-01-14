//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCZoneRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCIntAndZoneJobIdentifier : NSObject
{
    long long _intID;	// 8 = 0x8
    BRCZoneRowID *_zoneRowID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000038fd8e
@property(readonly, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
@property(readonly, nonatomic) long long intID; // @synthesize intID=_intID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038fd6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038fd0c
- (_Bool)isEqualToIntAndZoneJobIdentifier:(id)arg1;	// IMP=0x000000000038fcb9
@property(readonly) unsigned long long hash;
- (id)columnsValues;	// IMP=0x000000000038fc67
- (id)columns;	// IMP=0x000000000038fc42
- (id)matchingJobsWhereSQLClause;	// IMP=0x000000000038fc15
@property(readonly, copy) NSString *description;
- (id)jobsDescription;	// IMP=0x000000000038fbd6
- (id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2;	// IMP=0x000000000038faf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

