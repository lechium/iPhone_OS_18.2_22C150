//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FRFeedPickerDataSourceSubscriptionSorter, NSArray, NSMutableSet, NSOrderedSet;

@interface FRFeedPickerSection : NSObject
{
    NSMutableSet *_mutableTags;	// 8 = 0x8
    FRFeedPickerDataSourceSubscriptionSorter *_sorter;	// 16 = 0x10
    NSOrderedSet *_popularTagIDs;	// 24 = 0x18
    CDUnknownBlockType _transformBlock;	// 32 = 0x20
    NSArray *_mostFrequentlyVisitedTags;	// 40 = 0x28
    NSArray *_recentlyOpenedTags;	// 48 = 0x30
    NSArray *_alphabeticalTags;	// 56 = 0x38
}

+ (id)feedPickerSectionWithTags:(id)arg1 sorter:(id)arg2 popularTagIDs:(id)arg3 transformBlock:(CDUnknownBlockType)arg4;	// IMP=0x0040000000033713
- (void).cxx_destruct;	// IMP=0x0020000000034080
@property(retain, nonatomic) NSArray *alphabeticalTags; // @synthesize alphabeticalTags=_alphabeticalTags;
@property(retain, nonatomic) NSArray *recentlyOpenedTags; // @synthesize recentlyOpenedTags=_recentlyOpenedTags;
@property(retain, nonatomic) NSArray *mostFrequentlyVisitedTags; // @synthesize mostFrequentlyVisitedTags=_mostFrequentlyVisitedTags;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(retain, nonatomic) NSOrderedSet *popularTagIDs; // @synthesize popularTagIDs=_popularTagIDs;
@property(retain, nonatomic) FRFeedPickerDataSourceSubscriptionSorter *sorter; // @synthesize sorter=_sorter;
@property(retain, nonatomic) NSMutableSet *mutableTags; // @synthesize mutableTags=_mutableTags;
- (void)_buildSortedArrays;	// IMP=0x0010000000033cff
- (id)_tagsForSortOrder:(unsigned long long)arg1;	// IMP=0x0010000000033cc9
- (id)feedDescriptorsForSort:(unsigned long long)arg1;	// IMP=0x0010000000033c49
- (long long)numberOfTags;	// IMP=0x0010000000033b43
- (_Bool)containsTag:(id)arg1;	// IMP=0x0010000000033ad5
- (long long)indexOfTag:(id)arg1 withSortOrder:(unsigned long long)arg2;	// IMP=0x0010000000033a2e
- (void)removeTag:(id)arg1;	// IMP=0x00100000000339af
- (void)addTags:(id)arg1;	// IMP=0x0010000000033930
- (void)addTag:(id)arg1;	// IMP=0x00100000000338b1
@property(readonly, copy, nonatomic) NSArray *tags;

@end

