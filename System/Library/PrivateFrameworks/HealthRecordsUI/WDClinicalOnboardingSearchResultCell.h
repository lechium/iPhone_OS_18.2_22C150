//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDMedicalRecordBrandCell.h"

@class HKClinicalProviderSearchResult, NSArray;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell
{
    HKClinicalProviderSearchResult *_searchResult;	// 8 = 0x8
    NSArray *_searchTerms;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000015807
@property(copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) HKClinicalProviderSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)_setAccessibilityIdentifier;	// IMP=0x0000000000015364
- (void)_updateForContentSizeCategory:(id)arg1;	// IMP=0x00000000000152a8
- (void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;	// IMP=0x0000000000014c00
- (void)_updateLabelVisibility;	// IMP=0x0000000000014a38
- (void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;	// IMP=0x0000000000014973
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000148c4

@end
