//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AutocompleteSection
{
    _Bool _isQuerySuggestionsSection;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (id)sectionWithTitle:(id)arg1 items:(id)arg2 isQuerySuggestionsSection:(_Bool)arg3;	// IMP=0x0040000000b85bc5
- (void).cxx_destruct;	// IMP=0x0020000000b85c84
@property(nonatomic) _Bool isQuerySuggestionsSection; // @synthesize isQuerySuggestionsSection=_isQuerySuggestionsSection;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 items:(id)arg2 isQuerySuggestionsSection:(_Bool)arg3;	// IMP=0x0010000000b85b2f

@end

