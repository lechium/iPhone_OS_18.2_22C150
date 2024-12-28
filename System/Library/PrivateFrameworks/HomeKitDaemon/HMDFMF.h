//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDFMF : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)fmfStatusWithCoder:(id)arg1;	// IMP=0x0060000000c78989
+ (id)fmfStatusWithDict:(id)arg1;	// IMP=0x0060000000c78928
+ (id)fmfStatusWithMessage:(id)arg1;	// IMP=0x0060000000c788c7
+ (id)fmfStatusWithNumber:(id)arg1;	// IMP=0x0060000000c7887a
+ (id)fmfStatusWithValue:(unsigned long long)arg1;	// IMP=0x0060000000c7880a
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000c7875c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c786b6
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000c78611
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000c785a1
- (id)initWithNumber:(id)arg1;	// IMP=0x0000000000c7850d

@end
