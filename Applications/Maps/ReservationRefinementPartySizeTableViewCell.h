//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIStepper;

@interface ReservationRefinementPartySizeTableViewCell
{
    UIStepper *_stepperControl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000009492e6
@property(readonly, nonatomic) UIStepper *stepperControl; // @synthesize stepperControl=_stepperControl;
- (void)updateStepperValueToValue:(unsigned long long)arg1;	// IMP=0x0010000000949258
- (void)updateLabel;	// IMP=0x0010000000949138
- (void)valueChanged:(id)arg1;	// IMP=0x0010000000949126
- (void)setupConstraints;	// IMP=0x0010000000948f1f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000948ddc

@end
