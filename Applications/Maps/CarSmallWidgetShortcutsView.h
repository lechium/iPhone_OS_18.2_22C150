//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarWidgetShortcutsProvider;

@interface CarSmallWidgetShortcutsView
{
    CarWidgetShortcutsProvider *_shortcutsProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000eb4f47
- (void)didSelectItemAtIndexPath:(id)arg1;	// IMP=0x0010000000eb49f4
- (id)modelForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000eb4884
- (id)data;	// IMP=0x0010000000eb47ef
- (void)refreshShortcuts;	// IMP=0x0010000000eb47dd
- (id)initWithShortcutsProvider:(id)arg1;	// IMP=0x0010000000eb4741

@end
