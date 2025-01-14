//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRVectorTimestamp;
@protocol CRDataType;

__attribute__((visibility("hidden")))
@interface CRDictionaryElement : NSObject
{
    id <CRDataType> _value;	// 8 = 0x8
    CRVectorTimestamp *_timestamp;	// 16 = 0x10
}

+ (id)temporaryElementWithValue:(id)arg1;	// IMP=0x0000000000105c86
- (void).cxx_destruct;	// IMP=0x0000000000106221
@property(retain, nonatomic) CRVectorTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id <CRDataType> value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000001060b7
- (void)mergeWith:(id)arg1;	// IMP=0x0000000000105f88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000105ea2
- (unsigned long long)hash;	// IMP=0x0000000000105e4a
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;	// IMP=0x0000000000105d93
- (id)initWithValue:(id)arg1;	// IMP=0x0000000000105ce6

@end

