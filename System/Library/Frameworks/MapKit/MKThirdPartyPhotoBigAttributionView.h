//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKThirdPartyPhotoBigAttributionView
{
    _MKUILabel *_firstLineLabel;	// 8 = 0x8
    _MKUILabel *_secondLineLabel;	// 16 = 0x10
    UIView *_labelsView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a18b3
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x00000000000a188e
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x00000000000a186e
- (void)didUpdateAttributionViewType;	// IMP=0x00000000000a185c
- (void)didUpdateMapItem;	// IMP=0x00000000000a184a
- (id)secondLineLabelFont;	// IMP=0x00000000000a17f7
- (id)firstLineLabelFont;	// IMP=0x00000000000a1799
- (void)updateInfoAttributionString;	// IMP=0x00000000000a137b
- (id)initWithContext:(long long)arg1;	// IMP=0x00000000000a0786

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

