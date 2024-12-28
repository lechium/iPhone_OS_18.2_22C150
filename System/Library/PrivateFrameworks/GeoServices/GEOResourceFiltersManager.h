//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveResourceFilters, GEOResourceManifestConfiguration, NSSet;
@protocol GEOResourceFiltersManagerDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceFiltersManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;	// 8 = 0x8
    GEOActiveResourceFilters *_activeFilters;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    id <GEOResourceFiltersManagerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000793f66
@property(nonatomic) __weak id <GEOResourceFiltersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deactivateName:(id)arg1;	// IMP=0x0000000000793d1b
- (void)activateName:(id)arg1;	// IMP=0x00000000007939ff
- (void)deactivateScenario:(int)arg1;	// IMP=0x00000000007937d6
- (void)activateScenario:(int)arg1;	// IMP=0x000000000079356a
- (void)deactivateScale:(int)arg1;	// IMP=0x0000000000793341
- (void)activateScale:(int)arg1;	// IMP=0x000000000079305b
- (void)_deactivateFilters:(CDUnknownBlockType)arg1;	// IMP=0x0000000000792d61
- (void)_activateFilters:(CDUnknownBlockType)arg1 setValueBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000792b09
- (void)_writeToDisk;	// IMP=0x000000000079294d
@property(readonly, nonatomic) NSSet *activeNames;
@property(readonly, nonatomic) NSSet *activeScenarios;
@property(readonly, nonatomic) NSSet *activeScales;
- (void)_cleanUpOrphanedEmptyFiltersIfNecessary;	// IMP=0x0000000000791e88
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000791b36
- (id)init;	// IMP=0x0000000000791b0c

@end
