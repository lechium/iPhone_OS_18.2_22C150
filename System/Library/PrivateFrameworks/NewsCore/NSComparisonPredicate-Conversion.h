//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)
- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001dfb9d
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001df5dc
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001ded60
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001deb9c
- (unsigned long long)_comparisonOptionForString:(id)arg1;	// IMP=0x00600000001dea7e
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001de5c7
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001de2fb
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001de0ca
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001ddd41
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001dd7fd
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001dd39c
@end
