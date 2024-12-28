//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface HMDDateCounterGroupSpecifier
{
    NSDate *_date;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000099eb3c
+ (id)specifierWithGroupName:(id)arg1 date:(id)arg2;	// IMP=0x006000000099eaca
- (void).cxx_destruct;	// IMP=0x000000000099eab7
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x000000000099ea13
- (unsigned long long)hash;	// IMP=0x000000000099e987
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000099e832
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000099e797
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000099e6fc
- (id)initWithGroupName:(id)arg1 date:(id)arg2;	// IMP=0x000000000099e684

@end
