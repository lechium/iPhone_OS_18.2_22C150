//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps17LibraryItemsCount : NSObject
{
    MISSING_TYPE *guidesCount;	// 8 = 0x8
    MISSING_TYPE *pinnedItemsCount;	// 16 = 0x10
    MISSING_TYPE *placesCount;	// 24 = 0x18
    MISSING_TYPE *routesCount;	// 32 = 0x20
}

- (id)init;	// IMP=0x00400000001ea930
- (id)createCopy;	// IMP=0x00100000001ea8b0
- (id)descriptionForLibrarySectionInHome;	// IMP=0x00100000001ea7b0
@property(nonatomic, readonly) long long total;
- (id)initWithGuidesCount:(long long)arg1 pinnedItemsCount:(long long)arg2 placesCount:(long long)arg3 routesCount:(long long)arg4;	// IMP=0x00100000001ea1e0
@property(nonatomic) long long routesCount; // @synthesize routesCount;
@property(nonatomic) long long placesCount; // @synthesize placesCount;
@property(nonatomic) long long pinnedItemsCount; // @synthesize pinnedItemsCount;
@property(nonatomic) long long guidesCount; // @synthesize guidesCount;

@end
