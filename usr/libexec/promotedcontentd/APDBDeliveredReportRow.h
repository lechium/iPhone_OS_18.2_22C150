//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/APDatabaseRow.h>

@class NSDate, NSNumber, NSString;

@interface APDBDeliveredReportRow : APDatabaseRow
{
}

- (id)initType:(id)arg1 dayOfYear:(id)arg2 frequency:(id)arg3 reportDate:(id)arg4 table:(id)arg5;	// IMP=0x002000000000a970

// Remaining properties
@property(retain, nonatomic) NSNumber *dayOfYear; // @dynamic dayOfYear;
@property(retain, nonatomic) NSNumber *frequency; // @dynamic frequency;
@property(retain, nonatomic) NSDate *reportDate; // @dynamic reportDate;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

