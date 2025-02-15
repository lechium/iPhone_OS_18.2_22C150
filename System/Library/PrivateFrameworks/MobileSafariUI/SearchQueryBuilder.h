//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFSearchEngineInfo;

__attribute__((visibility("hidden")))
@interface SearchQueryBuilder : NSObject
{
    NSString *queryString;	// 8 = 0x8
    _SFSearchEngineInfo *engineInfo;	// 16 = 0x10
}

+ (id)searchQueryBuilderWithXWebSearchURL:(id)arg1 forPrivateBrowsing:(_Bool)arg2;	// IMP=0x00600000001111ac
+ (id)searchQueryBuilderWithQuery:(id)arg1 forPrivateBrowsing:(_Bool)arg2;	// IMP=0x0060000000111152
- (void).cxx_destruct;	// IMP=0x000000000011123c
- (id)searchEngineInfo;	// IMP=0x000000000011122e
- (id)queryString;	// IMP=0x0000000000111220
- (id)searchURL;	// IMP=0x0000000000111206
- (id)initWithXWebSearchURL:(id)arg1 forPrivateBrowsing:(_Bool)arg2;	// IMP=0x0000000000110f1d
- (id)initWithQueryString:(id)arg1 forPrivateBrowsing:(_Bool)arg2;	// IMP=0x0000000000110e7d
- (id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2;	// IMP=0x0000000000110dd4

@end

