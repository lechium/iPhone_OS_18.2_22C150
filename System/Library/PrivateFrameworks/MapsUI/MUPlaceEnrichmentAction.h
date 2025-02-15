//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MUPlaceEnrichmentAction : NSObject
{
    NSDictionary *_enrichmentAction;	// 8 = 0x8
    unsigned long long _actionType;	// 16 = 0x10
    unsigned long long _mkActionType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bbb6b
@property(readonly, nonatomic) unsigned long long mkActionType; // @synthesize mkActionType=_mkActionType;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSDictionary *enrichmentAction; // @synthesize enrichmentAction=_enrichmentAction;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bba39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb9bd
- (id)description;	// IMP=0x00000000000bb92c
- (id)initWithActionType:(unsigned long long)arg1 isValidated:(_Bool)arg2 mkActionType:(unsigned long long)arg3 metadata:(id)arg4;	// IMP=0x00000000000bb5ee
- (id)initWithActionType:(unsigned long long)arg1 isValidated:(_Bool)arg2 mkActionType:(unsigned long long)arg3;	// IMP=0x00000000000bb586

@end

