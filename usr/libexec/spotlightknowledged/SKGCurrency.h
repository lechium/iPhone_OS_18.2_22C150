//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SKGCurrency
{
    NSString *_amount;	// 16 = 0x10
    double _value;	// 24 = 0x18
    unsigned long long _code;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a29a3
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
@property(nonatomic) double value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (id)description;	// IMP=0x00100000000a28a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a275c

@end
