//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, SKUIClientContext, SKUIDeveloperInfo, SKUIProductInformationView;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoView : UIView
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIDeveloperInfo *_developerInfo;	// 16 = 0x10
    UIView *_infoSeparatorView;	// 24 = 0x18
    SKUIProductInformationView *_infoView;	// 32 = 0x20
    NSMutableArray *_lineViews;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000656f2
@property(readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000065542
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000653ad
- (void)layoutSubviews;	// IMP=0x0000000000065032
- (id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2;	// IMP=0x0000000000064592

@end
