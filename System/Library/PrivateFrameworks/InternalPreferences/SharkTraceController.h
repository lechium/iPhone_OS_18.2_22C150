//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface SharkTraceController : PSListController
{
    long long _tailspinMode;	// 184 = 0xb8
    _Bool _tailspinDefaultEnabled;	// 192 = 0xc0
    PSSpecifier *_tailspinGroupSpecifier;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000000820a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000810e
- (id)specifiers;	// IMP=0x0000000000007e02
- (void)setTailspinMode:(long long)arg1;	// IMP=0x0000000000007dfc
- (void)readTailspinSettings;	// IMP=0x0000000000007df6
- (void)setTracingEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000007da3
- (id)tracingEnabled:(id)arg1;	// IMP=0x0000000000007d24

@end

