//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPItemID, NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRWatchingConfiguration : NSObject
{
    unsigned long long _watchTypes;	// 8 = 0x8
    NSMutableArray *_appLibraryIDs;	// 16 = 0x10
    NSMutableArray *_urls;	// 24 = 0x18
    NSString *_gatherPrefix;	// 32 = 0x20
    NSDictionary *_appLibraryIDToURLMapOfSuppliedAppIDs;	// 40 = 0x28
    NSDictionary *_appLibraryIDToURLMapOfSuppliedURLs;	// 48 = 0x30
    FPItemID *_trashItemID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008bdf8
@property(readonly, nonatomic) NSString *gatherPrefix; // @synthesize gatherPrefix=_gatherPrefix;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(readonly, nonatomic) NSArray *appLibraryIDs; // @synthesize appLibraryIDs=_appLibraryIDs;
@property(readonly, nonatomic) unsigned long long watchTypes; // @synthesize watchTypes=_watchTypes;
- (id)appLibraryIDToURLMapOfSuppliedURLs;	// IMP=0x000000000008ba0c
- (id)appLibraryIDToURLMapOfSuppliedAppIDs;	// IMP=0x000000000008b666
- (id)initWithScopes:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000008b1d5

@end
