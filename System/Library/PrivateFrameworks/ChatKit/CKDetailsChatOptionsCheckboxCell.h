//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISwitch;

__attribute__((visibility("hidden")))
@interface CKDetailsChatOptionsCheckboxCell
{
    UISwitch *_controlSwitch;	// 8 = 0x8
}

+ (_Bool)shouldHighlight;	// IMP=0x0010000000508c34
+ (id)reuseIdentifier;	// IMP=0x0010000000508c27
- (void).cxx_destruct;	// IMP=0x0000000000508f43
@property(retain, nonatomic) UISwitch *controlSwitch; // @synthesize controlSwitch=_controlSwitch;
- (void)prepareForReuse;	// IMP=0x0000000000508eee
- (void)layoutSubviews;	// IMP=0x0000000000508db8
- (void)_configureNewControlSwitch;	// IMP=0x0000000000508cd0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000508c3c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000508ac3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
