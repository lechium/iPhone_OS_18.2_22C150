//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPPlaceCorrectableFlag, UISwitch;
@protocol RAPSwitchTableViewCellDelegate;

@interface RAPSwitchTableViewCell
{
    id <RAPSwitchTableViewCellDelegate> _delegate;	// 8 = 0x8
    UISwitch *_toggle;	// 16 = 0x10
    RAPPlaceCorrectableFlag *_correctableFlag;	// 24 = 0x18
    _Bool _switchState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009347a2
@property(readonly, nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(retain, nonatomic) RAPPlaceCorrectableFlag *correctableFlag; // @synthesize correctableFlag=_correctableFlag;
- (void)updateSwitchState:(_Bool)arg1;	// IMP=0x0010000000934728
- (void)updateValue:(id)arg1;	// IMP=0x00100000009346a9
@property(readonly, nonatomic) long long kind;
- (void)_updateContent;	// IMP=0x00100000009345e7
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000934487

@end

