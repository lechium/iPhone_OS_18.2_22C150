//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface HKEmergencyCardTableItem : NSObject
{
    _Bool _isSecondaryProfile;	// 8 = 0x8
    _Bool _isInEditMode;	// 9 = 0x9
    _Bool _shouldShowHints;	// 10 = 0xa
    _HKMedicalIDData *_data;	// 16 = 0x10
    NSString *_profileFirstName;	// 24 = 0x18
    UIViewController *_owningViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000022d27e
@property(nonatomic) _Bool shouldShowHints; // @synthesize shouldShowHints=_shouldShowHints;
@property(readonly, nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(nonatomic) _Bool isSecondaryProfile; // @synthesize isSecondaryProfile=_isSecondaryProfile;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property(copy, nonatomic) NSString *profileFirstName; // @synthesize profileFirstName=_profileFirstName;
@property(retain, nonatomic) _HKMedicalIDData *data; // @synthesize data=_data;
- (void)timeZoneDidChange:(id)arg1;	// IMP=0x000000000022d1f0
- (void)localeDidChange:(id)arg1;	// IMP=0x000000000022d1ea
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2 disabled:(_Bool)arg3;	// IMP=0x000000000022d150
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;	// IMP=0x000000000022d13b
- (void)commitEditing;	// IMP=0x000000000022d135
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x000000000022d12f
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x000000000022d127
- (long long)editingStyleForRowAtIndex:(long long)arg1;	// IMP=0x000000000022d11f
- (_Bool)canEditRowAtIndex:(long long)arg1;	// IMP=0x000000000022d117
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;	// IMP=0x000000000022d111
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;	// IMP=0x000000000022d109
- (id)titleForFooter;	// IMP=0x000000000022d101
- (id)titleForHeader;	// IMP=0x000000000022d0f9
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x000000000022d0e8
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;	// IMP=0x000000000022d09b
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x000000000042e721
- (long long)numberOfRows;	// IMP=0x000000000022d090
- (struct UIEdgeInsets)separatorInset;	// IMP=0x000000000022d05f
- (id)title;	// IMP=0x000000000022d057
- (_Bool)hasPresentableData;	// IMP=0x000000000042e6d3
- (id)init;	// IMP=0x000000000022d043
- (id)initInEditMode:(_Bool)arg1;	// IMP=0x000000000022d008

@end
