//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSArray, NSString, SUUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SUUIMenuBarViewElement : SUUIViewElement
{
    NSArray *_titleViewElements;	// 8 = 0x8
    SUUIMenuBarViewElementConfiguration *_configuration;	// 16 = 0x10
}

+ (Class)_shelfMenuBarViewElementClass;	// IMP=0x00100000000ee160
+ (Class)_titlesMenuBarViewElementClass;	// IMP=0x00100000000ee14f
+ (id)supportedFeatures;	// IMP=0x00100000000edf87
- (void).cxx_destruct;	// IMP=0x00000000000ee50c
@property(retain, nonatomic) SUUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadMenuItems;	// IMP=0x00000000000ee171
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ee132
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;	// IMP=0x00000000000ee111
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000000ee06d
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000000edcf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
