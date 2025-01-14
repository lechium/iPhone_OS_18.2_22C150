//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AutocompleteItemSource
{
    NSArray *_allItems;	// 8 = 0x8
    long long _sourceType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000ac2697
- (long long)sourceType;	// IMP=0x0010000000ac2686
- (id)debugDescription;	// IMP=0x0010000000ac2631
@property(readonly, nonatomic) unsigned long long count;
- (id)allItems;	// IMP=0x0010000000ac25ff
- (id)initWithAutocompleteItems:(id)arg1;	// IMP=0x0010000000ac2585
- (id)initWithServerCompletions:(id)arg1 serverSections:(id)arg2;	// IMP=0x0010000000ac22b9
- (id)init;	// IMP=0x0010000000ac22ab

@end

