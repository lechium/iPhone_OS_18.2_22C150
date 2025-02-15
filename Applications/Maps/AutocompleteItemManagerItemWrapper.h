//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AutocompleteMutableSection, PersonalizedCompoundItem;
@protocol PersonalizedAutocompleteItem;

@interface AutocompleteItemManagerItemWrapper : NSObject
{
    id <PersonalizedAutocompleteItem> _item;	// 8 = 0x8
    PersonalizedCompoundItem *_compoundItem;	// 16 = 0x10
    double _clientRankingScore;	// 24 = 0x18
    double _poiRelevanceScore;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
    AutocompleteMutableSection *_section;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000006a4ac2
@property(nonatomic) __weak AutocompleteMutableSection *section; // @synthesize section=_section;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) double poiRelevanceScore; // @synthesize poiRelevanceScore=_poiRelevanceScore;
@property(nonatomic) double clientRankingScore; // @synthesize clientRankingScore=_clientRankingScore;
@property(retain, nonatomic) PersonalizedCompoundItem *compoundItem; // @synthesize compoundItem=_compoundItem;
@property(retain, nonatomic) id <PersonalizedAutocompleteItem> item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 compoundItem:(id)arg2;	// IMP=0x00100000006a498c

@end

