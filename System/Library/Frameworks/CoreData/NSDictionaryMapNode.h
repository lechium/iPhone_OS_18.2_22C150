//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode
{
    id *_attributes;	// 48 = 0x30
    id _attributesAsEncoded;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000009685b
+ (void)initialize;	// IMP=0x0010000000096803
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000096e6c
- (void)dealloc;	// IMP=0x0000000000096da0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096c45
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096863
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;	// IMP=0x0000000000096814

@end

