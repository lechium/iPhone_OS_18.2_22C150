//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPLinkMetadata, LPLinkView, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SFSquareRichLinkCell
{
    LPLinkView *_dummyLinkView;	// 8 = 0x8
    LPLinkMetadata *_metadata;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    LPLinkView *_linkView;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x00100000000d1b4d
- (void).cxx_destruct;	// IMP=0x00000000000d24ba
@property(retain, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d22e3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d1b5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
