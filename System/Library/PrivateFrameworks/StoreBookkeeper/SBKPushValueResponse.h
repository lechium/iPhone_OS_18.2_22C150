//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKPushValueResponse : SBKResponse
{
    NSString *_domainVersion;	// 8 = 0x8
    NSData *_conflictItemValuePayload;	// 16 = 0x10
    NSString *_conflictItemKey;	// 24 = 0x18
    NSString *_conflictItemVersionAnchor;	// 32 = 0x20
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;	// IMP=0x006000000001b994
- (void).cxx_destruct;	// IMP=0x000000000001bbd0
@property(readonly, nonatomic) NSString *conflictItemVersionAnchor; // @synthesize conflictItemVersionAnchor=_conflictItemVersionAnchor;
@property(readonly, nonatomic) NSString *conflictItemKey; // @synthesize conflictItemKey=_conflictItemKey;
@property(readonly, nonatomic) NSData *conflictItemValuePayload; // @synthesize conflictItemValuePayload=_conflictItemValuePayload;
@property(readonly, nonatomic) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;	// IMP=0x000000000001ba08

@end

