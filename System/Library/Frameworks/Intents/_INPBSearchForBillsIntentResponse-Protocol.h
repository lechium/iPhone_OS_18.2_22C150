//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBBillDetailsValue;

@protocol _INPBSearchForBillsIntentResponse <NSObject>
+ (Class)billsType;
@property(readonly, nonatomic) unsigned long long billsCount;
@property(copy, nonatomic) NSArray *bills;
- (_INPBBillDetailsValue *)billsAtIndex:(unsigned long long)arg1;
- (void)addBills:(_INPBBillDetailsValue *)arg1;
- (void)clearBills;
@end

