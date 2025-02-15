//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

__attribute__((visibility("hidden")))
@interface NSSQLToOne
{
    NSSQLForeignKey *_foreignKey;	// 64 = 0x40
    NSSQLForeignEntityKey *_foreignEntityKey;	// 72 = 0x48
    NSSQLForeignOrderKey *_foreignOrderKey;	// 80 = 0x50
    _Bool _isVirtual;	// 88 = 0x58
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x00000000002296ff
- (unsigned int)slot;	// IMP=0x00000000002296f5
- (id)description;	// IMP=0x000000000022966b
- (id)columnName;	// IMP=0x0000000000229640
- (void)_setForeignOrderKey:(id)arg1;	// IMP=0x0000000000229602
- (id)foreignKey;	// IMP=0x00000000002295f1
- (void)dealloc;	// IMP=0x0000000000229574
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;	// IMP=0x0000000000229565
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x0000000000229553
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x0000000000229452

@end

