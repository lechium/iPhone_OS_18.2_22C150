//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_timeView;	// 8 = 0x8
    _UIStatusBarStringView *_shortTimeView;	// 16 = 0x10
    _UIStatusBarStringView *_pillTimeView;	// 24 = 0x18
    _UIStatusBarStringView *_dateView;	// 32 = 0x20
}

+ (id)dateDisplayIdentifier;	// IMP=0x004000000144f9fb
+ (id)pillTimeDisplayIdentifier;	// IMP=0x004000000144f9e2
+ (id)shortTimeDisplayIdentifier;	// IMP=0x004000000144f9c9
+ (id)timeDisplayIdentifier;	// IMP=0x004000000144f9b0
- (void).cxx_destruct;	// IMP=0x000000000145076f
@property(retain, nonatomic) _UIStatusBarStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIStatusBarStringView *pillTimeView; // @synthesize pillTimeView=_pillTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *shortTimeView; // @synthesize shortTimeView=_shortTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *timeView; // @synthesize timeView=_timeView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000014505bb
- (void)_create_dateView;	// IMP=0x0000000001450561
- (void)_create_pillTimeView;	// IMP=0x0000000001450471
- (void)_create_shortTimeView;	// IMP=0x00000000014503ac
- (void)_create_timeView;	// IMP=0x00000000014502e7
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000144fa54
- (id)dependentEntryKeys;	// IMP=0x000000000144fa14

@end
