//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey
{
    NSString *_name;	// 48 = 0x30
    NSSQLForeignKey *_foreignKey;	// 56 = 0x38
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x0000000000265f1e
- (void)dealloc;	// IMP=0x0000000000265ecd
- (id)name;	// IMP=0x0000000000265ebc
- (id)foreignKey;	// IMP=0x0000000000265eab
- (id)toOneRelationship;	// IMP=0x0000000000265e80
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x0000000000265e04
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x0000000000265da9
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;	// IMP=0x0000000000265c29

@end
