//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIItem.h"

@class NSString;
@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIRedeemItem : SKUIItem
{
    id <SKUIArtworkProviding> _artworks;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000010ac86
- (void).cxx_destruct;	// IMP=0x000000000010aed1
@property(retain, nonatomic) id <SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010adb6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010ac8e
- (id)largestArtworkURL;	// IMP=0x000000000010ac0c
- (id)artworkURLForSize:(long long)arg1;	// IMP=0x000000000010abad
- (struct _NSRange)ageBandRange;	// IMP=0x000000000010ab9b

// Remaining properties
@property(nonatomic) long long itemIdentifier; // @dynamic itemIdentifier;
@property(nonatomic) long long itemKind; // @dynamic itemKind;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end
