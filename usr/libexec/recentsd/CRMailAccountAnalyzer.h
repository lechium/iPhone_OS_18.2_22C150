//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCache, NSLocale;

@interface CRMailAccountAnalyzer : NSObject
{
    CNCache *_cache;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
}

- (id)normalizeAddress:(id)arg1;	// IMP=0x0020000000013ab2
- (id)allAddresses;	// IMP=0x0010000000013a9c
- (_Bool)isAddressRestricted:(id)arg1;	// IMP=0x0010000000013a50
- (void)addAddress:(id)arg1 isRestricted:(_Bool)arg2;	// IMP=0x001000000001399d
- (void)dealloc;	// IMP=0x0010000000013962
- (id)initWithLocale:(id)arg1;	// IMP=0x0010000000013902
- (id)init;	// IMP=0x00100000000138ca

@end

