//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface VSPSPickerTableViewCell : PSTableCell
{
    UIPickerView *_pickerView;	// 120 = 0x78
}

+ (double)preferredHeight;	// IMP=0x001000000002f9f9
- (void).cxx_destruct;	// IMP=0x000000000002ff10
@property(readonly, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000002feae
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000002fe4a
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000002fdf7
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000002fdec
- (id)targetAsDelegate;	// IMP=0x000000000002fd25
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000002fa07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
