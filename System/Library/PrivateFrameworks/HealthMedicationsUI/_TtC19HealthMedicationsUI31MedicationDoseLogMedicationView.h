//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19HealthMedicationsUI31MedicationDoseLogMedicationView : UIView
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *logDelegate;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_timeFormatter;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_medicationNameLabel;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_formStrengthLabel;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_medmojiImageView;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_notesLabel;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_skippedButton;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_takenButton;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_doseAmountTimeButton;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_medicationStackView;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_lowerSectionStackViewWithNotes;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_lowerSectionStackView;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_skippedTakenStackView;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_dividerView;	// 128 = 0x80
    MISSING_TYPE *lastDoseLabel;	// 136 = 0x88
    MISSING_TYPE *lastDoseLabelContainer;	// 144 = 0x90
    MISSING_TYPE *contentView;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000531d0
- (void)didTapUnitTime:(id)arg1;	// IMP=0x0000000000052b90
- (void)didTapRecord:(id)arg1;	// IMP=0x0000000000052b00
- (void)didTapSkip:(id)arg1;	// IMP=0x0000000000052a20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052940
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000052910
- (void)layoutSubviews;	// IMP=0x0000000000052690

@end
