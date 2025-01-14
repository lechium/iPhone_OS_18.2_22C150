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

+ (id)fmfStatusWithCoder:(id)arg1;	// IMP=0x006000000097cdb4
+ (id)fmfStatusWithDict:(id)arg1;	// IMP=0x006000000097cd53
+ (id)fmfStatusWithMessage:(id)arg1;	// IMP=0x006000000097ccf2
+ (id)fmfStatusWithNumber:(id)arg1;	// IMP=0x006000000097cca5
+ (id)fmfStatusWithValue:(unsigned long long)arg1;	// IMP=0x006000000097cc35
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x000000000097cb87
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000097cae1
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x000000000097ca3c
- (void)addToCoder:(id)arg1;	// IMP=0x000000000097c9cc
- (id)initWithNumber:(id)arg1;	// IMP=0x000000000097c938

@end

