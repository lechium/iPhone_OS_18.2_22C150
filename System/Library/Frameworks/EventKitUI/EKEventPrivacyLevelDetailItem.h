//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISwitch, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventPrivacyLevelDetailItem
{
    UITableViewCell *_cell;	// 48 = 0x30
    UISwitch *_control;	// 56 = 0x38
    _Bool _switchStateIsOn;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000019fd7c
- (void)_switchChanged:(id)arg1;	// IMP=0x000000000019fbd2
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019fa01
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x000000000019f9e1
- (void)setEvent:(id)arg1 reminder:(id)arg2 store:(id)arg3;	// IMP=0x000000000019f965
- (void)reset;	// IMP=0x000000000019f95f

@end
