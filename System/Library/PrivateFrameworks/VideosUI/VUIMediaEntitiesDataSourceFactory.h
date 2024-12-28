//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesDataSourceFactory : NSObject
{
}

+ (id)_dataSourceForShelfType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3;	// IMP=0x00800000002122a5
+ (id)dataSourceForShelf:(long long)arg1 withFamilyMember:(id)arg2;	// IMP=0x0080000000212210
+ (id)dataSourceForShelf:(long long)arg1 withLibrary:(id)arg2;	// IMP=0x00800000002121f4
+ (id)_fetchRequestForGenre:(id)arg1;	// IMP=0x0080000000212023
+ (id)dataSourceForGenre:(id)arg1 withLibrary:(id)arg2;	// IMP=0x0080000000211f8f
+ (id)dataSourceForGenre:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x0080000000211eb0
+ (id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3;	// IMP=0x00800000002115d5
+ (id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2;	// IMP=0x00800000002115b9
+ (id)dataSourceForCategoryType:(long long)arg1 withFamilyMember:(id)arg2;	// IMP=0x008000000021151b
+ (id)episodesDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3;	// IMP=0x00800000002113fc
+ (id)seasonsDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3;	// IMP=0x00800000002112ef
+ (id)episodesDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x00800000002111fe
+ (id)seasonsDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x008000000021111f
+ (id)dataSourceForFetchRequest:(id)arg1 withLibrary:(id)arg2;	// IMP=0x00800000002110ad
+ (id)dataSourceForCategoryType:(long long)arg1;	// IMP=0x0080000000211014

@end
