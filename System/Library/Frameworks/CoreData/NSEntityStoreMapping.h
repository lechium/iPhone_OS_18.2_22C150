//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSEntityDescription, NSString;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping
{
    NSEntityDescription *_entity;	// 16 = 0x10
    NSDictionary *_propertyMappings;	// 24 = 0x18
    NSArray *_primaryKeys;	// 32 = 0x20
    _Bool _isSingleTableEntity;	// 40 = 0x28
    NSString *_subentityColumn;	// 48 = 0x30
    unsigned int _subentityID;	// 56 = 0x38
}

- (unsigned int)subentityID;	// IMP=0x00000000000adc90
- (id)subentityColumn;	// IMP=0x00000000000adc7f
- (_Bool)isSingleTableEntity;	// IMP=0x00000000000adc6f
- (id)primaryKeys;	// IMP=0x00000000000adc5e
- (id)propertyMappings;	// IMP=0x00000000000adc4d
- (id)entity;	// IMP=0x00000000000adc3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ada6e
- (id)description;	// IMP=0x00000000000ad9f5
- (void)dealloc;	// IMP=0x00000000000ad958
- (id)initWithEntity:(id)arg1;	// IMP=0x00000000000ad7b7

@end
