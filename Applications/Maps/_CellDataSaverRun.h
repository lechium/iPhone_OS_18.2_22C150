//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _CellDataSaverRun : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    unsigned long long _totalTiles;	// 24 = 0x18
    unsigned long long _successCount;	// 32 = 0x20
    unsigned long long _failureCount;	// 40 = 0x28
    NSArray *_policyStatistics;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000459d0a
@property(retain, nonatomic) NSArray *policyStatistics; // @synthesize policyStatistics=_policyStatistics;
@property(nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(nonatomic) unsigned long long successCount; // @synthesize successCount=_successCount;
@property(nonatomic) unsigned long long totalTiles; // @synthesize totalTiles=_totalTiles;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

@end

