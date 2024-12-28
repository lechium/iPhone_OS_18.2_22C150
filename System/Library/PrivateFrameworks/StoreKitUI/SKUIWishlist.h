//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SSWishlist;

__attribute__((visibility("hidden")))
@interface SKUIWishlist : NSObject
{
    SSWishlist *_database;	// 8 = 0x8
}

+ (id)activeWishlist;	// IMP=0x006000000022d4dc
- (void).cxx_destruct;	// IMP=0x000000000022e4bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022e445
- (unsigned long long)hash;	// IMP=0x000000000022e42f
- (void)removeItemsWithItemIdentifiers:(id)arg1;	// IMP=0x000000000022e153
- (void)postChangeNotification;	// IMP=0x000000000022e0f9
@property(readonly, copy, nonatomic) NSArray *items;
- (_Bool)containsItemWithIdentifier:(long long)arg1;	// IMP=0x000000000022dc19
- (void)addItem:(id)arg1;	// IMP=0x000000000022d5fa
@property(readonly, nonatomic) long long accountIdentifier;
- (id)initWithAccountIdentifier:(long long)arg1;	// IMP=0x000000000022d3f6

@end
