//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTableEntry.h>

@class NSNumber, NSString;

@interface CKDZoneIDCacheEntry : CKSQLiteCacheTableEntry
{
    NSNumber *_rowID;	// 8 = 0x8
    NSString *_zoneIDString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000096a9e
@property(retain, nonatomic) NSString *zoneIDString; // @synthesize zoneIDString=_zoneIDString;
@property(retain, nonatomic) NSNumber *rowID; // @synthesize rowID=_rowID;
- (id)initWithZoneIDString:(id)arg1;	// IMP=0x00000000000969e6

@end
