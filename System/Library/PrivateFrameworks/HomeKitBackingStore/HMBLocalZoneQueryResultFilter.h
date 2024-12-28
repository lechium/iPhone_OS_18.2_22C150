//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMBLocalSQLQueryTableQueryAll, NSArray;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultFilter
{
    HMBLocalSQLQueryTableQueryAll *_query;	// 40 = 0x28
    NSArray *_columns;	// 48 = 0x30
    CDUnknownBlockType _filter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005bc18
@property(readonly, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) HMBLocalSQLQueryTableQueryAll *query; // @synthesize query=_query;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000005b929
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 columns:(id)arg3 filter:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b81b

@end
