//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SUUICharityTemplateViewElement : SUUIViewElement
{
    NSString *_campaignIdentifier;	// 8 = 0x8
    NSString *_charityMetadataURLString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000039f66
@property(readonly, nonatomic) NSString *charityMetadataURLString; // @synthesize charityMetadataURLString=_charityMetadataURLString;
@property(readonly, nonatomic) NSString *campaignIdentifier; // @synthesize campaignIdentifier=_campaignIdentifier;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x0000000000039e63
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000039d8a

@end

