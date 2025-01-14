//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSURLPatternMatcher : NSObject
{
}

- (id)orderedKeysForPatternQuery:(id)arg1 originalURLQuery:(id)arg2 orderedOriginalURLQueryKeys:(id)arg3;	// IMP=0x00000000000662e0
- (id)extractedQueryByAddingKey:(id)arg1 value:(id)arg2 toExtractedQuery:(id)arg3;	// IMP=0x00000000000661e9
- (id)dictionaryFromQueryString:(id)arg1 orderedKeys:(id *)arg2;	// IMP=0x0000000000065e18
- (_Bool)isAnyMatchFoundForPathPattern:(id)arg1 countOfPathComponents:(long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000065c1d
- (id)extractedURLForOriginalURL:(id)arg1 originalURLPathComponents:(id)arg2 extractedPath:(id)arg3 extractedQuery:(id)arg4;	// IMP=0x00000000000659d4
- (id)extractedPathForExactMatchUsingScanner:(id)arg1 delimiter:(id)arg2 extractedPath:(id)arg3 patternPathComponent:(id)arg4;	// IMP=0x00000000000658e3
- (id)extractedPathForAnyMatchUsingScanner:(id)arg1 delimiter:(id)arg2 extractedPath:(id)arg3 countOfPathComponentsToMatch:(unsigned long long)arg4;	// IMP=0x00000000000657ce
- (id)matchPattern:(id)arg1 withURL:(id)arg2 forBundleID:(id)arg3 expirationDate:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000064b85
- (_Bool)isValidDomainForURL:(id)arg1 domainBundleIDPatterns:(id)arg2;	// IMP=0x0000000000064a28

@end

