//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/_SFBrowserSavedState.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MockBrowserSavedState : _SFBrowserSavedState
{
    unsigned long long _tabsCount;	// 8 = 0x8
    NSString *_initalURLString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000135e81
@property(copy, nonatomic) NSString *initalURLString; // @synthesize initalURLString=_initalURLString;
@property(nonatomic) unsigned long long tabsCount; // @synthesize tabsCount=_tabsCount;
- (_Bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;	// IMP=0x0000000000135e35
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1 initialURLString:(id)arg2;	// IMP=0x0000000000135adc
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;	// IMP=0x0000000000135aaf

@end

