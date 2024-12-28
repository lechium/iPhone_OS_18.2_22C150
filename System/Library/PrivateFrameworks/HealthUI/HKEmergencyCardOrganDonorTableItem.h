//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKMedicalIDEditorPickerCell;

__attribute__((visibility("hidden")))
@interface HKEmergencyCardOrganDonorTableItem
{
    HKMedicalIDEditorPickerCell *_editableCell;	// 8 = 0x8
    _Bool _isEditing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c6350
- (void)commitEditing;	// IMP=0x00000000001c6333
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x00000000001c630e
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x00000000001c62a4
- (long long)editingStyleForRowAtIndex:(long long)arg1;	// IMP=0x00000000001c622a
- (_Bool)canEditRowAtIndex:(long long)arg1;	// IMP=0x00000000001c6218
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c5cc2
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;	// IMP=0x00000000001c5c01
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;	// IMP=0x00000000001c5bc6
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x00000000001c5b44
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x00000000001c57c7
- (id)_createEditableCell;	// IMP=0x00000000001c56ec
- (id)possibleValues;	// IMP=0x00000000001c5216
- (_Bool)hasPresentableData;	// IMP=0x00000000001c520e
- (id)title;	// IMP=0x00000000001c519b

@end
