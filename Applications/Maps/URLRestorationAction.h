//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface URLRestorationAction
{
    _Bool _resetUI;	// 8 = 0x8
    _Bool _compatibleWithNavigation;	// 9 = 0x9
}

@property(nonatomic) _Bool compatibleWithNavigation; // @synthesize compatibleWithNavigation=_compatibleWithNavigation;
@property(nonatomic) _Bool resetUI; // @synthesize resetUI=_resetUI;
- (int)analyticsLaunchActionType;	// IMP=0x0010000000c9833b
- (_Bool)shouldResetUI;	// IMP=0x0010000000c9832b
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x0010000000c98323
- (_Bool)isCompatibleWithNavigation;	// IMP=0x0010000000c98313
- (id)initWithResetUI:(_Bool)arg1 compatibleWithNavigation:(_Bool)arg2;	// IMP=0x0010000000c9829f

@end
