//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLComponents.h>

@interface NSURLComponents (ParsecExtras)
+ (id)parsec_componentsWithString:(id)arg1;	// IMP=0x00600000000bf7b5
+ (id)parsec_componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;	// IMP=0x00600000000bf769
- (id)parsec_componentsAfterRemovingSubdomains;	// IMP=0x00100000000bf6ab
- (id)parsec_componentsForEmbeddedAMPURLFromRange:(struct _NSRange)arg1;	// IMP=0x00100000000bf4fb
- (struct _NSRange)embeddedAMPURLRange;	// IMP=0x00100000000bf49c
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;	// IMP=0x00100000000bf485
- (id)parsec_normalizedURLStringForDeepLinkIngest;	// IMP=0x00100000000bf46e
- (id)parsec_normalizedURLStringForLDAModel;	// IMP=0x00100000000bf457
- (id)parsec_normalizedURLStringForTLDFeatures;	// IMP=0x00100000000bf440
- (id)parsec_normalizedURLStringWithOptions:(unsigned long long)arg1;	// IMP=0x00100000000bef80
@end

