//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

__attribute__((visibility("hidden")))
@interface VSPersistentContainer : NSObject
{
    long long _modelVersion;	// 8 = 0x8
    NSManagedObjectContext *_viewContext;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
}

+ (id)directoryURL;	// IMP=0x006000000001a5e9
+ (id)legacyDirectoryURL;	// IMP=0x006000000001a4f6
- (void).cxx_destruct;	// IMP=0x000000000001b256
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b137
- (id)developerIdentityProviderFetchRequest;	// IMP=0x000000000001b11e
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;	// IMP=0x000000000001b0d1
- (id)init;	// IMP=0x000000000001b0ba
- (id)initWithModelVersion:(long long)arg1;	// IMP=0x000000000001ad37
- (void)migrateContainerIfNecessary;	// IMP=0x000000000001a8cb

@end

