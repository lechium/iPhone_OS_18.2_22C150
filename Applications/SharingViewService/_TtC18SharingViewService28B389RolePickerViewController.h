//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIPickerView;

@interface _TtC18SharingViewService28B389RolePickerViewController
{
    MISSING_TYPE *rolePickerView;	// 8 = 0x8
    MISSING_TYPE *rolesLoaded;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009ded0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000009de40
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000009dd60
- (id)initWithMainController:(id)arg1;	// IMP=0x001000000009dd00
- (void)continuePressed:(id)arg1;	// IMP=0x001000000009d6c0
- (void)dismissPressed:(id)arg1;	// IMP=0x001000000009d1e0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000009d1a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000009d170
@property(nonatomic) __weak UIPickerView *rolePickerView; // @synthesize rolePickerView;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x001000000009df20
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x001000000009df10
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x001000000009df80
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x001000000009df70

@end

