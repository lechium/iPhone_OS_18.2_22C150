//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSPersistentHistoryChangeRequestToken : NSObject
{
    NSData *_fetchData;	// 8 = 0x8
    NSDictionary *_token;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    long long _resultType;	// 32 = 0x20
    _Bool _delete;	// 40 = 0x28
    _Bool _transactionFromToken;	// 41 = 0x29
    unsigned long long _fetchLimit;	// 48 = 0x30
    unsigned long long _fetchOffset;	// 56 = 0x38
    unsigned long long _fetchBatchSize;	// 64 = 0x40
    unsigned long long _percentageOfDB;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000dfd5
@property(readonly, nonatomic) unsigned long long percentageOfDB; // @synthesize percentageOfDB=_percentageOfDB;
@property(readonly, nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property(readonly, nonatomic) unsigned long long fetchOffset; // @synthesize fetchOffset=_fetchOffset;
@property(readonly, nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(readonly, nonatomic) _Bool transactionFromToken; // @synthesize transactionFromToken=_transactionFromToken;
@property(readonly, nonatomic) _Bool delete; // @synthesize delete=_delete;
@property(readonly, nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, retain, nonatomic) NSDictionary *token; // @synthesize token=_token;
@property(readonly, retain, nonatomic) NSData *fetchData; // @synthesize fetchData=_fetchData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e1f6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000dfdd
- (void)dealloc;	// IMP=0x000000000000df71
- (id)initForRequest:(id)arg1;	// IMP=0x000000000000de44

@end
