//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x002000000003557c
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x00200000000354e6
- (id)cd_dateWithCeilingForAlignment:(double)arg1;	// IMP=0x0020000000035450
- (id)cd_dateWithFloorForAlignment:(double)arg1;	// IMP=0x00200000000353c4
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;	// IMP=0x00200000000a84f7
- (id)floorDateWithTotalSlotsInDay:(int)arg1;	// IMP=0x00200000000a8481
- (double)timeSinceMidnight:(id *)arg1;	// IMP=0x00200000000a834b
- (id)dedup;	// IMP=0x00200000001116bb
- (id)dk_dedup;	// IMP=0x0020000000111430
@end
