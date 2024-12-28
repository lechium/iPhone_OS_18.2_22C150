//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSSQLTableMigrationDescription : NSObject
{
    NSSQLEntity *_rootEntity;	// 8 = 0x8
    NSSQLEntity *_sourceRootEntity;	// 16 = 0x10
    int _migrationType;	// 24 = 0x18
    NSMutableArray *_addedEntityMigrations;	// 32 = 0x20
    NSMutableArray *_removedEntityMigrations;	// 40 = 0x28
    NSMutableArray *_copiedEntityMigrations;	// 48 = 0x30
    NSMutableArray *_transformedEntityMigrations;	// 56 = 0x38
    NSMutableDictionary *_migrationByEntity;	// 64 = 0x40
    NSMutableArray *_addedManyToManys;	// 72 = 0x48
    NSMutableArray *_removedManyToManys;	// 80 = 0x50
    NSMutableArray *_transformedManyToManys;	// 88 = 0x58
    NSMutableDictionary *_tempTableNames;	// 96 = 0x60
    NSNumber *_hasComplexSchemaTransformations;	// 104 = 0x68
    NSMutableSet *_addedColumnSet;	// 112 = 0x70
    NSMutableSet *_renamedTableSet;	// 120 = 0x78
    NSMutableSet *_renamedColumnSet;	// 128 = 0x80
    NSMutableSet *_renamedMTMSet;	// 136 = 0x88
    NSMutableSet *_raisedColumnSet;	// 144 = 0x90
    NSMutableSet *_droppedEntitySet;	// 152 = 0x98
    NSMutableSet *_collapsedEntitySet;	// 160 = 0xa0
    NSMutableSet *_columnsUpgradedToMandatory;	// 168 = 0xa8
    NSMutableSet *_delayedDropColumnSet;	// 176 = 0xb0
}

@property(readonly, nonatomic) NSSQLEntity *rootEntity; // @synthesize rootEntity=_rootEntity;
- (id)description;	// IMP=0x0000000000234e2f
- (void)dealloc;	// IMP=0x0000000000234cdb

@end
