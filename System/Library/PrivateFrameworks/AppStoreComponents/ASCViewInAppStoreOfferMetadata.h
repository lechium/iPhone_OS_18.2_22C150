//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASCOfferMetadata.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000005e535
- (_Bool)isViewInAppStore;	// IMP=0x000000000005e6b2
@property(readonly, copy, nonatomic) NSString *title;
- (id)description;	// IMP=0x000000000005e603
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e5b8
- (unsigned long long)hash;	// IMP=0x000000000005e53d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e506
- (id)init;	// IMP=0x000000000005e4d7

@end

