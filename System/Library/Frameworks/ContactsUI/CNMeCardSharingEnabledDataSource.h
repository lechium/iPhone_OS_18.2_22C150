//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UISwitch;
@protocol CNMeCardSharingEnabledDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingEnabledDataSource : NSObject
{
    _Bool _sharingEnabled;	// 8 = 0x8
    id <CNMeCardSharingEnabledDelegate> _delegate;	// 16 = 0x10
    UISwitch *_enabledSwitch;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000183c15
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) __weak id <CNMeCardSharingEnabledDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didToggleEnabledSwitch:(id)arg1;	// IMP=0x0000000000183b4b
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000183b45
- (id)itemForIndex:(unsigned long long)arg1;	// IMP=0x0000000000183b2f
- (unsigned long long)numberOfItems;	// IMP=0x0000000000183b19
- (id)sectionFooterLabel;	// IMP=0x0000000000183b11
- (id)sectionHeaderLabel;	// IMP=0x0000000000183b09
- (void)buildItems;	// IMP=0x0000000000183a10
- (_Bool)supportsSelection;	// IMP=0x0000000000183a08
- (id)initWithSharingEnabled:(_Bool)arg1;	// IMP=0x00000000001838f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long selectedIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly) Class superclass;

@end

