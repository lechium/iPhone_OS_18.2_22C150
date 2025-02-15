//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BCSBusinessConfig, BCSItemIdentifying;

__attribute__((visibility("hidden")))
@interface BCSBusinessLookupResult : NSObject
{
    _Bool _hasBusiness;	// 8 = 0x8
    long long _matchingTruncatedHash;	// 16 = 0x10
    id <BCSBusinessConfig> _config;	// 24 = 0x18
    id <BCSItemIdentifying> _itemIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010b6d
@property(retain, nonatomic) id <BCSItemIdentifying> itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) id <BCSBusinessConfig> config; // @synthesize config=_config;
@property(nonatomic) long long matchingTruncatedHash; // @synthesize matchingTruncatedHash=_matchingTruncatedHash;
@property(nonatomic) _Bool hasBusiness; // @synthesize hasBusiness=_hasBusiness;
- (id)initForNoMatchWithConfig:(id)arg1;	// IMP=0x0000000000010af8
- (id)initForNoMatch;	// IMP=0x0000000000010adf
- (id)initForMatchWithTruncatedHash:(long long)arg1 config:(id)arg2;	// IMP=0x0000000000010ac2
- (id)initForMatchWithTruncatedHash:(long long)arg1;	// IMP=0x0000000000010aa5
- (id)initWithFilterMatchResult:(id)arg1 config:(id)arg2;	// IMP=0x00000000000109cb
- (id)initWithHasBusiness:(_Bool)arg1 matchingTruncatedHash:(long long)arg2 config:(id)arg3;	// IMP=0x000000000001094a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

