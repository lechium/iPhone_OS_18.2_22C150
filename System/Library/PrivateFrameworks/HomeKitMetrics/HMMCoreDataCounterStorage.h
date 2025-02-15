//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer, NSString;

__attribute__((visibility("hidden")))
@interface HMMCoreDataCounterStorage : NSObject
{
    NSString *_dataModelName;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
    NSManagedObjectContext *_currentContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005630
@property(readonly, nonatomic) NSManagedObjectContext *currentContext; // @synthesize currentContext=_currentContext;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *dataModelName; // @synthesize dataModelName=_dataModelName;
- (void)save;	// IMP=0x00000000000055bc
- (void)executeWithManagedObjectContextAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00000000000054da
- (void)executeWithManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00000000000053f9
- (_Bool)loadPersistentStoreWithError:(id *)arg1;	// IMP=0x00000000000050b2
- (id)initWithModelName:(id)arg1 atPath:(id)arg2;	// IMP=0x0000000000004ff9

@end

