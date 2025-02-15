//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSLookup.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupTask : AMSLookup
{
    NSArray *_identifiers;	// 8 = 0x8
    NSArray *_bundleIdentifiers;	// 16 = 0x10
    NSString *_storefrontCountryCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005facd
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000005f6d2
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;	// IMP=0x000000000005f60b
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000005f526
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2;	// IMP=0x000000000005f405
- (id)init;	// IMP=0x000000000005f2a8
- (id)callerID;	// IMP=0x000000000005f1aa
- (id)sharedBag;	// IMP=0x000000000005f0c0

@end

